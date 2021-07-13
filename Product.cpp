#include "Product.h"
#include <iostream>
Product::Product(std::string name, double price, int count, std::string description, double score, std::vector<std::string> comment)
        : name(name), price(price), count(count), description(description), score(score), comment(comment) {}
