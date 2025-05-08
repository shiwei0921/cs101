#include <iostream>
using namespace std;

class Car {
protected:
    string m_DriveMode;

private:
    int m_MaxSeating;
    int m_price;

    void m_UpdatePrice(int base = 500000) {
        m_price = base + m_MaxSeating * 10000;
    }

public:
    string m_brand;
    string m_model;
    int m_year;

    Car(string x, string y, int z, int s)
        : m_brand(x), m_model(y), m_year(z), m_MaxSeating(s) {
        m_UpdatePrice();
    }

    int get_MaxSeating() { return m_MaxSeating; }
    int get_Price() { return m_price; }
    string get_DriveMode() { return m_DriveMode; }
};

class BMW_Car : public Car {
public:
    BMW_Car(string y, int z, int s) : Car("BMW", y, z, s) {
        cout << "Constructing BMW_Car\n";
        m_DriveMode = "Rear_wheel";
    }

    string get_DriveMode() {
        return m_DriveMode;
    }
};

class AUDI_Car : public Car {
public:
    AUDI_Car(string y, int z, int s) : Car("AUDI", y, z, s) {
        cout << "Constructing AUDI_Car\n";
        m_DriveMode = "Front_wheel";
    }

    string get_DriveMode() {
        return m_DriveMode;
    }
};

class BENZ_Car : public Car {
public:
    BENZ_Car(string y, int z, int s) : Car("BENZ", y, z, s) {
        cout << "Constructing BENZ_Car\n";
        m_DriveMode = "Front_wheel";
    }

    string get_DriveMode() {
        return m_DriveMode;
    }
};

int main() {
    BMW_Car car_0("a1", 2023, 6);
    cout << car_0.m_brand;
    cout << " : DriveMode = " << car_0.get_DriveMode() << "\n";

    AUDI_Car car_1("a2", 2023, 6);
    cout << car_1.m_brand;
    cout << " : DriveMode = " << car_1.get_DriveMode() << "\n";

    BENZ_Car car_2("a3", 2023, 6);
    cout << car_2.m_brand;
    cout << " : DriveMode = " << car_2.get_DriveMode() << "\n";

    return 0;
}
