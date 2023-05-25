#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class LogInOut;
/*
	클래스 이름 : LogInOutUI
	기능	  : 로그인, 아웃에 대한 아래 User Interface 기능들을 구현함
	1. LogInOutUI: LogInOutUI 생성자로 멤버변수값을 입력합니다.
	2. setControl: Boundary와 Control을 연결하는 기능을 수행한다.
	3. startInterface: 사용자와 상호작용하는 인터페이스를 실행하는 함수로 Control클래스의 로그인 / 로그아웃 기능을 호출한다.
	4. enterIDPW: 아이디와 패스워드를 입력하고, 저장 및 파일입출력하는 함수입니다.
	5. enterLogOut: 로그아웃되는 아이디를 파일입출력하는 함수입니다.
*/
class LogInOutUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	LogInOut* control;
public:
	LogInOutUI(ifstream* inputF, ofstream* outputF);
	void setControl(LogInOut* myControl);
	void startInterface(int logType, string session);
	void enterIDPW(string& id, string& pw);
	void enterLogOut(string session);
};