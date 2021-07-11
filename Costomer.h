#ifndef PROJECT_DIGIKALA_COSTOMER_H
#define PROJECT_DIGIKALA_COSTOMER_H
#include <string>

class Costomer {
private:
    std::string username;
    std::string password;
    long wallet;
    class Address {
    private:
        std::string country;
        std::string city;
        std::string alley;
    public:
        Address() : country(""), city(""), alley("") {}
        Address(std::string country, std::string city, std::string alley) : country(country), city(city), alley(alley) {}
        void set_county(std::string country) {
            this->country = country;
        }
        void set_city(std::string city) {
            this->city = city;
        }
        void set_alley(std::string alley) {
            this->alley = alley;
        }
        std::string get_country() {
            retrun country;
        }
        std::string get_city() {
            return city;
        }
        std::string get_alley() {
            return alley;
        }
    };
    Address address;
    std::string phoneNumber;
public:
    Costomer();
    Costomer(std::string, std::string, longm Address, std::string);
    void set_username(std::string);
    void set_password(std::string);
    void set_wallet(long);
    void set_address(Address);
    void set_phoneNumber(std::string);
    std::string get_username();
    std::string get_password();
    long get_wallet();
    Address get_address();
    std::string get_phoneNumber();


};


#endif //PROJECT_DIGIKALA_COSTOMER_H
