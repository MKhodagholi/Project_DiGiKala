#include "Admin.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

Admin::Admin(string username, string password, long phoneNumber) {
    this->username=username;
    this->password=password;
    this->phoneNumber=phoneNumber;
}
