#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class LogInOut;
/*
	Ŭ���� �̸� : LogInOutUI
	���	  : �α���, �ƿ��� ���� �Ʒ� User Interface ��ɵ��� ������
	1. LogInOutUI: LogInOutUI �����ڷ� ����������� �Է��մϴ�.
	2. setControl: Boundary�� Control�� �����ϴ� ����� �����Ѵ�.
	3. startInterface: ����ڿ� ��ȣ�ۿ��ϴ� �������̽��� �����ϴ� �Լ��� ControlŬ������ �α��� / �α׾ƿ� ����� ȣ���Ѵ�.
	4. enterIDPW: ���̵�� �н����带 �Է��ϰ�, ���� �� ����������ϴ� �Լ��Դϴ�.
	5. enterLogOut: �α׾ƿ��Ǵ� ���̵� ����������ϴ� �Լ��Դϴ�.
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