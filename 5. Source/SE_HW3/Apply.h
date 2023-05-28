#pragma once
#include<string>
#include "NormalMember.h"

using namespace std;
/*
	Ŭ���� �̸� : Apply
	��� : ���� ������ ���� �Ʒ� ��ɵ��� ������
	1. Apply: Apply�� ���� �����ڷ� ������� ���� �Է��մϴ�.
	2. getDetail: �� ���� ����(ȸ���̸�, ����ڹ�ȣ, ����, �ο���, ä�븶����) �� ���� �ڼ��� ������ ���޹��� ���� �Ѱ��ݴϴ�.
	3. getNormalMember: ä�뿡 ������ �Ϲ�ȸ��(������)�� ���� ������ ��ȯ�ϴ� �Լ��Դϴ�.
*/
class Apply {
private:
	string companyName;
	int businessNumber;
	string taskType;
	int headCount;
	string deadline;
	NormalMember* creator;
public:
	Apply(string Companyname, int businessNumber, string taskType, int headCount, string Deadline, NormalMember* thisCreator);
	void getDetail(string& myCompanyName, int& myBusinessNumber, string& myTaskType, int& myHeadCount, string& myDeadline);
	NormalMember getNormalMember();
};
