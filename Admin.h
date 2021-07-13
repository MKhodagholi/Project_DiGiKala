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
    string getUsername();
    void setUsername(string);
    string getPassword();
    void setPassword(string);
    long getPhoneNumber();
    void setPhoneNumber(long);
    vector <Product> getProductOfAdmin();
    void setProductOfAdmin(vector <Product>);
    void addProduct(Product);
    void removeProduct(int);
    void acceptBuyProduct();
    void acceptReturnProduct();
    void showAverageOfScores();
    void readFromFile();
    void writeInFile();

};


#endif
