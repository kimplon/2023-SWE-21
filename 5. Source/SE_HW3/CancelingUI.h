#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Canceling;

class CancelingUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	Canceling* control;
public:
	CancelingUI(ifstream* inputF, ofstream* outputF);
	void setControl(Canceling* myControl);
	void startInterface(string session);
	void enterCancel(string session);
};