#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class RegisterRecruit;
/*
	Ŭ���� �̸� : RegisterRecruitUI
	���	  : ä���Ͽ� ���� �Ʒ� User Interface ��ɵ��� ������
	1. RegisterRecruitUI: RegisterRecruitUI�� �����ڷ� ������� ���� �Է��մϴ�.
	2. startInterface: ����ڿ� ��ȣ�ۿ��ϴ� �������̽��� �����Ű�� �Լ��Դϴ�.
	3. enterDetails: ä���� ���� �����ϱ����� ���� �������� �Է¹޴� �Լ��Դϴ�.
	4. setControl: Boundary�� Control�� �����ϴ� ����� �����Ѵ�.
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