#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Canceling;
/*
	클래스 이름 : CancelingUI
	기능	  : 회원탈퇴 기능에 대한 아래 User Interface 기능들을 구현함
	1. CancelingUI: CancelingUI의 생성자로 멤버변수 값을 입력합니다.
	2. setControl:  Boundary와 Control을 연결하는 기능을 수행한다..
	3. startInterface: 회원탈퇴를 담당하는 인터페이스 함수로 enterCancle함수와 cancel 함수를 호출한다.
	4. enterCancel: 탈퇴될 아이디를 출력하는 함수이다.
*/
class CancelingUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	Canceling* control;
public:
	CancelingUI(ifstream* inputF, ofstream* outputF);
	void setControl(Canceling* myControl);
	void startInterface(string session);
	void enterCancel(string session);
};