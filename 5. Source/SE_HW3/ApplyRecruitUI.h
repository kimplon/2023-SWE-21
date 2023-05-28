#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class ApplyRecruit;
/*
	Ŭ���� �̸� : ApplyRecruitUI
	���	  : ä�������� ���� �Ʒ� User Interface ��ɵ��� ������
	1. ApplyRecruitUI: ApplyRecruitUI�� �����ڷ� ��������� �ʱ�ȭ�Ѵ�.
	2. startInterface: ����ڿ� ��ȣ�ۿ��� �������̽��� �����Ѵ�.
	3. applyForRecruit : ä�뿡 ������ �� ȣ��Ǵ� �Լ��̸�, createApply�Լ��� ȣ���Ѵ�.
	4. searchRecruit: ä������ ��ȸ�� ��û�ϴ� �Լ���, showRecruit �Լ��� ȣ���Ѵ�.
	5. showDetail: ä����ȸ�� �� ��, ä���� �ڼ��� ������ ����ϴ� �Լ��̴�.
	6. setControl: Boundary�� Control ���� ������ ���ִ� �Լ��̴�.
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