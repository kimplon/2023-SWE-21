#include "SignUp.h"
#include "SignUpUI.h"

using namespace std;
/*
	함수 이름 : SignUp
	기능	  : SignUp의 생성자로서 멤버 변수 값을 입력한다.
	전달 인자 : SignUpUI* myUI : SignUpUI의 객체이다.
				vector<CompanyMember>& cml : 회사회원의 벡터
			    vector<NormalMember>& nml : 일반회원의 벡터
	반환값    : 없음
*/
SignUp::SignUp(SignUpUI* myUI, vector<CompanyMember>& cml, vector<NormalMember>& nml) : ui(myUI), companyMemberList(cml), normalMemberList(nml){
	myUI->setControl(this);

	int memberType; string name; int number; string id; string password;	
	myUI->startInterface(memberType,name,number,id,password);
	createUser(memberType, name, number, id, password);
}
/*
	함수 이름 : checkIdRedundancy
	기능	  : 아이디 중복을 확인하는 함수로 회원 리스트에 이미 입력한 id 값이 존재한다면 true, 없다면 false를 반환합니다.
	전달 인자 : string id : 회원 아이디
	반환값    : bool(false, true)
*/
bool SignUp::checkIdRedundancy(string id) {
	for (int i = 0; i < companyMemberList.size(); i++) {
		if (!id.compare(companyMemberList[i].getId())) {
			return true;
		}
	}
	for (int i = 0; i < normalMemberList.size(); i++) {
		if (!id.compare(normalMemberList[i].getId())) {
			return true;
		}
	}
	return false;
}

/*
	함수 이름 : createUser
	기능	  : 멤버타입, 이름, 번호, 아이디, 비밀번호를 매개변수로 받아서 아이디를 검증한 후,회원 목록에 새 회원을 만들어서 추가해주는 기능입니다.
	전달 인자 : int memberType  : 회사회원, 일반회원 구분하는 변수
			    string name       : 회사이름 또는 사용자 이름
			    int number       :  사업자 번호 또는 주민번호
			    string id          :  아이디
			    string password   : 비밀번호
	반환값    : 없음
*/
void SignUp::createUser(int memberType, string name, int number, string id, string password) {
	if (checkIdRedundancy(id)) {
		cout << "err" << "\n";
		return;
	}

	if (memberType == 1) {
		companyMemberList.push_back(CompanyMember(id, password, name, number));
	}
	else {
		normalMemberList.push_back(NormalMember(id, password, name, number));
	}
	
}