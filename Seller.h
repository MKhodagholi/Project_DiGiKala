#ifndef UNTITLED1_SELLER_H
#define UNTITLED1_SELLER_H
#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
using namespace std;

class Seller {
private:
    std::string username;
    std::string password;
    std::string name;
    double wallet;
    std::vector <Product> productOfSeller;
    long phoneNumber;
public:
    Seller(std::string, std::string, std::string, double, long);
    void addProduct(Product);
    void setUsername(std::string);
    std::string getUsername();
    void setPassword(std::string);
    std::string get_password();
    void setName(std::string);
    std::string getName();
    void setWallet(double);
    long getWallet();
    void setPhoneNumber(long);
    long getPhoneNumber();
    vector <Product> getProductOfSeller();
    void setProductOfSeller(vector <Product>);
    bool registrationProducts(bool); // tayide list ajnas
    bool registreationCodeDiscuss(bool); // tayide code takhfif
    bool confirmationReturnProduct(bool); // tayide bargashtan ajnas
    void showSaleStatistics();
    friend std::ostream& operator << (std::ostream&, const Seller&);
    void writeInFile(); // writing in file
    void readFromFile(); // read from file
    class OutOfRange{};
};


#endif
