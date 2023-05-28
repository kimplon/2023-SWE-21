#pragma once
#include <string>
#include <vector>
#include "Apply.h"

using namespace std;
/*
	Ŭ���� �̸� : Recruit
	���	  : ä�뿡 ���� ���� �� �Ʒ� ��ɵ��� ������
	1. Recruit: Recruit�� �����ڷ� ��������� �ʱ�ȭ�Ѵ�.
	2. getDetail: �� ä���� �ڼ��� ������ �Ѱ��ִ� �Լ��Դϴ�.
	3. makeApply: �����ڸ� �޾ƿ� ���� ������ �����ϰ� ���� ���� ����Ʈ�� �߰��ϴ� �Լ��Դϴ�.
	4. getApplyList: �� ä���� ���� ���� ����Ʈ�� �Ѱ��ִ� �Լ��Դϴ�.
*/
class Recruit {
private:
	string taskType;
	int headCount;
	string deadline;
	string companyName;
	int businessNumber;
	vector<Apply> applyList;
public:
	Recruit(string taskType, int headCount, string deadLine, string companyName, int businessNumber);
	void getDetail(string& myTaskType, int& myHeadCount, string& myDeadLine, string& myCompanyName, int& myBusinessNumber);
	void makeApply(NormalMember* creator);
	void getApplyList(vector<Apply> &list);
};