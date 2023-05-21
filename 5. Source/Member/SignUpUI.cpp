#include "SignUpUI.h"

SignUpUI::SignUpUI() {
}

void SignUpUI::startInterface() {
	cout << "1.1 회원가입 :" << "\n";
}

void SignUpUI::enterDefaultInfo(int &type, string &na, int &num, string &ids, string &pw) {
	int memberType; string name; int number; string id; string password;

	cin >> memberType >> name >> number>> id >> password;
	cout << memberType << " " << name << " " << number << " " << id << " " << password;

	type = memberType; na = name; num = number; ids = id; pw = password;
}