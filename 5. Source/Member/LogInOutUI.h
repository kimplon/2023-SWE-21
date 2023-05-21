#pragma once
#include <iostream>

using namespace std;

class LogInOut;

class LogInOutUI {
private:
	LogInOut* control;
public:
	LogInOutUI();
	void setControl(LogInOut* myControl);
	void startInterface(int logType, string session);
	void getLogType(int& logType);
	void enterIDPW(string& id, string& pw);
	void enterLogOut(string session);
};