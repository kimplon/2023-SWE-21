#pragma once
#include <iostream>

using namespace std;


class SignUpUI {
private:
	
public:
	SignUpUI();
	void startInterface();
	void enterDefaultInfo(int& type, string& na, int& num, string& ids, string& pw);
};