#include "SearchApply.h"
#include "SearchApplyUI.h"
using namespace std;
/*
함수 이름 : compare
기능	  : SearchApply::showApply()에 sort부분에 사용되는 함수로써, Apply의 companyName 오름차순 정렬을 위해 사용되는 함수입니다.
전달 인자 : Apply left: 정렬이 될 Apply 객체이다.
		    Apply right: 정렬이 될 Apply 객체이다.
반환값    : 없음
*/
bool compare(Apply left, Apply right) {
	string taskType1; int headCount1; string deadLine1; string companyName1; int bnumber1;
	string taskType2; int headCount2; string deadLine2; string companyName2; int bnumber2;

	left.getDetail(companyName1, bnumber1, taskType1, headCount1, deadLine1);
	right.getDetail(companyName2, bnumber2, taskType2, headCount2, deadLine2);

	return companyName1 < companyName2;
}
/*
	함수 이름 : SearchApply::SearchApply
	기능	  : SearchApply의 생성자로 멤버변수를  초기화한다.
	전달 인자 : string& thisSession : 현재 로그인 한 회원의 아이디입니다.
			   SearchApplyUI* myUI : SearchApplyUI의 객체입니다.
			   vector<CompanyMember>& cml : 회사회원의 벡터 입니다.
	반환값    : 없음
*/
SearchApply::SearchApply(string& thisSession, SearchApplyUI* myUI, vector<CompanyMember>& cml) : session(thisSession), ui(myUI), memberList(cml) {
	ui->setControl(this);
	ui->startInterface();
}

/*
	함수 이름 : SearchApply::showApply()
	기능	  : 일반회원의 지원 정보를 회사이름 기준 오름차순 정렬로 보여주도록 함수이다. 회사이름, 사업자번호, 업무, 인원수, 기한을 가져와 Boundary로 넘겨준다.
	전달 인자 : 없음
	반환값    : 없음
*/

void SearchApply::showApply() {
	vector<Apply> listForSearch;
	string cname; int bnum; string taskType; int headCount; string deadLine;
	for (int i = 0; i < memberList.size(); i++) {
		vector<Recruit> recruitList;
		memberList[i].getRecruitList(recruitList);
		for (int j = 0; j < recruitList.size(); j++) {
			vector<Apply> applyList;
			recruitList[j].getApplyList(applyList);

			for (int k = 0; k < applyList.size(); k++) {
				if (!session.compare(applyList[k].getNormalMember().getId())) {
					applyList[k].getDetail(cname, bnum, taskType, headCount, deadLine);
					NormalMember creator = applyList[k].getNormalMember();

					listForSearch.push_back(Apply(cname, bnum, taskType, headCount, deadLine, NULL)); // 출력에는 NormalMember 안필요해서 NULL처리 해줬음
				}
			}
		}
	}

	sort(listForSearch.begin(), listForSearch.end(), compare);
	for (int i = 0; i < listForSearch.size(); i++) {
		listForSearch[i].getDetail(cname, bnum, taskType, headCount, deadLine);
		ui->showDetail(cname, bnum, taskType, headCount, deadLine);
	}
}