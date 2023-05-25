#include <iostream>
#include "NormalMember.h"
/*
	함수 이름 : NormalMember::NormalMember
	기능	  : NormalMember의 생성자로 멤버변수 값을 입력합니다.
	전달 인자 : string id		일반회원 아이디
			    string password	일반회원 비밀번호
			    string memberName  일반회원 이름
			    int socialSecurityNumber 일반회원 주민번호
	반환값    : 없음
*/
NormalMember::NormalMember(string id, string password, string memberName, int socialSecurityNumber) : Member(id, password) {
	this->memberName = memberName;
	this->socialSecurityNumber = socialSecurityNumber;
}