#pragma once
#include <iostream>

using namespace std;

class Canceling;

class CancelingUI {
private:
	Canceling* control;
public:
	CancelingUI();
	void setControl(Canceling* myControl);
	void startInterface(string session);
	void enterCancel(string session);
};