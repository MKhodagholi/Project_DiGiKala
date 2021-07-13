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

};


#endif
