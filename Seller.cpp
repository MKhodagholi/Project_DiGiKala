#include "Seller.h"
#include <fstream>

Seller::Seller(std::string username, std::string password, std::string name, double wallet, long phoneNumber)
        : username(username), password(password), name(name), wallet(wallet), phoneNumber(phoneNumber) {}

void Seller::addProduct(Product product) { // adding product in vector
    productOfSeller.push_back(product);
}

void Seller::setUsername(std::string username) {
    this->username = username;
}

std::string Seller::getUsername() {
    return username;
}

void Seller::setPassword(std::string password) {
    this->password = password;
}

std::string Seller::get_password() {
    return password;
}

void Seller::setName(std::string name) {
    this->name = name;
}

std::string Seller::getName() {
    return name;
}

void Seller::setWallet(double wallet) {
    this->wallet = wallet;
}

long Seller::getWallet() {
    return wallet;
}

void Seller::setPhoneNumber(long phoneNumber) {
    this->phoneNumber = phoneNumber;
}
vector<Product> Seller::getProductOfSeller() {
    return this->productOfSeller;
}

void Seller::setProductOfSeller(vector <Product> productOfSeller) {
    this->productOfSeller=productOfSeller;
}

long Seller::getPhoneNumber() {
    return phoneNumber;
}


bool Seller::registrationProducts(bool flag) {
    if (flag)
        return true;
    return false;
}

bool Seller::registreationCodeDiscuss(bool flag) {
    if (flag)
        return true;
    return false;
}

bool Seller::confirmationReturnProduct(bool flag) {
    if (flag)
        return true;
    return false;
}



std::ostream& operator << (std::ostream &print, const Seller &obj) {
    print << "Username: " << obj.username << " Password: " << obj.password << std::endl;
    print << "Name: " << obj.name << "Wallet: " << obj.wallet << std::endl;
    print << "Phone number: " << obj.phoneNumber;
    return print;
}

// writing in a file with operator <<

void Seller::writeInFile() {
    ofstream dataFileOfAdminProduct("dataFileOfSellerProduct.dat", ios::out);
    if (!dataFileOfAdminProduct){
        cerr<<"Something wrong during opening file!"<<endl;
        exit(1);
    }
    for(int i=0; i<productOfSeller.size(); i++){
        dataFileOfAdminProduct<<productOfSeller.at(i).get_name()<<endl<<productOfSeller.at(i).get_count()<<endl<<productOfSeller.at(i).get_price()<<endl<<productOfSeller.at(i).get_score()<<endl;
        dataFileOfAdminProduct<<productOfSeller.at(i).get_description()<<endl;
        dataFileOfAdminProduct<<productOfSeller.at(i).count_comments()<<endl;
        if(productOfSeller.at(i).count_comments()!=0){
            for(int j=0; j<productOfSeller.at(i).count_comments(); j++){
                dataFileOfAdminProduct<<productOfSeller.at(i).get_comment(j)<<endl;
            }
        }
    }
}

// reading from file line by line

void Seller::readFromFile() {
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
