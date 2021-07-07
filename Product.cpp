#include "Product.h"
#include <iostream>
#include <fstream>

Product::Product(std::string name, int price, int count, std::string description, int score, vector<std::string> comment)
    : name(name), price(price), count(count), description(description), score(score), comment(comment) {}

void Product::set_name(std::string name) {
    this->name = name;
}

std::string Product::get_name() {
    return name;
}

void Product::set_price(int price) {
    this->price = price;
}

int Product::get_price() {
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

void Product::set_score(int score) {
    this->score = score;
}

int Product::get_score() {
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
        return comment[comment.size()];
    else if (abs(num) <= comment.size() && num < 0)
        return comment[num + comment.size()];
    else
        throw OutOfRange;
}

std::ostream& Product::operator << (std::ostream &print, const Product &obj) {
    print << "-------------------------------------------------------";
    print << "| Name: " << name << " " << "Price: " << price << std::endl;
    print << "| Count: " << count << " " << "Description: " << description << std::endl;
    print << "| Score: " << score << std::endl;
    print << "| Comments: " << std::endl;
    for (int i = 0; i < comment.size(); i++)
        std::print << "| \t" << (i + 1) << ") " << comment[i] << std::endl;
    print << "_______________________________________________________";
    return print;
}

void Product::write_file() {
    std::ofstream writer("product.txt", std::ios::app);
    writer << *this;
    writer.close();
}

void Product::read_file() {
    std::istream reader("product.txt");
    std::string lineString;
    while (getline(reader, lineString))
        std::cout << lineString;
    reader.close();
}