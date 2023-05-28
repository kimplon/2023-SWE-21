#pragma once
#include <string>
#include <vector>
#include "Apply.h"

using namespace std;
/*
	클래스 이름 : Recruit
	기능	  : 채용에 대한 정의 및 아래 기능들을 구현함
	1. Recruit: Recruit의 생성자로 멤버변수를 초기화한다.
	2. getDetail: 이 채용의 자세한 정보를 넘겨주는 함수입니다.
	3. makeApply: 지원자를 받아와 지원 정보를 생성하고 지원 정보 리스트에 추가하는 함수입니다.
	4. getApplyList: 이 채용의 지원 정보 리스트를 넘겨주는 함수입니다.
*/
class Recruit {
private:
	string taskType;
	int headCount;
	string deadline;
	string companyName;
	int businessNumber;
	vector<Apply> applyList;
public:
	Recruit(string taskType, int headCount, string deadLine, string companyName, int businessNumber);
	void getDetail(string& myTaskType, int& myHeadCount, string& myDeadLine, string& myCompanyName, int& myBusinessNumber);
	void makeApply(NormalMember* creator);
	void getApplyList(vector<Apply> &list);
};