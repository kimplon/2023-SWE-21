#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "CompanyMember.h"
#include "NormalMember.h"
#include "Recruit.h"

using namespace std;

class ApplyRecruitUI;
/*
	클래스 이름 : ApplyRecruit
	기능	  : 채용지원에 대한 아래 기능들을 구현함
	1. ApplyRecruit : ApplyRecruit의 생성자로 멤버변수에 값을 전달하고 채용지원을 시작하기 위한 setControl함수와 startInterface를 호출합니다.
	2. createApply : 지원 정보를 생성하여 지원 정보 리스트에 넣는 함수입니다.
	3. showRecruit : 채용 정보를 검색하는 함수입니다. 회사이름을 받아서 채용정보를 검색하는 과정을 거칩니다.
*/
class ApplyRecruit {
private:
	int inputType;
	ApplyRecruitUI* ui;
	string& session;
	vector<CompanyMember>& companyMemberList;
	vector<NormalMember>& normalMemberList;
public:
	ApplyRecruit(ApplyRecruitUI* myUI, vector<CompanyMember>& cml, vector<NormalMember>& nml, string& thisSession, int thisInputType, string& option);
	void createApply(string cname, int bnum, string& paramTaskType);
	void showRecruit(int optype, string cname);
};