#include "SearchRecruitUI.h"
#include "SearchRecruit.h"
/*
	함수 이름 : SearchRecruitUI::SearchRecruitUI
	기능	  : SearchRecruitUI의 생성자로 멤버변수 값을 입력한다.
	전달 인자 : ifstream* inputF: 파일입출력의 인풋 객체
				ofstream* outputF: 파일입출력의 아웃풋 객체
	반환값    : 없음
*/
SearchRecruitUI::SearchRecruitUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {
}
/*
	함수 이름 :   SearchRecruitUI::startInterface
	기능	  : 사용자와 상호작용하는 인터페이스를 실행시키는 함수입니다.
	전달 인자 : string session : 현재 로그인 한 회사회원 아이디
	반환값    : 없음
*/
void SearchRecruitUI::startInterface() {
	*out_fp << "3.2. 등록된 채용 정보 조회" << "\n";
	searchRecruit();
}
/*
	함수 이름 : SearchRecruitUI::searchRecruit
	기능	  : 채용정보조회를 위해 showResult함수를 호출합니다.
	전달 인자 : string session : 현재 로그인 한 회사회원 아이디
	반환값    : 없음
*/
void SearchRecruitUI::searchRecruit() {
	control->showRecruit();
}
/*
	함수 이름 :  SearchRecruitUI::setControl
	기능	  : Boundary와 Control을 연결하는 기능을 수행한다.
	전달 인자 : SearchRecruit* thisControl : SearchRecruit 객체
	반환값    : bool(false, true)
*/
void SearchRecruitUI::setControl(SearchRecruit* thisControl) {
	control = thisControl;
}
/*
	함수 이름 : SearchRecruitUI::showDetail
	기능	  : 채용정보 조회에서 자세한 정보를 출력하는 기능을 수행합니다.
	전달 인자 : string taskType : 업무
				int headCount  :인원수
				string deadLine : 마감일
	반환값    : 없음
*/
void SearchRecruitUI::showDetail(string taskType, int headCount, string deadLine) {
	*out_fp << "> " << taskType << " " << headCount << " " << deadLine << "\n";
}