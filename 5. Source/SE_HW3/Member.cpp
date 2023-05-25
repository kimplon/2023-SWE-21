#include "Member.h"
/*
	함수 이름 : Member::Member
	기능	  : Member의 생성자로 멤버변수 값을 입력합니다.
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
	반환값    : id
*/
string Member::getId() {
	return id;
}
/*
	함수 이름 : Member::getPassword
	기능	  : Member의 password값을 가져오는 함수입니다.
	전달 인자 : 없음
	반환값    : password
*/
string Member::getPassword() {
	return password;
}