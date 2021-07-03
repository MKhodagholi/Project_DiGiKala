#ifndef PROJECT_DIGIKALA_SELLER_H
#define PROJECT_DIGIKALA_SELLER_H
#include <string>

class Seller {
private:
    std::string username;
    std::string password;
    std::string name;
    int count_products;
    long wallet;
    std::string **products;
    long phoneNumber;
public:
    Seller(std::string, std::string, std::string, long, std::string**, long, int);
    Seller(const Seller &);
    ~Seller();
    void set_products(std::string**);
    bool registrationProducts(bool);
    bool registreationCodeDiscuss(bool);
    bool confirmationReturnProduct(bool);
    void showSaleStatistics();

};


#endif //PROJECT_DIGIKALA_SELLER_H
