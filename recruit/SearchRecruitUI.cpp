#include "SearchRecruitUI.h"

SearchRecruitUI::SearchRecruitUI() {
}

void SearchRecruitUI::startInterface() {
	cout << "3.2. 등록된 채용 정보 조회" << "\n";
}

// company 회원에서의 Recruit 검색은 자기 자신 회사의 채용정보리스트를 부르는 것이니
// company 회원의 속성인 companyName을 매개변수로 불러와야 할 것 같다는 생각이 들어서
// 아래 매개변수하나 생성을 하였음... 우선 매개변수로 구현을 해보겠습니다. 
void SearchRecruitUI::searchRecruit(string &name) {
	string companyName;

	
}