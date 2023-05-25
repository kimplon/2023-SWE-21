#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class ApplyRecruit;

class ApplyRecruitUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	ApplyRecruit* control;
public:
	ApplyRecruitUI(ifstream* inputF, ofstream* outputF);
	void startInterface(string session, int inputType, string& cname);
	void applyForRecruit(string cname);
	void searchRecruit(int optype, string& cname);
	void showDetail(string taskType, int headCount, string deadLine, string companyName, int bnumber);
	void setControl(ApplyRecruit* thisControl);
};