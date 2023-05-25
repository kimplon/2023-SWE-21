#include "ApplyRecruitUI.h"
#include "ApplyRecruit.h"
/*
	함수 이름 : ApplyRecruitUI::ApplyRecruitUI
	기능	  : ApplyRecruitUI의 생성자로 멤버변수를 초기화한다.
	전달 인자 :
			   ifstream* inputF  : 파일입출력의 인풋 객체
			   ofstream* outputF : 파일입출력의 아웃풋 객체
	반환값    : 없음
*/
ApplyRecruitUI::ApplyRecruitUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {
}
/*
	함수 이름 : ApplyRecruitUI::startInterface
	기능	  : 사용자와 상호작용할 인터페이스를 시작한다.
	전달 인자 : string session : 현재 로그인 한 회원의 아이디입니다.
				int inputType : 채용 정보를 검색할지, 채용 지원할지에 대한 옵션 매개변수이다.
			    string& cname : 회사이름이다.
	반환값    : 없음
*/
void ApplyRecruitUI::startInterface(string session, int inputType, string& cname) {
	if(inputType == 1){
		*out_fp << "4.1. 채용정보검색 :" << "\n";
		searchRecruit(inputType, cname);
	}
	else if (inputType == 2) {
		*out_fp << "4.2. 채용지원 : " << "\n";
		searchRecruit(inputType, cname);
	}
}
/*
	함수 이름 : ApplyRecruitUI::applyForRecurit
	기능	  : 일반회원이 채용에 지원할 때 호출되는 함수이며, createApply함수를 호출한다.
	전달 인자 : string cname : 회사이름
	반환값    : 없음
*/
void ApplyRecruitUI::applyForRecruit(string cname) {
	int businessNumber;	*in_fp >>  businessNumber;
	string taskType;
	control->createApply(cname, businessNumber, taskType);

	*out_fp << "> " << cname << " " << businessNumber << " " << taskType << "\n";
}
/*
	함수 이름 : ApplyRecruitUI::searchRecruit
	기능	  : 채용정보 조회를 요청하는 함수로, showRecruit 함수를 호출한다.
	전달 인자 : int optype: 채용 정보를 검색할지, 채용 지원할지에 대한 옵션 매개변수이다.
		  string& companyName : 회사이름
	반환값    : 없음
*/
void ApplyRecruitUI::searchRecruit(int optype, string& companyName) {
	if(optype == 1) *in_fp >> companyName;
	control->showRecruit(optype, companyName);
}
/*
	함수 이름 : ApplyRecruitUI::showDetail
	기능	  : 일반회원이 채용조회를 할 때, 채용의 자세한 정보를 출력하는 함수이다.
	전달 인자 : string taskType : 업무  int headCount: 인원수 string deadLine:채용마감일 string companyName :회사이름 int bnumber : 사업자번호
	반환값    : 없음
*/
void ApplyRecruitUI::showDetail(string taskType, int headCount, string deadLine, string companyName, int bnumber) {
	*out_fp << "> " << companyName << " " << bnumber << " " << taskType << " " << headCount << " " << deadLine << "\n";
}
/*
	함수 이름 : ApplyRecruitUI::setControl
	기능	  : ApplyRecruit와 ApplyRecruit 사이 연결을 해주는 컨트롤 함수이다.
	전달 인자 : ApplyRecruit* thisControl : ApplyRecruit의 객체를 참조한다.
	반환값    : 없음
*/
void ApplyRecruitUI::setControl(ApplyRecruit* thisControl) {
	control = thisControl;
}