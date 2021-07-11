#include "Costomer.h"

Costomer() : username(""), password(""), wallet(0), Address(), phoneNumber("***********") {}

Costomer(std::string username, std::string password, long wallet, Address address, std::string phoneNumber)
 : username(username), password(password), wallet(wallet), address(address), phoneNumber(phoneNumber) {}

void set_username(std::string username) {
    this->username = username;
}

void set_password(std::string password) {
    this->password;
}

void set_wallet(long wallet) {
    this->wallet = wallet;
}

void set_address(Address address) {
    this->address = address;
}

void set_phoneNumber(std::string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

std::string get_username() {
    return username;
}

std::string get_password() {
    return password;
}

long get_wallet() {
    return wallet;
}

Address get_address() {
    return address;
}

std::string get_phoneNumber() {
    return phoneNumber;
}
