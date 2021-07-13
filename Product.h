#ifndef UNTITLED1_PRODUCT_H
#define UNTITLED1_PRODUCT_H
#include <string>
#include <vector>

class Product {
private:
    std::string name;
    double price;
    int count;
    std::string description;
    double score;
    std::vector<std::string> comment;
public:
    Product(std::string, double, int, std::string, double, std::vector<std::string>);
    void set_name(std::string);
    std::string get_name();
    void set_price(double);
    double get_price();
    void set_count(int);
    int get_count();
    void set_description(std::string);
    std::string get_description();
    void set_score(double);
    double get_score();
    void add_comment(std::string);
    void show_comments();
    int count_comments();
    std::string get_comment(int);
    class OutOfRange{};
    friend std::ostream& operator << (std::ostream&, const Product&);
    friend std::istream& operator >> (std::istream&, Product&);

};


#endif
