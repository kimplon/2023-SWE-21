#include <iostream>
#include "CompanyMember.h"

/*
	함수 이름 : CompanyMember::CompanyMember
	기능	  : CompanyMember의 생성자로 멤버변수 값을 입력합니다.
	전달 인자 : string id		: 회사회원 아이디
		 	    string password	: 회사회원 비밀번호
		 	    string companyName  : 회사이름
			    int businessNumber   : 사업자 번호
	반환값    : 없음
*/
CompanyMember::CompanyMember(string id, string password, string companyName, int businessNumber) : Member(id, password) {
	this->companyName = companyName;
	this->businessNumber = businessNumber;
}
/*
	함수 이름 : CompanyMember::getCompanyName
	기능	  : 회사회원의 회사이름을 가져오는 함수입니다.
	전달 인자 : 없음
	반환값    : companyName
*/
string CompanyMember::getCompanyName() {
	return companyName;
}
/*
	함수 이름 : CompanyMember:::makeRecruit
	기능	  : 회사회원이 채용을 만들어서 채용 리스트에 등록하는 함수입니다 .
	전달 인자 : string taskType : 업무
		   	    int headCount  : 인원수
			    string deadLine : 마감일
	반환값    : 없음
*/
void CompanyMember::makeRecruit(string taskType, int headCount, string deadLine) {
	Recruit myRecruit = Recruit(taskType, headCount, deadLine, companyName, businessNumber);
	recruitList.push_back(myRecruit);
}
/*
	함수 이름 : CompanyMember::getRecruitList
	기능	  : 채용리스트를 가져오는 함수입니다. .
	전달 인자 : vector<Recruit>& list : 채용 리스트
	반환값    : 없음
*/
void CompanyMember::getRecruitList(vector<Recruit>& list) {
	list = recruitList;
}
/*
	함수 이름 : CompanyMember::setRecruitList
	기능	  : Recruit 목록에 변화가 생겼을 때 이를 반영하기 위해 사용되는 함수입니다.
	전달 인자 : vector<Recruit>& list : 채용 리스트
	반환값    : 없음
*/
void CompanyMember::setRecruitList(const vector<Recruit>& list) {
	recruitList = list;
}