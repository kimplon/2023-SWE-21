#include "ApplyRecruit.h"
#include "ApplyRecruitUI.h"
/*
�Լ� �̸� : compare
���	  : ApplyRecruit::showRecruit �Լ��� ���Ǵ� �Լ��� companyName �������� ������ ���� ���Ǵ� �Լ��Դϴ�.
���� ���� : Apply left: ������ �� Recruit ��ü�̴�.
			Apply right: ������ �� Recruit ��ü�̴�.
��ȯ��    : bool
*/
bool compare(Recruit left, Recruit right) {
	string taskType1; int headCount1; string deadLine1; string companyName1; int bnumber1;
	string taskType2; int headCount2; string deadLine2; string companyName2; int bnumber2;

	left.getDetail(taskType1, headCount1, deadLine1, companyName1, bnumber1);
	right.getDetail(taskType2, headCount2, deadLine2, companyName2, bnumber2);

	return companyName1 < companyName2;
}
/*
	�Լ� �̸� : ApplyRecruit::ApplyRecruit
	���	  : ApplyRecruit�� �����ڷ� ������� ���� �Է��մϴ�.
	���� ���� :
			   ApplyRecruitUI* myUI : ApplyRecruitUI�� ��ü�Դϴ�.
			   vector<CompanyMember>& cml : ȸ��ȸ���� �����Դϴ�.
			   vector<NormalMember>& nml : �Ϲ�ȸ���� �����Դϴ�.
			   string& thisSession : ���� �α��� �� ȸ���� ���̵��Դϴ�.
			   int thisInputType : ä������ �˻�, ä�������� ���� Ÿ�� ���Դϴ�.
			   string& option : ȸ���̸��Դϴ�.
	��ȯ��    : ����
*/
ApplyRecruit::ApplyRecruit(ApplyRecruitUI* myUI, vector<CompanyMember>& cml, vector<NormalMember>& nml, string& thisSession, int thisInputType, string& option) : ui(myUI), companyMemberList(cml), normalMemberList(nml), session(thisSession), inputType(thisInputType) {
	ui->setControl(this);
	ui->startInterface(session, inputType, option);
}

/*
	�Լ� �̸� : ApplyRecruit::createApply
	���	  : �Ϲ�ȸ���� ������ �����Ͽ� ���� ����Ʈ�� �ִ� �Լ��̴� .
	���� ���� : string cname : ȸ���̸�
				int bnum     : ����ڹ�ȣ
			   string& paramTaskType : ����
	��ȯ��    : ����
*/

void ApplyRecruit :: createApply(string cname, int bnum, string& paramTaskType) {
	for (int i = 0; i < companyMemberList.size(); i++) {
		vector<Recruit> recruitList;
		companyMemberList[i].getRecruitList(recruitList);
		for (int j = 0; j < recruitList.size(); j++) {
			string taskType; int headCount; string deadLine; string companyName; int bnumber;
			recruitList[j].getDetail(taskType, headCount, deadLine, companyName, bnumber);

			if (!companyName.compare(cname) && bnumber == bnum) {
				paramTaskType = taskType;
				for (int k = 0; k < normalMemberList.size(); k++) {
					if (!normalMemberList[k].getId().compare(session)) {
						recruitList[j].makeApply(&normalMemberList[k]);
						companyMemberList[i].setRecruitList(recruitList);
						break;
					}
				}
				break;
			}
		}
	}
}
/*
	�Լ� �̸� : ApplyRecruit::showRecruit()
	���	  : �Ϲ�ȸ���� ä�� ������ �˻��ϴ� �Լ��̴�.
	���� ���� : int optype : ä�� ������ �˻�����, ä�� ���������� ���� �ɼ� �Ű������̴�.
				string cname : ȸ���̸�
	��ȯ��    : ����
*/
void ApplyRecruit::showRecruit(int optype, string cname) {
	string taskType; int headCount; string deadLine; string companyName; int bnumber;
	if(optype == 1){
		vector<Recruit> listForSearch;
		for (int i = 0; i < companyMemberList.size(); i++) {
			vector<Recruit> recruitList;
			companyMemberList[i].getRecruitList(recruitList);

			for (int j = 0; j < recruitList.size(); j++) {
				recruitList[j].getDetail(taskType, headCount, deadLine, companyName, bnumber);

				if (!cname.compare(companyName)) {
					listForSearch.push_back(Recruit(taskType, headCount, deadLine, companyName, bnumber));
				}
			}
		}

		sort(listForSearch.begin(), listForSearch.end(), compare);
		for (int i = 0; i < listForSearch.size(); i++) {
			listForSearch[i].getDetail(taskType, headCount, deadLine, companyName, bnumber);
			ui->showDetail(taskType, headCount, deadLine, companyName, bnumber);
			
		}
	}
	else if (optype == 2) {
		ui->applyForRecruit(cname);
	}
}
