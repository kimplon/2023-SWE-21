#pragma once
#include <vector>
#include "CompanyMember.h"
#include "NormalMember.h"

class LogInOutUI;
/*
	클래스 이름 : LogInOut
	기능	  : 로그인, 아웃에 대한 아래 기능들을 구현함
	1. LogInOut: LogInOut 생성자로 멤버변수 값을 입력합니다.
	2. runLogIn: 사용자로부터 id와 비밀번호를 입력받아서 companyMemberList에서 검증 후, 로그인을 수행하는 함수입니다.
	3. runLogOut: 로그아웃을 수행하는 함수로 세션값을 비웁니다.
*/
class LogInOut {
private:
	int logType;
	string& session;
	LogInOutUI* ui;
	vector<CompanyMember>& companyMemberList;
	vector<NormalMember>& normalMemberList;
public:
	LogInOut(string &thisSession, LogInOutUI *myui, vector<CompanyMember> &cml, vector<NormalMember>& nml, int logType);
	void runLogIn(string userId, string password);	// 리턴값 변경 주의
	void runLogOut();
};