//
// Created by chaudhuree on 7/30/2024.
//
#include <bits/stdc++.h>
#include <cstring>

using namespace std;


//Product (Shopping Website)
class Product {
private:
    int id;
    char *name;
    int mrp;
    int selling_price;
public:
    //Constructor
    Product() {
        cout << "Inside constructor";
    }

    //Parameterised Constructor
    Product(int id, char *n, int mrp, int selling_price) {
        this->id = id;
        this->mrp = mrp;
        this->selling_price = selling_price;
        name = new char[strlen(n) + 1]; //dynamically allocating memory
        strcpy(name, n);
    }

    // Copy Constructor for deep copy   i.e: Product anotherProductUsingCamera(camera);
    Product(Product &X) {
        id = X.id;
        name = new char[strlen(X.name) + 1]; //Array
        strcpy(name, X.name);
        mrp = X.mrp;
        selling_price = X.selling_price;
    }

    // Copy Assignment Operator for deep copy  i.e: Product anotherProductUsingCamera = camera;
    void operator=(Product &X) {

        id = X.id;
        name = new char[strlen(X.name) + 1]; //Array
        strcpy(name, X.name);
        mrp = X.mrp;
        selling_price = X.selling_price;
    }


    //Setters
    void setMrp(int price) {
        if (price > 0) {
            mrp = price;
        }

    }

    void setSellingPrice(int price) {
        //additional checks
        if (price > mrp) {
            selling_price = mrp;
        } else {
            selling_price = price;
        }
    }

    //Getters
    int getMrp() {
        return mrp;
    }

    int getSellingPrice() {
        return selling_price;
    }

    void showDetails() {
        cout << "Name : " << name << endl;
        cout << "Id : " << id << endl;
        cout << "Selling Price " << selling_price << endl;
        cout << "MRP : " << mrp << endl;

        cout << "----------" << endl;
    }

    //setter for the name
    void setName(char *name) {
        strcpy(this->name, name);
    }

    // Destructor to free allocated memory
    ~Product() {
        cout << "Deleting " << name << endl;
        if (name != NULL) {
            delete[] name;
            name = NULL;
        }
    }


};


int main() {

    Product camera(101, "GoProHero9", 28000, 26000);
    Product old_camera; //Constructor

    //old_camera.setName("GoPro8");
    //old_camera.setSellingPrice(1000);
    old_camera = camera; //Copy Assignment Operator
    old_camera.setName("GoPro8Old");
    camera.showDetails();
    old_camera.showDetails();
    //camera.showDetails();

    //Copy is made using a special constructor -> Copy Constructor


    /*
    Product handyCam = camera; //
    handyCam.setMrp(1000);

    camera.showDetails();
    webcam.showDetails();
    handyCam.showDetails(); */
    // selling_price <= mrp
    //camera.mrp = 100;
    //camera.selling_price = 200;
    //camera.setMrp(100);
    //camera.setSellingPrice(190);

    //cout<< sizeof(camera)<<endl;
    //cout <<"MRP "<< camera.getMrp()<<endl;
    //cout<<"Selling price "<<camera.getSellingPrice() <<endl;


    return 0;
}