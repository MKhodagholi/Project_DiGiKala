#include "Seller.h"


Seller::Seller(std::string username, std::string password, std::string name, long wallet, std::string **products, int phoneNumber, int count_products)
        : username(username), password(password), name(name), wallet(wallet), phoneNumber(phoneNumber), count_products(count_products)
{
        products = new std::string*[count_products]();
        for (int i = 0; i < count_products; i++) {
            products[i] = new std::string();
        }
        set_products(products);
}

void Seller::set_products(std::string **products) {
    for (int i = 0; i < count_products; i++) {
        *this->products[i] = *products[i];
    }
}

Seller::Seller(const Seller &obj) : username(obj.username), password(obj.password), name(obj.name), wallet(obj.wallet), phoneNumber(obj.phoneNumber), count_products(obj.count_products)  {
    products = new std::string*[count_products]();
    for (int i = 0; i < count_products; i++) {
        products[i] = new std::string();
    }
    set_products(obj.products);
}

Seller::~Seller() {
    for (int i = 0; i < count_products; i++) {
        delete products[i];
    }
    delete [] products;
}