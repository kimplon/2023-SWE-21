#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "Member.h"
#include "CompanyMember.h"
#include "NormalMember.h"

#include "LogInOut.h"
#include "LogInOutUI.h"
#include "SignUp.h"
#include "SignUpUI.h"
#include "CancelingUI.h"
#include "Canceling.h"

#include "RegisterRecruit.h"
#include "RegisterRecruitUI.h"
#include "SearchRecruitUI.h"
#include "SearchRecruit.h"

#include "ApplyRecruit.h"
#include "ApplyRecruitUI.h"
#include "SearchApply.h"
#include "SearchApplyUI.h"

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();

// ���� ����
FILE* in_fp, * out_fp;
/*
	�Լ� �̸� : main
	���	  : �����Լ��� �������� ����� �����ϴ� dotask�Լ��� ȣ���Ѵ�.
	���� ���� : ����
	��ȯ��    : ����
*/
int main() {
	doTask();

	return 0;
}
/*
	�Լ� �̸� : doTask
	���	  : �޴� �Ľ��� ���� �Լ��̸�, �Է°��� ���� �ش��ϴ� ��ü�� ������ �������̽��� �����Ѵ�.
	���� ���� : ����
	��ȯ��    : ����
*/
void doTask() {	
	vector<CompanyMember> companyMemberList;
	vector<NormalMember> normalMemberList;
	string session = "";
	string curSearchOption = "";
	// �޴� �Ľ��� ���� level ������ ���� ����
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;
	
	ifstream in_fp(INPUT_FILE_NAME);
	ofstream out_fp(OUTPUT_FILE_NAME);

	while (!is_program_exit)
	{
		// �Է����Ͽ��� �޴� ���� 2���� �б�
		//fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);
		
		if(in_fp.is_open()) in_fp >> menu_level_1 >> menu_level_2;

		// �޴� ���� �� �ش� ���� ����
		switch (menu_level_1) {
		case 1: {
			switch (menu_level_2) {
			case 1:   // "1.1. ȸ�����ԡ� �޴� �κ�
			{
				SignUpUI signUpBoundary(&in_fp, &out_fp);
				SignUp signUpControl(&signUpBoundary, companyMemberList, normalMemberList);
				break;
			}
			case 2:
			{
				CancelingUI cancelingBoundary(&in_fp, &out_fp);
				Canceling cancelingControl(session, &cancelingBoundary, companyMemberList, normalMemberList);
				break;
			}
			}
			break;
		}
		case 2:
		{
			LogInOutUI logBoundary(&in_fp, &out_fp);
			LogInOut logControl(session, &logBoundary, companyMemberList, normalMemberList, menu_level_2);
			break;
		}
		case 3:
		{
			switch (menu_level_2) {
			case 1:
			{
				RegisterRecruitUI registerRecruitBoundary(&in_fp, &out_fp);
				RegisterRecruit registerRecruitControl(&registerRecruitBoundary, session, companyMemberList);
				break;
			}
			case 2:
			{
				SearchRecruitUI searchRecruitBoundary(&in_fp, &out_fp);
				SearchRecruit registerRecruitControl(&searchRecruitBoundary, companyMemberList, session);
				break;
			}
			}
			break;
		}
		case 4: 
		{
			switch (menu_level_2) {
			case 1:
			{
				ApplyRecruitUI applyRecruitBoundary(&in_fp, &out_fp);
				ApplyRecruit applyRecruitControl(&applyRecruitBoundary, companyMemberList, normalMemberList, session, menu_level_2, curSearchOption);
				break;
			}
			case 2:
			{
				ApplyRecruitUI applyRecruitBoundary(&in_fp, &out_fp);
				ApplyRecruit applyRecruitControl(&applyRecruitBoundary, companyMemberList, normalMemberList, session, menu_level_2, curSearchOption);			
				break;
			}
			case 3: 
			{
				SearchApplyUI searchApplyBoundary(&in_fp, &out_fp);;
				SearchApply searchApplyControl(session, &searchApplyBoundary, companyMemberList);
				break;
			}
			}
			break;
		}
		case 6:
		{
			switch (menu_level_2) {
			case 1:   // "6.1. ���ᡰ �޴� �κ�
			{
				is_program_exit = 1;
				out_fp << "6.1. ����" << "\n";
				in_fp.close();
				out_fp.close();
				break;
			}
			}
			break;
		}
		}
		out_fp << "\n";
	}
	return;
}