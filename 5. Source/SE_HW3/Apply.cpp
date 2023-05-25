#include "Apply.h"
/*
	함수 이름 : Apply::Apply
	기능	  : Apply의 생성자로 멤버변수 값을 전달합니다.
	전달 인자 : string Companyname : 회사이름
				int businessNumber : 사업자 번호
				string taskType     :  업무
				int headCount   	: 인원수
				string Deadline	: 채용마감일
				NormalMember* thisCreator : 일반회원 <지원자>
	반환값    : 없음
*/
Apply::Apply(string Companyname, int businessNumber, string taskType, int headCount, string Deadline, NormalMember* thisCreator) {
	this->companyName = Companyname;
	this->businessNumber = businessNumber;
	this->taskType = taskType;
	this->headCount = headCount;
	this->deadline = Deadline;
	this->creator = thisCreator;
}

/*
	함수 이름 : Apply::getDetail
	기능	  : 전달받은 값들에 이 지원의 세부 정보를 넘겨주는 기능을 수행한다.
	전달 인자 : string &myCompanyName : 지원한 회사이름
			   int &myBusinessNumber  : 지원한 사업자 번호
			   string &myTaskType     : 지원한 업무
			   int &myHeadCount       : 지원한 인원수
			   string &myDeadline     : 지원한 채용마감일
	반환값    : 없음
*/
void Apply::getDetail(string &myCompanyName, int &myBusinessNumber, string &myTaskType, int &myHeadCount, string &myDeadline) {
	myCompanyName = companyName;
	myBusinessNumber = businessNumber;
	myTaskType = taskType;
	myHeadCount = headCount;
	myDeadline = deadline;
}
/*
	함수 이름 : Apply::getNormalMember
	기능	  : 채용에 지원한 일반회원(지원자)에 대한 정보를 반환하는 함수입니다.
	전달 인자 : 없음
	반환값    : NormalMember*
*/
NormalMember Apply::getNormalMember() {
	return *creator;
}