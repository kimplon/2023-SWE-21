#pragma once
#include <vector>
#include <string>
#include "CompanyMember.h"

class RegisterRecruitUI;
/*
	클래스 이름 : RegisterRecruit
	기능	  : 채용등록에 대한 아래 기능들을 구현함
	1. RegisterRecruit: RegisterRecruit의 생성자로 멤버변수 값을 입력합니다.
	2. createRecruit: 채용을 새로 생성하여 회사 회원의 리스트로 입력합니다.
*/
class RegisterRecruit {
private:
	RegisterRecruitUI* ui;
	string session;
	vector<CompanyMember>& memberList;
public:
	RegisterRecruit(RegisterRecruitUI* myRegisterRecruitUI, string &session, vector<CompanyMember>& memberList);
	void createRecruit(string taskType, int headCount, string deadLine);
};