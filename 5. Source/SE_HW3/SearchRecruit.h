#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "CompanyMember.h"
#include "Recruit.h"

using namespace std;

class SearchRecruitUI;
/*
	클래스 이름 : SearchRecruit
	기능	  : 채용 조회에 대한 아래 기능들을 구현함
	1. SearchRecruit: SearchRecruit의 생성자로 멤버변수 값을 입력한다.
	2. showRecruit: 채용정보들을 가져와 Bondary로 넘겨줘 출력을 요청하는 함수입니다.
*/

class SearchRecruit {
private:
	string session;
	SearchRecruitUI* ui;
	vector<CompanyMember> memberList;
public:
	SearchRecruit(SearchRecruitUI* myUI, vector<CompanyMember>& myMemberList, string& thisSession); //생성자
	void showRecruit(); //등록한 채용정보를 보여준다. 
};