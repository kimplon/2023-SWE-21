#include "SearchRecruit.h"
#include "SearchRecruitUI.h"
/*
	함수 이름 : SearchRecruit::SearchRecruit
	기능	  : SearchRecruit의 생성자로 멤버변수에 값을 전달한다.
	전달 인자 : SearchRecruitUI* myUI : 채용조회UI
				vector<CompanyMember>& myMemberList : 회사회원 리스트
				string& thisSession : 현재 로그인 한 회원
	반환값    : 없음
*/
SearchRecruit::SearchRecruit(SearchRecruitUI* myUI, vector<CompanyMember>& myMemberList, string& thisSession) : ui(myUI), memberList(myMemberList), session(thisSession) {
	ui->setControl(this);
	ui->startInterface();
}
/*
	함수 이름 :  SearchRecruit::showRecruit
	기능	  : 현재 사용자 session과 id를 비교하여 사용자가 등록한 채용 정보를 찾고 출력하도록 Boundary로 넘겨주는 기능을 수행한다.
	전달 인자 : string session : 현재 로그인 한 회원
	반환값    :  없음
*/

void SearchRecruit::showRecruit() {
	for (int i = 0; i < memberList.size(); i++) {
		if (!session.compare(memberList[i].getId())) {
			vector<Recruit> recruitList;
			memberList[i].getRecruitList(recruitList);

			for (int j = 0; j < recruitList.size(); j++) {
				string myTaskType;
				int myHeadCount;
				string myDeadLine;
				string myCompanyName;
				int myBusinessNumber;

				recruitList[j].getDetail(myTaskType, myHeadCount, myDeadLine, myCompanyName, myBusinessNumber);
				ui->showDetail(myTaskType, myHeadCount, myDeadLine);
			}
			break;
		}
	}
}

