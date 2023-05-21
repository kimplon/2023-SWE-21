#pragma once
#include <string>
#include <vector>
#include "Member.h"
#include "Recruit.h"

using namespace std;

class CompanyMember :public Member {
private:
	std::string companyName;
	int businessNumber;
	vector<Recruit> recruitList;
public:
	CompanyMember(std::string id, std::string password, std::string companyName, int businessNumber);
	std::string getCompanyName();
	void makeRecruit();
	void getRecruitList(vector<Recruit> &list);
};