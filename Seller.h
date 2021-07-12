#ifndef PROJECT_DIGIKALA_SELLER_H
#define PROJECT_DIGIKALA_SELLER_H
#include <iostream>
#include <string>
#include <vector>
#include "Product.h"

class Seller {
private:
    std::string username;
    std::string password;
    std::string name;
    int count_typeProducts; 
    long wallet;
    std::vector<Product> products;
    long phoneNumber;
public:
    Seller(std::string, std::string, std::string, long, std::vector<Product>, long);
    void set_products(std::vector<Product>);
    Product get_product(int);
    void add_product(Product);
    void set_username(std::string);
    std::string get_username();
    void set_password(std::string);
    std::string get_password();
    void set_name(std::string);
    std::string get_name();
    void set_count_typeProducts(int);
    int get_count_typeProducts();
    void set_wallet(long);
    long get_wallet();
    void set_phoneNumber(long);
    long get_phone_number();
    bool registrationProducts(bool); // tayide list ajnas
    bool registreationCodeDiscuss(bool); // tayide code takhfif
    bool confirmationReturnProduct(bool); // tayide bargashtan ajnas 
    void showSaleStatistics();
    std::ostream& operator << (std::ostream&, const Seller&);
    void write_file(); // writing in file
    void read_file(); // read from file
};


#endif //PROJECT_DIGIKALA_SELLER_H
