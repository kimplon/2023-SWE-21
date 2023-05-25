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
	SearchRecruit(SearchRecruitUI* myUI, vector<CompanyMember>& myMemberList, string& thisSession); //������
	void showRecruit(); //����� ä�������� �����ش�. 
};