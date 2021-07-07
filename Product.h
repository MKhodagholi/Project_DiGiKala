#ifndef PROJECT_DIGIKALA_PRODUCT_H
#define PROJECT_DIGIKALA_PRODUCT_H
#include <string>
#include <vector>
class Product {
private:
    std::string name;
    int price;
    int count;
    std::string description;
    int score;
    std::vector<std::string> comment;
public:
    Product(std::string, int, int , std::string, int, vector<std::string>);
    void set_name();
    std::string get_name();
    void set_price();
    int get_price();
    void set_count();
    int get_count();
    void set_description();
    std::string get_description();
    void set_score();
    int get_score();
};


#endif //PROJECT_DIGIKALA_PRODUCT_H
