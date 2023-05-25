#pragma once

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class SearchRecruit;

class SearchRecruitUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	SearchRecruit* control;
public:
	SearchRecruitUI(ifstream* inputF, ofstream* outputF);
	void startInterface();
	void searchRecruit();
	void showDetail(string taskType, int headCount, string deadLine);  // 커뮤니케이션 수정 필요
	void setControl(SearchRecruit* thisControl);
};