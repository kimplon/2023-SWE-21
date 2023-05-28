#pragma once
#include <string>
#include <vector>
#include "Member.h"

using namespace std;
/*
	클래스 이름 : NormalMember
	기능	  : 일반회원에 대한 정의 및 아래 기능을 구현함
	1. NormalMember: NormalMember 생성자로 멤버변수를 초기화한다.
*/
class NormalMember :public Member {
private:
	std::string memberName;
	int socialSecurityNumber;
public:
	NormalMember(std::string id, std::string password, std::string memberNme, int socailSecurityNumber);
};