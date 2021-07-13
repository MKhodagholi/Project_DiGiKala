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

void Product::add_comment(std::string comment) {
    this->comment.push_back(comment);
}

int Product::count_comments() {
    return comment.size();
}

void Product::show_comments() {
    for (int i = 0; i < comment.size(); i++)
        std::cout << (i + 1) << ") " << comment[i] << std::endl;
}

std::string Product::get_comment(int num) {
    if (num > -1 && num < comment.size())
        return comment[num];
    else if (abs(num) <= comment.size() && num < 0)
        return comment[num + comment.size()];
    else
        throw OutOfRange();
}