#include <iostream>
#include "RegisterRecruit.h"

using namespace std;

RegisterRecruit::RegisterRecruit() {
	myRegisterRecruitUI = new RegisterRecruitUI();
	myRegisterRecruitUI->startInterface();

	string taskType; int headCount; string deadLine;
	
	myRegisterRecruitUI->enterDetails(taskType, headCount, deadLine);
	createRecruit(taskType, headCount, deadLine);
}


void RegisterRecruit::createRecruit(string& taskType, int& headCount, string& deadLine) {
	// companyMember에서 회사이름과 사업자번호를 넘겨와야하는데 이 부분을 아직 구현 못하겠음
	// 특히 사업자번호 부분이 private이여서 get 함수를 만들어야할듯?
	// 잘못 생각한 부분이 있는건지... 
	// 그렇다고 생성자를 다른 걸 만들어둬도 이상한 느낌...?
	// Member myMember = CompanyMember(id, password, name, number);
	// Recruit myRecruit = Recruit(myMember., taskType, headCount, deadLine);
}