#include "SignUpUI.h"
#include "SignUp.h"
/*
	함수 이름 : SignUpUI::SignUpUI
	기능	  : SignUpUI의 생성자로 멤버 변수 값을 입력합니다.
	전달 인자 : ifstream* inputF: 파일입출력의 인풋 객체
				ofstream* outputF: 파일입출력의 아웃풋 객체
	반환값    : 없음
*/
SignUpUI::SignUpUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {
}
/*
	함수 이름 :   SignUpUI::startInterface
	기능	  : 사용자와 상호작용하는 인터페이스를 실행시키는 함수입니다.
	전달 인자 : int& memberType  :멤버타입
				string& name  :이름
				int& number : 번호
				string& id :아이디
				string& password : 비밀번호
	반환값    : 없음
*/
void SignUpUI::startInterface(int& memberType, string& name, int& number, string& id, string& password) {
	*out_fp << "1.1. 회원가입 :" << "\n";
	enterDefaultInfo(memberType, name, number, id, password);
}
/*
	함수 이름 :  SignUpUI::enterDefaultInfo
	기능	  : 회원가입의 상세 정보들을 입력받고 파일입출력 및 객체에 저장하는 함수입니다.
	전달 인자 : int &type : 멤버 타입
				string &na : 이름
				int &num : 번호
				string &ids : 아이디
				string &pw : 비밀번호
	반환값    : 없음
*/
void SignUpUI::enterDefaultInfo(int &type, string &userName, int &num, string &userId, string &pw) {
	int memberType; string name; int number; string id; string password;

	*in_fp >> memberType >> name >> number>> id >> password;
	*out_fp << "> " << memberType << " " << name << " " << number << " " << id << " " << password << "\n";

	type = memberType; userName = name; num = number; userId = id; pw = password;
}
/*
	함수 이름 :   SignUpUI::setControl
	기능	  : Boundary와 Control을 연결하는 기능을 수행한다.
	전달 인자 : SignUp* thisControl : SignUp 객체
	반환값    : 없음
*/

void SignUpUI::setControl(SignUp* thisControl) {
	control = thisControl;
}