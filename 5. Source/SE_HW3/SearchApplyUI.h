#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class SearchApply;
/*
	클래스 이름 : SearchApplyUI
	기능	  : 지원 조회에 대한 아래 User Interface 기능들을 구현함
	1. SearchApplyUI: SearchApplyUI의 생성자로 멤버변수를 입력합니다.
	2. startInterface: 사용자와 상호작용하는 인터페이스를 실행하는 함수입니다.
	3. searchApply: 사용자가 지원한 지원 정보를 조회 하는 showApply함수를 호출합니다.
	4. showDetail: 지원 정보의 상세 정보(회사이름, 사업자번호, 업무, 인원수, 채용마감일을 출력해주는 함수이다.
	5. setControl:  Boundary와 Control을 연결하는 기능을 수행한다.
*/
class SearchApplyUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	SearchApply* control;
public:
	SearchApplyUI(ifstream* inputF, ofstream* outputF);
	void startInterface();
	void searchApply();
	void showDetail(string cname, int bnum, string taskType, int headCount, string deadLine);
	void setControl(SearchApply* thisControl);
};