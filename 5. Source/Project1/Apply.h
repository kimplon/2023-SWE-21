#pragma once
#include<string>
#include "Member.h"

using namespace std;

class Apply {
private:
	string Companyname;
	int businessNumber;
	string taskType;
	int headCount;
	string Deadline;
public:
	Apply(string Companyname, int businessNumber, string taskType, int headCount, string Deadline);
	void getDetail();
	NormalMember getNormalMember();
};
