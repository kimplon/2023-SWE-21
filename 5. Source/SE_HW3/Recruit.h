#pragma once
#include <string>
#include <vector>
#include "Apply.h"

using namespace std;

class Recruit {
private:
	string taskType;
	int headCount;
	string deadline;
	string companyName;
	int businessNumber;
	vector<Apply> applyList;
public:
	Recruit(string taskType, int headCount, string deadLine, string companyName, int businessNumber);
	void getDetail(string& myTaskType, int& myHeadCount, string& myDeadLine, string& myCompanyName, int& myBusinessNumber);
	void makeApply(NormalMember* creator);
	void getApplyList(vector<Apply> &list);
};