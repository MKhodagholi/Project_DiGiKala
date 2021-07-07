#include "Seller.h"
#include <fstream>

Seller::Seller(std::string username, std::string password, std::string name, long wallet, vector<Product> products, long phoneNumber)
        : username(username), password(password), name(name), wallet(wallet), phoneNumber(phoneNumber), count_typeProducts(products.size()), products(products) {}

void Seller::set_products(std::vector<Product> products) {
    this->products = products;
}

Product Seller::get_product(int num) {
    if (num > -1 && num < count_typeProducts)
        return products[num];
    else if (num < 0 && abs(num) <= count_typeProducts)
        return products[num + count_typeProducts];
    else
        throw products.OutOfRange;
}

void Seller::add_product(Product product) {
    products.push_back(product);
}

void Seller::add_product(Product product) {
    products.push_back(product);
}

void Seller::set_username(std::string username) {
    this->username = username;
}

std::string Seller::get_username() {
    return username;
}

void Seller::set_password(std::string password) {
    this->password = password;
}

std::string Seller::get_password() {
    return password;
}

void Seller::set_name(std::string name) {
    this->name = name;
}

std::string Seller::get_name() {
    return name;
}

void Seller::set_count_typeProducts(int count) {
    count_typeProducts = count;
}

int Seller::get_count_typeProducts() {
    return count_typeProducts;
}

void Seller::set_wallet(long wallet) {
    this->wallet = wallet;
}

long Seller::get_wallet() {
    return wallet;
}

void Seller::set_phoneNumber(long phoneNumber) {
   this->phoneNumber = phoneNumber;
}

long Seller::get_phone_number() {
    return phoneNumber;
}


bool Seller::registrationProducts(bool flag) {
    if (flag)
        return true;
    return false;
}

bool Seller::registreationCodeDiscuss(bool flag) {
    if (flag)
        return true;
    return false;
}

bool Seller::confirmationReturnProduct(bool flag) {
    if (flag)
        return true;
    return false;
}



std::ostream& Seller::operator << (std::ostream &print, const Seller &obj) {
    print << "Username: " << username << " Password: " << password << std::endl;
    print << "Name: " << name << " Count Type-Products: " << count_typeProducts << std::endl;
    print << "Phone number: " << phoneNumber;
    print << products;

    return print;
}

void Seller::write_file() {
    std::ofstream writer("Seller.txt", std::ios::app);
    writer << *this;
    writer.close();
}

void Seller::read_file() {
    std::ifstream reader("Seller.txt");
    std::string lineString;
    while (getline(reader, lineString))
        std::cout << lineString;

    reader.close();
}

