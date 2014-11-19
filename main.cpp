/* 
 * File:   main.cpp
 * Author: R135291Y
 *
 * Created on November 19, 2014, 11:16 AM
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

/*
 * 
 */
class Products;

class Database {
    int FurnitureC;
    int FurnitureT;
    int FurnitureW;
    int BeverageW;
    int BeverageS;
    int BeverageL;
    friend class Products;

public:

    int GetFurnitureC() {
        return FurnitureC;
    }

    int GetFurnitureT() {
        return FurnitureT;
    }

    int GetFurnitureW() {
        return FurnitureW;
    }

    int GetBeverageW() {
        return BeverageW;
    }

    int GetBeveregeS() {
        return BeverageS;
    }

    int GetBeverageL() {
        return BeverageL;
    }
};

class Products {
public:

    Database SetPrice(Database database) {
        cout<<"\n*** Furniture category*** \n";
        cout << "Enter price for chairs ";
        cin >> database.FurnitureC;
        cout << "Enter price TV stands ";
        cin >> database.FurnitureT;
        cout << "Enter price for wardrobes ";
        cin >> database.FurnitureW;
        
        cout<<"\n*** Beverage category*** \n";
        cout << "Enter price for Wine ";
        cin >> database.BeverageW;
        cout << "Enter price for Soft Drinks ";
        cin >> database.BeverageS;
        cout << "Enter price for Lagers ";
        cin >> database.BeverageL;
        return database;
    }
};
class AllProducts:public Database, public Products{
    int PdtId;
public:
    AllProducts(int a,int b,int c,int d,int e,int f,int g){
    int FurnitureC=a;
    int FurnitureT=b;
    int FurnitureW=c;
    int BeverageW=d;
    int BeverageS=e;
    int BeverageL=f;
    //PdtId=g;   
    }
    void setPdtId(int l){
        PdtId=l;
    }
};

int main(int argc, char** argv) {
    cout << "...OK mart database updater..." << endl;
    AllProducts obj1;
    //Products product;
    obj1 = obj1.SetPrice();
    obj1.setPdtId();
    cout << "\n........Furniture products available for sale...." << endl;
    cout << "Chairs    $" << obj1.GetFurnitureC() << endl;
    cout << "TV stands $" << obj1.GetFurnitureT() << endl;
    cout << "Wardrobes $" << obj1.GetFurnitureW() << endl;

    cout << "\n........Beverage products available for sale...." << endl;
    cout << "Chairs    $" << obj1.GetBeverageL() << endl;
    cout << "TV stands $" << obj1.GetBeverageW() << endl;
    cout << "Wardrobes $" << obj1.GetBeveregeS() << endl;




    return 0;
}
