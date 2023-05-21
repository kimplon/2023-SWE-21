#pragma once
#include <iostream>

using namespace std;

class RegisterRecruitUI {
private:

public:
	RegisterRecruitUI();
	void startInterface();
	void enterDetails(string& taskType, int& headCount, string& deadLine);
};