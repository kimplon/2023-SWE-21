#pragma once
#include <string>
#include <vector>
#include "Member.h"

using namespace std;

class CancelingUI;

class Canceling {
private:
	CancelingUI* ui;
	string session;
	vector<Member> memberList;
public:
	Canceling(string& thisSession, CancelingUI* myui, vector<Member>& myMemberList);
	void cancel();
};