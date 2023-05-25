#pragma once
#include<string>
#include "NormalMember.h"

using namespace std;
/*
	클래스 이름 : Apply
	기능 : 지원 정보에 대한 아래 기능들을 구현함
	1. Apply: Apply에 대한 생성자로 멤버변수 값을 입력합니다.
	2. getDetail: 이 지원 정보(회사이름, 사업자번호, 업무, 인원수, 채용마감일) 에 대한 자세한 정보를 전달받은 값에 넘겨줍니다.
	3. getNormalMember: 채용에 지원한 일반회원(지원자)에 대한 정보를 반환하는 함수입니다.
*/
class Apply {
private:
	string companyName;
	int businessNumber;
	string taskType;
	int headCount;
	string deadline;
	NormalMember* creator;
public:
	Apply(string Companyname, int businessNumber, string taskType, int headCount, string Deadline, NormalMember* thisCreator);
	void getDetail(string& myCompanyName, int& myBusinessNumber, string& myTaskType, int& myHeadCount, string& myDeadline);
	NormalMember getNormalMember();
};
