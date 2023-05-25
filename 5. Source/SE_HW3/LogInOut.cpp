#include "LogInOut.h"
#include "LogInOutUI.h"
/*
	함수 이름 : LogInOut::LogInOut
	기능	  : LogInOut 생성자로 멤버변수 값을 입력합니다.
	전달 인자 : string &thisSession  		:
			LogInOutUI* myui		:
			vector<CompanyMember>& cml :
			vector<NormalMember>& nml  :
			int thisLogType
	반환값    : 없음
*/
LogInOut::LogInOut(string &thisSession, LogInOutUI* myui, vector<CompanyMember>& cml, vector<NormalMember>& nml, int thisLogType) : ui(myui), session(thisSession), companyMemberList(cml), normalMemberList(nml), logType(thisLogType) {
	ui->setControl(this);

	ui->startInterface(logType, session);
}
/*
	함수 이름 : LogInOut::runLogIn
	기능	  : 로그인을 수행하는 함수입니다.
	전달 인자 : string userId :유저 아이디
				string password : 유저 비밀번호
	반환값    : 없음
*/
void LogInOut::runLogIn(string userId, string password) {	//  리턴값 변경점
	
		for (int i = 0; i < companyMemberList.size(); i++) {
			string tempId = companyMemberList[i].getId();
			string tempPw = companyMemberList[i].getPassword();

			if (!userId.compare(tempId) && !password.compare(tempPw)) {
				session = tempId;
			}
		}
	
	
		for (int i = 0; i < normalMemberList.size(); i++) {
			string tempId = normalMemberList[i].getId();
			string tempPw = normalMemberList[i].getPassword();

			if (!userId.compare(tempId) && !password.compare(tempPw)) {
				session = tempId;
			}
		}
	
}
/*
	함수 이름 : LogInOut::runLogOut
	기능	  : 로그아웃을 수행하는 함수로 세션값을 비웁니다.
	전달 인자 : 없음
	반환값    : 없음
*/
void LogInOut::runLogOut() {
	session = "";
}