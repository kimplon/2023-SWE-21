#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Canceling;
/*
	Ŭ���� �̸� : CancelingUI
	���	  : ȸ��Ż�� ��ɿ� ���� �Ʒ� User Interface ��ɵ��� ������
	1. CancelingUI: CancelingUI�� �����ڷ� ������� ���� �Է��մϴ�.
	2. setControl:  Boundary�� Control�� �����ϴ� ����� �����Ѵ�..
	3. startInterface: ȸ��Ż�� ����ϴ� �������̽� �Լ��� enterCancle�Լ��� cancel �Լ��� ȣ���Ѵ�.
	4. enterCancel: Ż��� ���̵� ����ϴ� �Լ��̴�.
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