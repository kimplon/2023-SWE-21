#include "LogInOutUI.h"
#include "LogInOut.h"
/*
	함수 이름 : LogInOutUI::LogInOutUI
	기능	  : LogInOut 생성자로 멤버변수에 값을 전달합니다.
	전달 인자 : ifstream* inputF: 파일입출력의 인풋 객체
				ofstream* outputF: 파일입출력의 아웃풋 객체
	반환값    : 없음
*/
LogInOutUI::LogInOutUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {
}
/*
	함수 이름 : LogInOutUI::setControl
	기능	  : Boundary와 Control을 연결하는 기능을 수행한다.
	전달 인자 : LogInOut* myControl : 로그인아웃 객체
	반환값    : 없음
*/
void LogInOutUI::setControl(LogInOut* myControl) {
	control = myControl;
}
/*
	함수 이름 : LogInOutUI::startInterface
	기능	  : 사용자와 상호작용하는 인터페이스를 실행하는 함수로 Control클래스의 로그인 / 로그아웃 기능을 호출한다.
	전달 인자 : int logType  : 로그인 또는 로그아웃 기능 선택하는 타입
				string session:현재 로그인 된 아이디
	반환값    : 없음
*/
void LogInOutUI::startInterface(int logType, string session) {
	string id, pw;

	switch (logType) {
	case 1:
		*out_fp << "2.1. 로그인" << "\n";
		enterIDPW(id, pw);
		control->runLogIn(id ,pw);
		break;
	case 2:
		*out_fp << "2.2. 로그아웃" << "\n";
		enterLogOut(session);
		control->runLogOut();
		break;
	}
}
/*
	함수 이름 : LogInOutUI::enterIDPW
	기능	  : 아이디와 패스워드를 입력받아 저장하고 로그인 결과를 출력하는 기능을 수행한다.
	전달 인자 : string &id:유저 아이디
				string &pw : 유저 비밀번호
	반환값    : 없음
*/
void LogInOutUI::enterIDPW(string &id, string &pw) {
	string left, right; *in_fp >> left >> right;
	id = left; pw = right;

	*out_fp << "> " << id << " " << pw << "\n";
}
/*
	함수 이름 : LogInOutUI::enterLogOut
	기능	  : 로그아웃의 결과를 출력하는 기능을 수행한다.
	전달 인자 : string session : 현재 로그인 된 아이디
	반환값    : 없음
*/
void LogInOutUI::enterLogOut(string session) {
	*out_fp << "> " << session << "\n";
}