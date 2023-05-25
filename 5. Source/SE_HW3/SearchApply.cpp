#include "SearchApply.h"
#include "SearchApplyUI.h"
using namespace std;
/*
�Լ� �̸� : compare
���	  : SearchApply::showApply()�� sort�κп� ���Ǵ� �Լ��ν�, Apply�� companyName �������� ������ ���� ���Ǵ� �Լ��Դϴ�.
���� ���� : Apply left: ������ �� Apply ��ü�̴�.
		    Apply right: ������ �� Apply ��ü�̴�.
��ȯ��    : ����
*/
bool compare(Apply left, Apply right) {
	string taskType1; int headCount1; string deadLine1; string companyName1; int bnumber1;
	string taskType2; int headCount2; string deadLine2; string companyName2; int bnumber2;

	left.getDetail(companyName1, bnumber1, taskType1, headCount1, deadLine1);
	right.getDetail(companyName2, bnumber2, taskType2, headCount2, deadLine2);

	return companyName1 < companyName2;
}
/*
	�Լ� �̸� : SearchApply::SearchApply
	���	  : SearchApply�� �����ڷ� ���������  �ʱ�ȭ�Ѵ�.
	���� ���� : string& thisSession : ���� �α��� �� ȸ���� ���̵��Դϴ�.
			   SearchApplyUI* myUI : SearchApplyUI�� ��ü�Դϴ�.
			   vector<CompanyMember>& cml : ȸ��ȸ���� ���� �Դϴ�.
	��ȯ��    : ����
*/
SearchApply::SearchApply(string& thisSession, SearchApplyUI* myUI, vector<CompanyMember>& cml) : session(thisSession), ui(myUI), memberList(cml) {
	ui->setControl(this);
	ui->startInterface();
}

/*
	�Լ� �̸� : SearchApply::showApply()
	���	  : �Ϲ�ȸ���� ���� ������ ȸ���̸� ���� �������� ���ķ� �����ֵ��� �Լ��̴�. ȸ���̸�, ����ڹ�ȣ, ����, �ο���, ������ ������ Boundary�� �Ѱ��ش�.
	���� ���� : ����
	��ȯ��    : ����
*/

void SearchApply::showApply() {
	vector<Apply> listForSearch;
	string cname; int bnum; string taskType; int headCount; string deadLine;
	for (int i = 0; i < memberList.size(); i++) {
		vector<Recruit> recruitList;
		memberList[i].getRecruitList(recruitList);
		for (int j = 0; j < recruitList.size(); j++) {
			vector<Apply> applyList;
			recruitList[j].getApplyList(applyList);

			for (int k = 0; k < applyList.size(); k++) {
				if (!session.compare(applyList[k].getNormalMember().getId())) {
					applyList[k].getDetail(cname, bnum, taskType, headCount, deadLine);
					NormalMember creator = applyList[k].getNormalMember();

					listForSearch.push_back(Apply(cname, bnum, taskType, headCount, deadLine, NULL)); // ��¿��� NormalMember ���ʿ��ؼ� NULLó�� ������
				}
			}
		}
	}

	sort(listForSearch.begin(), listForSearch.end(), compare);
	for (int i = 0; i < listForSearch.size(); i++) {
		listForSearch[i].getDetail(cname, bnum, taskType, headCount, deadLine);
		ui->showDetail(cname, bnum, taskType, headCount, deadLine);
	}
}