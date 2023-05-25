#pragma once
#include<string>
#include "NormalMember.h"

using namespace std;

class Apply {
private:
	string companyName;
	int businessNumber;
	string taskType;
	int headCount;
	string deadline;
	NormalMember* creator;
public:
	Apply(string Companyname, int businessNumber, string taskType, int headCount, string Deadline, NormalMember* thisCreator);
	void getDetail(string& myCompanyName, int& myBusinessNumber, string& myTaskType, int& myHeadCount, string& myDeadline);
	NormalMember getNormalMember();
};
