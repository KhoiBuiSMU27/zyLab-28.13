#include <iostream>
#include <ItemToPurchase.h>
using namespace std;

int main(){

    ItemToPurchase item1, item2;
	int price, quantity;
	string name;
	
	cout << "Item 1" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, name);
	item1.SetName(name);
 
	cout << "Enter the item price:" << endl;
	cin >> price;
	item1.SetPrice(price);
	
	cout << "Enter the item quantity:" << endl;
	cin >> quantity;
	item1.SetQuantity(quantity);
	cout << endl;
	
	cin.ignore();
	
	cout << "Item 2" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, name);
	item2.SetName(name);
	
	cout << "Enter the item price:" << endl;
	cin >> price;
	item2.SetPrice(price);
	
	cout << "Enter the item quantity:" << endl;
	cin >> quantity;
	item2.SetQuantity(quantity);
	
	cout << endl;
	
    return 0;
  
}
