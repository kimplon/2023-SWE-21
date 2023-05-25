#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class RegisterRecruit;

class RegisterRecruitUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	RegisterRecruit* control;
public:
	RegisterRecruitUI(ifstream* inputF, ofstream* outputF);
	void startInterface();
	void enterDetails(string& taskType, int& headCount, string& deadLine);
	void setControl(RegisterRecruit* myControl);
};