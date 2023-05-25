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

// 함수 선언
void doTask();

// 변수 선언
FILE* in_fp, * out_fp;
/*
	함수 이름 : main
	기능	  : 메인함수로 실질적인 기능을 수행하는 dotask함수를 호출한다.
	전달 인자 : 없음
	반환값    : 없음
*/
int main() {
	doTask();

	return 0;
}
/*
	함수 이름 : doTask
	기능	  : 메뉴 파싱을 위한 함수이며, 입력값에 따라 해당하는 객체를 생성해 인터페이스를 실행한다.
	전달 인자 : 없음
	반환값    : 없음
*/
void doTask() {	
	vector<CompanyMember> companyMemberList;
	vector<NormalMember> normalMemberList;
	string session = "";
	string curSearchOption = "";
	// 메뉴 파싱을 위한 level 구분을 위한 변수
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;
	
	ifstream in_fp(INPUT_FILE_NAME);
	ofstream out_fp(OUTPUT_FILE_NAME);

	while (!is_program_exit)
	{
		// 입력파일에서 메뉴 숫자 2개를 읽기
		//fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);
		
		if(in_fp.is_open()) in_fp >> menu_level_1 >> menu_level_2;

		// 메뉴 구분 및 해당 연산 수행
		switch (menu_level_1) {
		case 1: {
			switch (menu_level_2) {
			case 1:   // "1.1. 회원가입“ 메뉴 부분
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
			case 1:   // "6.1. 종료“ 메뉴 부분
			{
				is_program_exit = 1;
				out_fp << "6.1. 종료" << "\n";
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