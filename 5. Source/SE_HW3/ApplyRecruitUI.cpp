#include "ApplyRecruitUI.h"
#include "ApplyRecruit.h"
/*
	함수 이름 : ApplyRecruitUI::ApplyRecruitUI
	기능	  : ApplyRecruitUI의 생성자로 멤버변수에 값을 전달한다.
	전달 인자 : ifstream* inputF  : 파일입출력의 인풋 객체
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
	기능	  : 사업자번호를 입력받아 Control에게 넘겨주며 지원 기능을 수행하도록 하고 결과를 출력한다.
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
	기능	  : 회사이름을 입력받아 Control에게 채용정보 조회를 요청하는 기능을 수행한다.
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
	기능	  : 채용 정보의 세부 정보를 가져와 출력하는 기능을 수행한다.
	전달 인자 : string taskType : 업무  
				int headCount: 인원수 
				string deadLine:채용마감일 
				string companyName :회사이름 
				int bnumber : 사업자번호
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