#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class SignUp;

class SignUpUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	SignUp* control;
public:
	SignUpUI(ifstream* in_fp, ofstream* out_fp);
	void startInterface(int& memberType, string& name, int& number, string& id, string& password);
	void enterDefaultInfo(int& type, string& userName, int& num, string& userId, string& pw);
	void setControl(SignUp* control);
};