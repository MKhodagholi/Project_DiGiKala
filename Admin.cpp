#include "Admin.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

Admin::Admin(string username, string password, long phoneNumber) {
    this->username=username;
    this->password=password;
    this->phoneNumber=phoneNumber;
}

string Admin::getUsername() {
    return this->username;
}

void Admin::setUsername(string username) {
    this->username=username;
}

string Admin::getPassword() {
    return this->password;
}

void Admin::setPassword(string password) {
    this->password=password;
}

long Admin::getPhoneNumber() {
    return this->phoneNumber;
}

void Admin::setPhoneNumber(long phoneNumber) {
    this->phoneNumber=phoneNumber;
}