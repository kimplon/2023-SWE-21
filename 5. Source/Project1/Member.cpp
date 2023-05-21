#include "Member.h"

Member::Member(string id, string password) {
	this->id = id; this->password = password;
}

string Member::getId() {
	return id;
}
string Member::getPassword() {
	return password;
}