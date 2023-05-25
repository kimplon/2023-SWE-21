#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "CompanyMember.h"
#include "Recruit.h"

using namespace std;

class SearchRecruitUI;

class SearchRecruit {
private:
	string session;
	SearchRecruitUI* ui;
	vector<CompanyMember> memberList;
public:
	SearchRecruit(SearchRecruitUI* myUI, vector<CompanyMember>& myMemberList, string& thisSession); //생성자
	void showRecruit(); //등록한 채용정보를 보여준다. 
};