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
    Product(std::string, int, int, std::string, int, vector<std::string>);
    void set_name(std::string);
    std::string get_name();
    void set_price(int);
    int get_price();
    void set_count(int);
    int get_count();
    void set_description(std::string);
    std::string get_description(std::string);
    void set_score(int);
    int get_score();
    void add_comment(std::string);
    int count_comments();
    void show_comments();
    std::string get_comment(int);
    class OutOfRange();
    std::ostream& operator << (std::ostream&, const Product&);
};


#endif //PROJECT_DIGIKALA_PRODUCT_H
