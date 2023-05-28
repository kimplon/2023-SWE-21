#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class SignUp;
/*
	Ŭ���� �̸� : SignUpUI
	���	  : ȸ�����Կ� ���� �Ʒ� User Interface ��ɵ��� ������
	1. SignUpUI: SignUpUI�� �����ڷ� ��� ���� ���� �Է��մϴ�.
	2. startInterface: ����ڿ� ��ȣ�ۿ��ϴ� �������̽��� �����Ű�� �Լ��Դϴ�.
	3. enterDefaultInfo: ȸ�������� �� �������� �Է¹ް� ��������� �� ��ü�� �����ϴ� �Լ��Դϴ�.
	4. setControl: Boundary�� Control�� �����ϴ� ����� �����Ѵ�.
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