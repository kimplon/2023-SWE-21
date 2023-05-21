#include <iostream>
#include "SearchApply.h"
#include "Recruit.h"

using namespace std;


void SearchApply::showApply() {
	//지원 내역 조회 출력
	for (int i = 0; i < getApplyList.size(); i++) {		//지원 내역 리스트 출력
		cout << getApplyList[i];
	}
}