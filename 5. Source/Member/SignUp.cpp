#include <iostream>
#include "SignUp.h"

using namespace std;

SignUp::SignUp(vector<Member> &memberList){
	this->memberList = memberList;

	myUI = new SignUpUI();
	myUI->startInterface();

	int memberType; string name; int number; string id; string password;
	myUI->enterDefaultInfo(memberType,name,number,id,password);
	createUser(memberType, name, number, id, password);
}

bool SignUp::checkIdRedundancy(string id) {
	for (int i = 0; i < memberList.size(); i++) {
		if (!id.compare(memberList[i].getId())) {
			return true;
		}
	}
	return false;
}

void SignUp::createUser(int memberType, string name, int number, string id, string password) {
	if (checkIdRedundancy(id)) {
		cout << "err" << "\n";
		return;
	}

	if (memberType == 1) {
		Member myMember = CompanyMember(id, password, name, number);
		memberList.push_back(myMember);
	}
	else {
		Member myMember = NormalMember(id, password, name, number);
		memberList.push_back(myMember);
	}
	
}