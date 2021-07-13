#include "Product.h"
#include <iostream>

Product::Product(std::string name, double price, int count, std::string description, double score, std::vector<std::string> comment)
        : name(name), price(price), count(count), description(description), score(score), comment(comment) {}

void Product::set_name(std::string name) {
    this->name = name;
}

std::string Product::get_name() {
    return name;
}

void Product::set_price(double price) {
    this->price = price;
}

double Product::get_price() {
    return price;
}

void Product::set_count(int count) {
    this->count = count;
}

int Product::get_count() {
    return count;
}

void Product::set_description(std::string description) {
    this->description = description;
}

std::string Product::get_description() {
    return description;
}

void Product::set_score(double score) {
    this->score = score;
}

double Product::get_score() {
    return score;
}