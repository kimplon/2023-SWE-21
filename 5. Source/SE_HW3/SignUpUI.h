#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class SignUp;
/*
	클래스 이름 : SignUpUI
	기능	  : 회원가입에 대한 아래 User Interface 기능들을 구현함
	1. SignUpUI: SignUpUI의 생성자로 멤버 변수 값을 입력합니다.
	2. startInterface: 사용자와 상호작용하는 인터페이스를 실행시키는 함수입니다.
	3. enterDefaultInfo: 회원가입의 상세 정보들을 입력받고 파일입출력 및 객체에 저장하는 함수입니다.
	4. setControl: Boundary와 Control을 연결하는 기능을 수행한다.
*/
class SignUpUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	SignUp* control;
public:
	SignUpUI(ifstream* in_fp, ofstream* out_fp);
	void startInterface(int& memberType, string& name, int& number, string& id, string& password);
	void enterDefaultInfo(int& type, string& userName, int& num, string& userId, string& pw);
	void setControl(SignUp* control);
};