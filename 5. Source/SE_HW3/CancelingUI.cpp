#include "Canceling.h"
#include "CancelingUI.h"
/*
	함수 이름 : CancelingUI::CancelingUI
	기능	  : CancelingUI의 생성자로 멤버변수에 값을 전달합니다.
	전달 인자 : ifstream* inputF: 파일입출력의 인풋 객체
			    ofstream* outputF: 파일입출력의 아웃풋 객체
	반환값    : 없음
*/
CancelingUI::CancelingUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {};
/*
	함수 이름 : CancelingUI::setControl
	기능	  : Boundary와 Control을 연결하는 기능을 수행한다.
	전달 인자 : Canceling* myControl : Canceling 객체
	반환값    : 없음
*/
void CancelingUI::setControl(Canceling* myControl) {
	control = myControl;
}
/*
	함수 이름 : CancelingUI::startInterface
	기능	  : 회원탈퇴를 담당하는 인터페이스 함수로 enterCancle함수와 cancel 함수를 호출한다.
	전달 인자 : string session : 현재 로그인 된 아이디
	반환값    : 없음
*/
void CancelingUI::startInterface(string session) {
	*out_fp << "1.2. 회원탈퇴" << "\n";
	enterCancel(session);
	control->cancel();
}
/*
	함수 이름 : CancelingUI::enterCancel
	기능	  : 탈퇴될 아이디를 출력하는 함수이다.
	전달 인자 : string session : 현재 로그인 된 아이디
	반환값    : 없음
*/
void CancelingUI::enterCancel(string session) {
	*out_fp << "> " << session;
}