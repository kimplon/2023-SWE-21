#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class SearchApply;
/*
	Ŭ���� �̸� : SearchApplyUI
	���	  : ���� ��ȸ�� ���� �Ʒ� User Interface ��ɵ��� ������
	1. SearchApplyUI: SearchApplyUI�� �����ڷ� ��������� �Է��մϴ�.
	2. startInterface: ����ڿ� ��ȣ�ۿ��ϴ� �������̽��� �����ϴ� �Լ��Դϴ�.
	3. searchApply: ����ڰ� ������ ���� ������ ��ȸ �ϴ� showApply�Լ��� ȣ���մϴ�.
	4. showDetail: ���� ������ �� ����(ȸ���̸�, ����ڹ�ȣ, ����, �ο���, ä�븶������ ������ִ� �Լ��̴�.
	5. setControl:  Boundary�� Control�� �����ϴ� ����� �����Ѵ�.
*/
class SearchApplyUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	SearchApply* control;
public:
	SearchApplyUI(ifstream* inputF, ofstream* outputF);
	void startInterface();
	void searchApply();
	void showDetail(string cname, int bnum, string taskType, int headCount, string deadLine);
	void setControl(SearchApply* thisControl);
};