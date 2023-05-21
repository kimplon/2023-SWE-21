#include <iostream>
#include "ApplyRecruit.h"

using namespace std;

void ApplyRecruit :: createApply(int& bnum) {
	//지원한 회사정보 출력
	for (int i = 0; i < CompanyList.size(); i++) {		//주석처리된 부분
		if (bnum == getRecruitList[i].getid) {
			return getRecruitList[i];
		}
	}
}

void ApplyRecruit :: showRecruit(string& cname) {
	//지원정보 조회
	for (int i = 0; i < getApplyList.size(); i++) {
		if (cname == getApplyList[i].cname) {
			return getApplyList[i];
		}
	}
}
