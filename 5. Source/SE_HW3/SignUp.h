#pragma once
#include <vector>
#include "Member.h"
#include "CompanyMember.h"
#include "NormalMember.h"

class SignUpUI;
/*
	클래스 이름 : SignUp
	기능	  : 회원가입에 대한 아래 기능들을 구현함
	1. SignUp: SignUp의 생성자로서 멤버 변수 값을 입력한다.
	2. checkIdRedundancy: 아이디 중복을 확인하는 함수로 회원 리스트에 이미 입력한 id 값이 존재한다면 true, 없다면 false를 반환합니다.
	3. createUser: 멤버타입, 이름, 번호, 아이디, 비밀번호를 매개변수로 받아서 아이디를 검증한 후,회원 목록에 새 회원을 만들어서 추가해주는 기능입니다.
*/
class SignUp {
private:
	SignUpUI* ui;
	vector<CompanyMember>& companyMemberList;
	vector<NormalMember>& normalMemberList;
public:
	SignUp(SignUpUI* myUI, vector<CompanyMember>& cml, vector<NormalMember>& nml);
	bool checkIdRedundancy(string id);
	void createUser(int memberType, string name, int number, string id, string password);
};