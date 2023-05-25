#include "Member.h"
/*
	함수 이름 : Member::Member
	기능	  : Member의 생성자로 멤버변수에 값을 전달합니다.
	전달 인자 : string id	   멤버 아이디
				string password 멤버 비밀번호
	반환값    : 없음
*/
Member::Member(string id, string password) {
	this->id = id; this->password = password;
}
/*
	함수 이름 : Member::getId
	기능	  : Member의 id값을 가져오는 함수입니다.
	전달 인자 : 없음
	반환값    : string
*/
string Member::getId() {
	return id;
}
/*
	함수 이름 : Member::getPassword
	기능	  : Member의 password값을 가져오는 함수입니다.
	전달 인자 : 없음
	반환값    : string
*/
string Member::getPassword() {
	return password;
}