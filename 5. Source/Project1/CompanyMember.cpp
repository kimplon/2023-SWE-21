#include <iostream>
#include "CompanyMember.h"

CompanyMember::CompanyMember(string id, string password, string companyName, int businessNumber) : Member(id, password) {
	this->companyName = companyName;
	this->businessNumber = businessNumber;
}

string CompanyMember::getCompanyName() {
	return companyName;
}
void CompanyMember::makeRecruit() {
	Recruit newRecruit = new Recruit();
	recruitList.push_back(newRecruit);
}

void CompanyMember::getRecruitList(vector<Recruit> &list) {
	list = recruitList;
}