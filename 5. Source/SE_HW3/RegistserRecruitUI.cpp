#include "RegisterRecruitUI.h"
#include "RegisterRecruit.h"
/*
	함수 이름 : RegisterRecruitUI::RegisterRecruitUI
	기능	  : RegisterRecruitUI의 생성자로 멤버변수 값을 입력합니다.
	전달 인자 : ifstream* inputF: 파일입출력의 인풋 객체
				ofstream* outputF: 파일입출력의 아웃풋 객체
	반환값    : 없음
*/
RegisterRecruitUI::RegisterRecruitUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {
}
/*
	함수 이름 : RegisterRecruitUI::startInterface
	기능	  : 사용자와 상호작용하는 인터페이스를 실행시키는 함수입니다.
	전달 인자 : 없음
	반환값    : 없음
*/
void RegisterRecruitUI::startInterface() {
	*out_fp << "3.1. 채용정보 등록 :" << "\n";
	string taskType; int headCount; string deadLine;
	enterDetails(taskType, headCount, deadLine);
	control->createRecruit(taskType, headCount, deadLine);
}
/*
	함수 이름 : RegisterRecruitUI::enterDetails
	기능	  : 채용을 새로 생성하기위한 세부 정보들을 입력받는 함수입니다.
	전달 인자 : string& type  : 업무
				int& count   :	인원수
				string& time : 마감일
	반환값    : 없음
*/
void RegisterRecruitUI::enterDetails(string& type, int& count, string& time) {
	string taskType; int headCount; string deadLine;

	*in_fp >> taskType >> headCount >> deadLine;
	*out_fp << "> " << taskType << " " << headCount << " " << deadLine << "\n";

	type = taskType; count = headCount; time = deadLine;
}
/*
	함수 이름 : RegisterRecruitUI::setControl
	기능	  : Boundary와 Control을 연결하는 기능을 수행한다.
	전달 인자 : RegisterRecruit* myControl : RegisterRecruit 객체
	반환값    : 없음
*/
void RegisterRecruitUI::setControl(RegisterRecruit* myControl) {
	control = myControl;
}