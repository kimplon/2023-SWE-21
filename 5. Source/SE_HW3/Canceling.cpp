#include "Canceling.h"
#include "CancelingUI.h"
/*
	함수 이름 : Canceling::Canceling
	기능	  : Canceling의 생성자로 멤버변수 값을 입력합니다.
	전달 인자 :
			   string& thisSession : 현재 로그인 한 회원의 아이디
			   CancelingUI* myui  :  cancelingUI의 객체를 참조(연결)
			   vector<CompanyMember>& cml : 회사회원 벡터(리스트)
			   vector<NormalMember>& nml   : 일반회원 벡터(리스트)
	반환값    : 없음
*/
Canceling::Canceling(string& thisSession, CancelingUI* myui, vector<CompanyMember>& cml, vector<NormalMember>& nml) : session(thisSession), ui(myui), companyMemberList(cml), normalMemberList(nml){
	ui->setControl(this);

	ui->startInterface(session);
}
/*
	함수 이름 : Canceling::cancel
	기능	  : 회원가입 된 멤버를 각 타입에 해당하는 리스트에서 삭제하는 함수이다.
	전달 인자 : 없음
	반환값    : 없음
*/
void Canceling::cancel() {
	for (int i = 0; i < companyMemberList.size(); i++) {
		string tempId = companyMemberList[i].getId();

		if (!tempId.compare(session)) {
			companyMemberList.erase(companyMemberList.begin() + i);
		}
	}
	for (int i = 0; i < normalMemberList.size(); i++) {
		string tempId = normalMemberList[i].getId();

		if (!tempId.compare(session)) {
			normalMemberList.erase(normalMemberList.begin() + i);
		}
	}

	session = "";
}