#include <iostream>
#include "RegisterRecruit.h"
#include "RegisterRecruitUI.h"

using namespace std;
/*
	함수 이름 : RegisterRecruit::RegisterRecruit
	기능	  : RegisterRecruit의 생성자로 멤버변수에 값을 전달합니다.
	전달 인자 : RegisterRecruitUI* myRegisterRecruitUI  : RegisterRecruitUI 객체
				string& thisSession		: 현재 로그인 된 아이디
				vector<CompanyMember>& myMemberList : 회사회원 리스트
	반환값    : 없음
*/
RegisterRecruit::RegisterRecruit(RegisterRecruitUI* myRegisterRecruitUI, string& thisSession, vector<CompanyMember>& myMemberList) : session(thisSession), memberList(myMemberList), ui(myRegisterRecruitUI) {
	ui->setControl(this);

	ui->startInterface();
}

/*
	함수 이름 : RegisterRecruit::createRecruit
	기능	  : 전달 받은 값으로 새로운 채용 정보를 생성하여 채용 정보 리스트에 추가하는 기능을 수행한다.
	전달 인자 : string taskType  : 업무
				int headCount  : 인원수
				string deadLine : 마감일
	반환값    : 없음
*/
void RegisterRecruit::createRecruit(string taskType, int headCount, string deadLine) {
	for (int i = 0; i < memberList.size(); i++) {
		if (!session.compare(memberList[i].getId())) {
			memberList[i].makeRecruit(taskType, headCount, deadLine);
			break;
		}
	}
}