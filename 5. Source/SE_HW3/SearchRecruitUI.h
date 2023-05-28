#pragma once

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class SearchRecruit;
/*
	클래스 이름 : SearchRecruitUI
	기능	  : 채용 조회에 대한 아래 User Interface 기능들을 구현함
	1. SearchRecruitUI: SearchRecruitUI의 생성자로 멤버변수 값을 입력한다.
	2. startInterface: 사용자와 상호작용하는 인터페이스를 실행시키는 함수입니다.
	3 searchRecruit: 채용정보조회를 위해 showResult함수를 호출합니다.
	4. setControl: Boundary와 Control을 연결하는 기능을 수행한다.
	5. showDetail: 채용 정보의 자세한 정보를 출력하는 기능을 수행합니다.
*/
class SearchRecruitUI {
private:
	ifstream* in_fp;
	ofstream* out_fp;
	SearchRecruit* control;
public:
	SearchRecruitUI(ifstream* inputF, ofstream* outputF);
	void startInterface();
	void searchRecruit();
	void showDetail(string taskType, int headCount, string deadLine);  // 커뮤니케이션 수정 필요
	void setControl(SearchRecruit* thisControl);
};