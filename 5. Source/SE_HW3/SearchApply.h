#pragma once
#include <vector>
#include <algorithm>
#include "CompanyMember.h"
#include "Recruit.h"

using namespace std;

class SearchApplyUI;

class SearchApply {
private:
	string& session;
	SearchApplyUI* ui;
	vector<CompanyMember>& memberList;
public:
	SearchApply(string& thisSession, SearchApplyUI* myUI, vector<CompanyMember>& cml);
	void showApply();
};