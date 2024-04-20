#include <iostream>
using namespace std;

// update from user-1

int main(){

ItemToPurcahse item1, item2;
int price, quantity;
string name;
  
cout << "Item 1" << endl;
cout << "Enter the item name:" << endl;
getline(cin, name);
item1.SetName(name);
cout << name << endl;

cout << "Enter the item price:" << endl;
cin >> price;
item1.SetPrice(price);
cout << price << endl;

cout << "Enter the item quantity: ";
cin >> quantity;
item1.SetQuantity(quantity);
cout << quantity << endl;

cin.ignore();

cout << "Item 2" << endl;
cout << "Enter the item name:" << endl;
getline(cin, name);
item1.SetName(name);
cout << name << endl;

cout << "Enter the item price:" << endl;
cin >> price;
item1.SetPrice(price);
cout << price << endl;

cout << "Enter the item quantity: ";
cin >> quantity;
item1.SetQuantity(quantity);
cout << quantity << endl;




  
  
  return 0;
  
}
