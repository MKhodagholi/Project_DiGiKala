#include "Admin.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

Admin::Admin(string username, string password, long phoneNumber) {
    this->username=username;
    this->password=password;
    this->phoneNumber=phoneNumber;
}

string Admin::getUsername() {
    return this->username;
}

void Admin::setUsername(string username) {
    this->username=username;
}

string Admin::getPassword() {
    return this->password;
}

void Admin::setPassword(string password) {
    this->password=password;
}

long Admin::getPhoneNumber() {
    return this->phoneNumber;
}

void Admin::setPhoneNumber(long phoneNumber) {
    this->phoneNumber=phoneNumber;
}

vector<Product> Admin::getProductOfAdmin() {
    return this->productOfAdmin;
}

void Admin::setProductOfAdmin(vector <Product> productOfAdmin) {
    this->productOfAdmin=productOfAdmin;
}

void Admin::addProduct(Product product) {
    productOfAdmin.push_back(product);
}

void Admin::removeProduct(int numberOfProductInVector) {
    productOfAdmin.erase(productOfAdmin.begin()+numberOfProductInVector-1);
}

void Admin::showAverageOfScores() {
    double total=0;
    for(int i=0; i<productOfAdmin.size(); i++){
        total+=productOfAdmin.at(i).get_score();
    }
    cout<<"average of scores of products is "<<total/productOfAdmin.size();
}

void Admin::writeInFile() {
    ofstream dataFileOfAdminProduct("dataFileOfSellerProduct.dat", ios::out);
    if (!dataFileOfAdminProduct){
        cerr<<"Something wrong during opening file!"<<endl;
        exit(1);
    }
    for(int i=0; i<productOfAdmin.size(); i++){
        dataFileOfAdminProduct<<productOfAdmin.at(i).get_name()<<endl<<productOfAdmin.at(i).get_count()<<endl<<productOfAdmin.at(i).get_price()<<endl<<productOfAdmin.at(i).get_score()<<endl;
        dataFileOfAdminProduct<<productOfAdmin.at(i).get_description()<<endl;
        dataFileOfAdminProduct<<productOfAdmin.at(i).count_comments()<<endl;
        if(productOfAdmin.at(i).count_comments()!=0){
            for(int j=0; j<productOfAdmin.at(i).count_comments(); j++){
                dataFileOfAdminProduct<<productOfAdmin.at(i).get_comment(j)<<endl;
            }
        }
    }
}

void Admin::readFromFile() {
    string line;
    string name;
    double price;
    int count;
    int countOfComments;
    string description;
    double score;
    vector <string> comments(0);
    ifstream dataFileOfAdminProduct("dataFileOfSellerProduct.dat");
    if(dataFileOfAdminProduct.is_open()){
        int i=0;
        while(getline(dataFileOfAdminProduct,line)){
            if(i==0){
                name=line;
            }
            if(i==1){
                price=stof(line);
            }
            if(i==2){
                count=stoi(line);
            }
            if(i==3){
                score=stof(line);
            }
            if(i==4){
                description=line;
            }
            if(i>=5){
                if(i==5){
                    countOfComments=stoi(line);
                    comments.resize(0);
                }
                else{
                    comments.push_back(line);
                    if(i-5==countOfComments){
                        Product product(name,price,count,description,score,comments);
                        addProduct(product);
                        i=-1;
                    }
                }
            }
            i++;
        }
    }
    else{
        cout<<"Unable to open file!"<<endl;
    }
}