#pragma once
#include<string>

using namespace std;
/*
	클래스 이름 : Member
	기능	  : 멤버에 대한 정의 및 아래 기능들을 구현함
	1. Member: Member의 생성자로 멤버변수 값을 입력합니다.
	2. getId: Member의 id값을 가져오는 함수입니다.
	3. getPassword:  Member의 password값을 가져오는 함수입니다.
*/
class Member {
private:
	string id;
	string password;
public:
	Member(string id, string password);
	string getId();
	string getPassword();
};