#pragma once

#include <iostream>
#include "SearchRecruitUI.h"
#include "Recruit.h"
using namespace std;

class SearchRecruit {
private:
	SearchRecruitUI* mySearchRecruitUI;
	vector<Recruit> memberList;
public:
	SearchRecruit(); //생성자
	void showRecruit(); //등록한 채용정보를 보여준다. 
};