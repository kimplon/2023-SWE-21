#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class ApplyRecruit;
/*
	클래스 이름 : ApplyRecruitUI
	기능	  : 채용지원에 대한 아래 User Interface 기능들을 구현함
	1. ApplyRecruitUI: ApplyRecruitUI의 생성자로 멤버변수를 초기화한다.
	2. startInterface: 사용자와 상호작용할 인터페이스를 시작한다.
	3. applyForRecruit : 채용에 지원할 때 호출되는 함수이며, createApply함수를 호출한다.
	4. searchRecruit: 채용정보 조회를 요청하는 함수로, showRecruit 함수를 호출한다.
	5. showDetail: 채용조회를 할 때, 채용의 자세한 정보를 출력하는 함수이다.
	6. setControl: Boundary와 Control 사이 연결을 해주는 함수이다.
*/

class ApplyRecruitUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	ApplyRecruit* control;
public:
	ApplyRecruitUI(ifstream* inputF, ofstream* outputF);
	void startInterface(string session, int inputType, string& cname);
	void applyForRecruit(string cname);
	void searchRecruit(int optype, string& cname);
	void showDetail(string taskType, int headCount, string deadLine, string companyName, int bnumber);
	void setControl(ApplyRecruit* thisControl);
};