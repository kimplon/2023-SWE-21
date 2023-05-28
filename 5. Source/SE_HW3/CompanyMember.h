#pragma once
#include <string>
#include <vector>
#include "Member.h"
#include "Recruit.h"

using namespace std;
/*
	클래스 이름 : CompanyMember
	기능	  : 회사 회원을 정의한 클래스로, 아래와 같은 기능들을 구현함
	1. CompanyMember: CompanyMember의 생성자로 멤버변수 값을 입력합니다.
	2. getCompanyName: 회사회원의 회사이름을 가져오는 함수입니다.
	3. makeRecruit: 채용을 만들어서 채용 정보 리스트에 등록하는 함수입니다.
	4. getRecruitList: 전달 받은 값에 이 회사 회원이 등록한 채용 정보 리스트를 넘겨주는 기능을 수행한다.
	5. setRecruitList: 가져온 채용 정보 리스트에 변화가 생겼을 때 이를 원본에 반영하는 기능을 수행한다.
*/
class CompanyMember :public Member {
private:
	std::string companyName;
	int businessNumber;
	vector<Recruit> recruitList;
public:
	CompanyMember(std::string id, std::string password, std::string companyName, int businessNumber);
	std::string getCompanyName();
	void makeRecruit(string taskType, int headCount, string deadLine);
	void getRecruitList(vector<Recruit>& list);
	void setRecruitList(const vector<Recruit>& list);
};