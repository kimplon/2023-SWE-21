#pragma once
#include <vector>
#include <algorithm>
#include "CompanyMember.h"
#include "Recruit.h"

using namespace std;

class SearchApplyUI;
/*
	클래스 이름 : SearchApply
	기능	  : 지원 조회에 대한 아래 기능들을 구현함
	1. SearchApply: SearchApply의 생성자로 멤버변수를 초기화한다.
	2. showApply: 일반회원의 지원 정보를 회사이름 기준 오름차순 정렬로 보여주도록 함수이다. 회사이름, 사업자번호, 업무, 인원수, 기한을 가져와 Boundary로 넘겨준다.
*/
class SearchApply {
private:
	string& session;
	SearchApplyUI* ui;
	vector<CompanyMember>& memberList;
public:
	SearchApply(string& thisSession, SearchApplyUI* myUI, vector<CompanyMember>& cml);
	void showApply();
};