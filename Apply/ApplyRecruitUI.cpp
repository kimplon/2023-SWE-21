#include "ApplyRecruitUI.h"
#include "ApplyRecruit.h"

ApplyRecruitUI::ApplyRecruitUI() {
}

void ApplyRecruitUI::startInterface() {
	cout << "4.1 채용정보검색 :" << "\n";
}

void ApplyRecruitUI::applyForRecruit(int busnum) {
	int businessNumber;

	cin >>  businessNumber;
	busnum = businessNumber;
	ApplyRecruit createApply(busnum);	//사업자번호 넘겨줘야 할듯
	

	
}

void ApplyRecruitUI::searchRecruit(string comname) {
	string companyname;

	cin >> companyname;
	comname = companyname;
	ApplyRecruit ShowRecruit(comname);		//출력하기위해 회사이름도 넘겨줘야할듯

	
}