#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class RegisterRecruit;
/*
	클래스 이름 : RegisterRecruitUI
	기능	  : 채용등록에 대한 아래 User Interface 기능들을 구현함
	1. RegisterRecruitUI: RegisterRecruitUI의 생성자로 멤버변수 값을 입력합니다.
	2. startInterface: 사용자와 상호작용하는 인터페이스를 실행시키는 함수입니다.
	3. enterDetails: 채용을 새로 생성하기위한 세부 정보들을 입력받는 함수입니다.
	4. setControl: Boundary와 Control을 연결하는 기능을 수행한다.
*/
class RegisterRecruitUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	RegisterRecruit* control;
public:
	RegisterRecruitUI(ifstream* inputF, ofstream* outputF);
	void startInterface();
	void enterDetails(string& taskType, int& headCount, string& deadLine);
	void setControl(RegisterRecruit* myControl);
};