#pragma once
#include <string>
#include <vector>
#include "CompanyMember.h"
#include "NormalMember.h"

using namespace std;

class CancelingUI;
/*
	클래스 이름 : Canceling
	기능	  : 회원탈퇴 기능에 대한 아래 기능들을 구현함
	1. Canceling: Canceling의 생성자로 멤버변수 값을 입력합니다.
	2. cancel: 현재 로그인 상태 session을 회원 리스트와 비교해 해당하는 회원의 정보를 삭제하는 기능을 수행한다.
*/
class Canceling {
private:
	CancelingUI* ui;
	string session;
	vector<CompanyMember> companyMemberList;
	vector<NormalMember> normalMemberList;
public:
	Canceling(string& thisSession, CancelingUI* myui, vector<CompanyMember>& cml, vector<NormalMember>& nml);
	void cancel();
};