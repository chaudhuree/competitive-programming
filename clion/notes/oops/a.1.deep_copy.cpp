//
// Created by chaudhuree on 7/30/2024.
//
#include <iostream>
#include <cstring>

class Item {
private:
    int id;
    char *name;
    float mrp;
    float selling_price;

public:
    // Constructor
    Item(int id, char *name, float mrp, float selling_price)
            : id(id), mrp(mrp), selling_price(selling_price) {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    // Copy Constructor for deep copy
    Item(Item &other)
            : id(other.id), mrp(other.mrp), selling_price(other.selling_price) {
        this->name = new char[strlen(other.name) + 1];
        strcpy(this->name, other.name);
    }

    // Copy Assignment Operator for deep copy
    Item &operator=(Item &other) {
        if (this == &other) {
            return *this; // self-assignment check
        }

        // Free existing resource
        delete[] this->name;

        // Copy data from the other object
        this->id = other.id;
        this->mrp = other.mrp;
        this->selling_price = other.selling_price;
        this->name = new char[strlen(other.name) + 1];
        strcpy(this->name, other.name);

        return *this;
    }

    // Destructor to free allocated memory
    ~Item() {
        delete[] name;
    }

    // Setter for name
    void setName(char *newName) {
        delete[] this->name;
        this->name = new char[strlen(newName) + 1];
        strcpy(this->name, newName);
    }

    // Getter for name
    const char *getName() const {
        return name;
    }

    // Print details for debugging
    void printDetails() const {
        std::cout << "ID: " << id << ", Name: " << name
                  << ", MRP: " << mrp << ", Selling Price: " << selling_price << std::endl;
    }
};

int main() {
    // Create first item
    Item item1(1, "Original Item", 100.0, 90.0);
    item1.printDetails();

    // Create second item as a copy of the first
    Item item2 = item1;
    item2.printDetails();

    // Change name of the second item
    item2.setName("Copied Item");
    item2.printDetails();

    // Verify the name of the first item hasn't changed
    item1.printDetails();

    return 0;
}
