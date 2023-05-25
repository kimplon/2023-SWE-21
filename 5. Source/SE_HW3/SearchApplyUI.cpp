#include "SearchApplyUI.h"
#include "SearchApply.h"
/*
	함수 이름 : SearchApplyUI::SearchApplyUI
	기능	  : SearchApplyUI의 생성자로 멤버변수에 값을 전달합니다.
	전달 인자 : ifstream* inputF  : 파일입출력의 인풋 객체
				ofstream* outputF : 파일입출력의 아웃풋 객체
	반환값    : 없음
*/
SearchApplyUI :: SearchApplyUI(ifstream* inputF, ofstream* outputF) : in_fp(inputF), out_fp(outputF) {
}
/*
	함수 이름 : SearchApplyUI::startInterface
	기능	  : 사용자와 상호작용하는 인터페이스를 실행하는 함수입니다.
	전달 인자 : 없음
	반환값    : 없음
*/
void SearchApplyUI::startInterface() {
	*out_fp << "4.3. 지원정보조회 : " << "\n";
	searchApply();
}
/*
	함수 이름 : SearchApplyUI::searchApply
	기능	  : 지원 정보 조회 기능을 수행하는 함수를 호출한다.
	전달 인자 : 없음
	반환값    : 없음
*/
void SearchApplyUI :: searchApply() {
	control->showApply();
}
/*
	함수 이름 : SearchApplyUI::showDetail
	기능	  : 전달 받은 값들을 출력하는 기능을 수행한다.
	전달 인자 : string cname     : 회사이름
				int bnum         :  사업자번호
				string taskType   :  업무
				int headCount    :  인원수
				string deadLine   : 채용마감일
	반환값    : 없음
*/
void SearchApplyUI::showDetail(string cname, int bnum, string taskType, int headCount, string deadLine) {
	*out_fp << "> " << cname << " " << bnum << " " << taskType << " " << headCount << " " << deadLine << "\n";
}
/*
	함수 이름 : SearchApplyUI::setControl
	기능	  : Boundary와 Control을 연결하는 기능을 수행한다.
	전달 인자 : SearchApply* thisControl : SearchApply 객체에 thisControl를 참조할 수 있도록 하는 인자
	반환값    : 없음
*/

void SearchApplyUI::setControl(SearchApply* thisControl) {
	control = thisControl;
}