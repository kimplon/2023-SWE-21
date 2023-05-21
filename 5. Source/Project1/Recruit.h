#pragma once
#include<string>
#include "Apply,h"
using namespace std;

class Recruit {
private:
	string taskType;
	int headCount;
	string deadLine;
	string companyName;
	int businessNumber;
public:
	Recruit(string taskType, int headCount, string deadLine, string companyName, int businessNumber);
	void getDetail();
	void makeApply();
	Apply getApplyList();
};