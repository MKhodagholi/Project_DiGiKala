#ifndef PROJECT_DIGIKALA_SELLER_H
#define PROJECT_DIGIKALA_SELLER_H
#include <string>

class Seller {
private:
    std::string username;
    std::string password;
    std::string name;
    long wallet;
    std::string **products;
    int phoneNumber;
public:
    Seller(std::string, std::string, std::string, long, std::string**, int);
    Seller(const Seller &);
    ~Seller();
    bool registrationProducts();
    bool registreationCodeDiscuss();
    bool confirmationReturnProduct();
    void showSaleStatistics();

};


#endif //PROJECT_DIGIKALA_SELLER_H
