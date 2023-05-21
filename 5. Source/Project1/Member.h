#pragma once
#include<string>

using namespace std;

class Member {
private:
	string id;
	string password;
public:
	Member(string id, string password);
	string getId();
	string getPassword();
};