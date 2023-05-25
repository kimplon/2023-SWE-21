#include "Recruit.h"
/*
	함수 이름 : Recruit::Recruit
	기능	  : Recruit의 생성자로 멤버변수에 값을 전달합니다.
	전달 인자 : string taskType     업무
				int headCount     인원수
				string deadLine    채용마감일
				string companyName 회사이름
				int businessNumber 사업자번호
	반환값    : 없음
*/
Recruit::Recruit(string taskType, int headCount, string deadLine, string companyName, int businessNumber) {
	this->taskType = taskType;
	this->headCount = headCount;
	this->deadline = deadLine;
	this->companyName = companyName;
	this->businessNumber = businessNumber;
}
/*
	함수 이름 : Recruit::getDetail
	기능	  : 전달 받은 값들에 이 채용의 세부 정보를 넘겨주는 기능을 수행한다.
	전달 인자 : string &myTaskType    회사회원 채용업무
			    int &myHeadCount	   회사회원 인원수
			    string &myDeadLine	   회사회원 마감일
			    string &myCompanyName 회사회원 회사이름
			    int &myBusinessNumber   회사회원 사업자번호
	반환값    : 없음
*/
void Recruit::getDetail(string &myTaskType, int &myHeadCount, string &myDeadLine, string &myCompanyName, int &myBusinessNumber ) {
	myTaskType = taskType;
	myHeadCount = headCount;
	myDeadLine = deadline;
	myCompanyName = companyName;
	myBusinessNumber = businessNumber;
}
/*
	함수 이름 : Recruit::makeApply
	기능	  : 지원자를 받아와 지원 정보를 생성하고 지원 정보 리스트에 추가하는 기능을 수행한다.
	전달 인자 : NormalMember* creator : 일반회원 객체
	반환값    : 없음
*/
void Recruit::makeApply(NormalMember* creator) {
	applyList.push_back(Apply(companyName, businessNumber, taskType, headCount, deadline, creator));
}
/*
	함수 이름 : Recruit::getApplyList
	기능	  : 전달 받은 값에 이 채용의 지원 정보 리스트를 넘겨주는 기능을 수행한다.
	전달 인자 : vector<Apply> &list : 지원 리스트
	반환값    : 없음
*/
void Recruit::getApplyList(vector<Apply> &list) {
	list = applyList;
}