#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class LogInOut;

class LogInOutUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	LogInOut* control;
public:
	LogInOutUI(ifstream* inputF, ofstream* outputF);
	void setControl(LogInOut* myControl);
	void startInterface(int logType, string session);
	void enterIDPW(string& id, string& pw);
	void enterLogOut(string session);
};