#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class SearchApply;

class SearchApplyUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	SearchApply* control;
public:
	SearchApplyUI(ifstream* inputF, ofstream* outputF);
	void startInterface();
	void searchApply();
	void showDetail(string cname, int bnum, string taskType, int headCount, string deadLine);
	void setControl(SearchApply* thisControl);
};