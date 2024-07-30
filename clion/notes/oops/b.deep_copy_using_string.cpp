//
// Created by chaudhuree on 7/30/2024.
//
#include <iostream>
#include <string>

using namespace std;

// Product (Shopping Website)
class Product {
private:
    int id;
    string name; // Use std::string instead of char*
    int mrp;
    int selling_price;

public:
    // Constructor
    Product() {
        cout << "Inside constructor" << endl;
    }

    // Parameterized Constructor
    Product(int id, const string& n, int mrp, int selling_price) {
        this->id = id;
        this->name = n;
        this->mrp = mrp;
        this->selling_price = selling_price;
    }

    // Copy Constructor for deep copy
    Product(const Product &X) {
        id = X.id;
        name = X.name;
        mrp = X.mrp;
        selling_price = X.selling_price;
    }

    // Copy Assignment Operator for deep copy
    Product& operator=(const Product &X) {
        if (this == &X) {
            return *this; // self-assignment check
        }
        id = X.id;
        name = X.name;
        mrp = X.mrp;
        selling_price = X.selling_price;
        return *this;
    }

    // Setters
    void setMrp(int price) {
        if (price > 0) {
            mrp = price;
        }
    }

    void setSellingPrice(int price) {
        if (price > mrp) {
            selling_price = mrp;
        } else {
            selling_price = price;
        }
    }

    // Getters
    int getMrp() const {
        return mrp;
    }

    int getSellingPrice() const {
        return selling_price;
    }

    void showDetails() const {
        cout << "Name : " << name << endl;
        cout << "Id : " << id << endl;
        cout << "Selling Price : " << selling_price << endl;
        cout << "MRP : " << mrp << endl;
        cout << "----------" << endl;
    }

    // Setter for the name
    void setName(const string &name) {
        this->name = name;
    }

    // Destructor
    ~Product() {
        cout << "Deleting " << name << endl;
    }
};

int main() {
    Product camera(101, "GoProHero9", 28000, 26000);
    Product old_camera; // Constructor

    // old_camera.setName("GoPro8");
    // old_camera.setSellingPrice(1000);
    old_camera = camera; // Copy Assignment Operator
    old_camera.setName("GoPro8Old");
    camera.showDetails();
    old_camera.showDetails();

    // Copy is made using a special constructor -> Copy Constructor
    /*
    Product handyCam = camera; //
    handyCam.setMrp(1000);

    camera.showDetails();
    webcam.showDetails();
    handyCam.showDetails();
    */

    return 0;
}

