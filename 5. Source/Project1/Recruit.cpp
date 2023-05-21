#include "Recruit.h"

Recruit::Recruit(string taskType, int headCount, string deadLine, string companyName, int businessNumber) {
	this->taskType = taskType; 
	this->headCount = headCount;
	this->deadLine = deadLine;
	this->companyName = companyName;
	this->businessNumber = businessNumber;
}

void Recruit::getDetail() {

}
void Recruit::makeApply() {

}
Apply Recruit::getApplyList() {
	return Apply;
}