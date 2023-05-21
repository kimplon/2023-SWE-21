#include "Canceling.h"
#include "CancelingUI.h"

Canceling::Canceling(string& thisSession, CancelingUI* myui, vector<Member>& myMemberList) : session(thisSession), ui(myui), memberList(myMemberList){
	ui->setControl(this);

	ui->startInterface(session);
}

void Canceling::cancel() {
	for (int i = 0; i < memberList.size(); i++) {
		string tempId = memberList[i].getId();

		if (!tempId.compare(session)) {
			memberList.erase(memberList.begin() + i);
		}
	}
}