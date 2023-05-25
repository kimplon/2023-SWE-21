#include "ApplyRecruit.h"
#include "ApplyRecruitUI.h"
/*
함수 이름 : compare
기능	  : ApplyRecruit::showRecruit 함수에 사용되는 함수로 companyName 오름차순 정렬을 위해 사용되는 함수입니다.
전달 인자 : Apply left: 정렬이 될 Recruit 객체이다.
			Apply right: 정렬이 될 Recruit 객체이다.
반환값    : bool
*/
bool compare(Recruit left, Recruit right) {
	string taskType1; int headCount1; string deadLine1; string companyName1; int bnumber1;
	string taskType2; int headCount2; string deadLine2; string companyName2; int bnumber2;

	left.getDetail(taskType1, headCount1, deadLine1, companyName1, bnumber1);
	right.getDetail(taskType2, headCount2, deadLine2, companyName2, bnumber2);

	return companyName1 < companyName2;
}
/*
	함수 이름 : ApplyRecruit::ApplyRecruit
	기능	  : ApplyRecruit의 생성자로 멤버변수 값을 입력합니다.
	전달 인자 :
			   ApplyRecruitUI* myUI : ApplyRecruitUI의 객체입니다.
			   vector<CompanyMember>& cml : 회사회원의 벡터입니다.
			   vector<NormalMember>& nml : 일반회원의 벡터입니다.
			   string& thisSession : 현재 로그인 한 회원의 아이디입니다.
			   int thisInputType : 채용정보 검색, 채용지원에 대한 타입 값입니다.
			   string& option : 회사이름입니다.
	반환값    : 없음
*/
ApplyRecruit::ApplyRecruit(ApplyRecruitUI* myUI, vector<CompanyMember>& cml, vector<NormalMember>& nml, string& thisSession, int thisInputType, string& option) : ui(myUI), companyMemberList(cml), normalMemberList(nml), session(thisSession), inputType(thisInputType) {
	ui->setControl(this);
	ui->startInterface(session, inputType, option);
}

/*
	함수 이름 : ApplyRecruit::createApply
	기능	  : 일반회원이 지원을 생성하여 지원 리스트에 넣는 함수이다 .
	전달 인자 : string cname : 회사이름
				int bnum     : 사업자번호
			   string& paramTaskType : 업무
	반환값    : 없음
*/

void ApplyRecruit :: createApply(string cname, int bnum, string& paramTaskType) {
	for (int i = 0; i < companyMemberList.size(); i++) {
		vector<Recruit> recruitList;
		companyMemberList[i].getRecruitList(recruitList);
		for (int j = 0; j < recruitList.size(); j++) {
			string taskType; int headCount; string deadLine; string companyName; int bnumber;
			recruitList[j].getDetail(taskType, headCount, deadLine, companyName, bnumber);

			if (!companyName.compare(cname) && bnumber == bnum) {
				paramTaskType = taskType;
				for (int k = 0; k < normalMemberList.size(); k++) {
					if (!normalMemberList[k].getId().compare(session)) {
						recruitList[j].makeApply(&normalMemberList[k]);
						companyMemberList[i].setRecruitList(recruitList);
						break;
					}
				}
				break;
			}
		}
	}
}
/*
	함수 이름 : ApplyRecruit::showRecruit()
	기능	  : 일반회원이 채용 정보를 검색하는 함수이다.
	전달 인자 : int optype : 채용 정보를 검색할지, 채용 지원할지에 대한 옵션 매개변수이다.
				string cname : 회사이름
	반환값    : 없음
*/
void ApplyRecruit::showRecruit(int optype, string cname) {
	string taskType; int headCount; string deadLine; string companyName; int bnumber;
	if(optype == 1){
		vector<Recruit> listForSearch;
		for (int i = 0; i < companyMemberList.size(); i++) {
			vector<Recruit> recruitList;
			companyMemberList[i].getRecruitList(recruitList);

			for (int j = 0; j < recruitList.size(); j++) {
				recruitList[j].getDetail(taskType, headCount, deadLine, companyName, bnumber);

				if (!cname.compare(companyName)) {
					listForSearch.push_back(Recruit(taskType, headCount, deadLine, companyName, bnumber));
				}
			}
		}

		sort(listForSearch.begin(), listForSearch.end(), compare);
		for (int i = 0; i < listForSearch.size(); i++) {
			listForSearch[i].getDetail(taskType, headCount, deadLine, companyName, bnumber);
			ui->showDetail(taskType, headCount, deadLine, companyName, bnumber);
			
		}
	}
	else if (optype == 2) {
		ui->applyForRecruit(cname);
	}
}
