#pragma once
#include <string>
#include <vector>
#include "Member.h"

using namespace std;

class NormalMember :public Member {
private:
	std::string memberName;
	int socialSecurityNumber;
public:
	NormalMember(std::string id, std::string password, std::string memberNme, int socailSecurityNumber);
};