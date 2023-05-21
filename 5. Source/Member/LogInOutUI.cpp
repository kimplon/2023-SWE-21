#include "LogInOutUI.h"
#include "LogInOut.h"

LogInOutUI::LogInOutUI(){

}

void LogInOutUI::getLogType(int &logType) {
	int temp; cin >> temp;
	logType = temp;
}

void LogInOutUI::setControl(LogInOut* myControl) {
	control = myControl;
}

void LogInOutUI::startInterface(int logType, string session) {
	string id, pw;

	switch (logType) {
	case 1:
		cout << "2.1 로그인" << "\n";
		enterIDPW(id, pw);
		control->runLogIn(id ,pw);
		break;
	case 2:
		cout << "2.2 로그아웃" << "\n";
		enterLogOut(session);
		control->runLogOut();
		break;
	}
}

void LogInOutUI::enterIDPW(string &id, string &pw) {
	string left, right; cin >> left >> right;
	id = left; pw = right;

	cout << "> " << id << " " << pw << "\n";
}

void LogInOutUI::enterLogOut(string session) {
	cout << "> " << session << "\n";
}