#pragma once

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class SearchRecruit;
/*
	Ŭ���� �̸� : SearchRecruitUI
	���	  : ä�� ��ȸ�� ���� �Ʒ� User Interface ��ɵ��� ������
	1. SearchRecruitUI: SearchRecruitUI�� �����ڷ� ������� ���� �Է��Ѵ�.
	2. startInterface: ����ڿ� ��ȣ�ۿ��ϴ� �������̽��� �����Ű�� �Լ��Դϴ�.
	3 searchRecruit: ä��������ȸ�� ���� showResult�Լ��� ȣ���մϴ�.
	4. setControl: Boundary�� Control�� �����ϴ� ����� �����Ѵ�.
	5. showDetail: ä�� ������ �ڼ��� ������ ����ϴ� ����� �����մϴ�.
*/
class SearchRecruitUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	SearchRecruit* control;
public:
	SearchRecruitUI(ifstream* inputF, ofstream* outputF);
	void startInterface();
	void searchRecruit();
	void showDetail(string taskType, int headCount, string deadLine);  // Ŀ�´����̼� ���� �ʿ�
	void setControl(SearchRecruit* thisControl);
};