#ifndef UNTITLED1_ADMIN_H
#define UNTITLED1_ADMIN_H
#include "Product.h"
#include <sstream>
using namespace std;

class Admin {
    string username;
    string password;
    long phoneNumber;
    vector <Product> productOfAdmin;
public:
    Admin(string, string, long);

};


#endif
