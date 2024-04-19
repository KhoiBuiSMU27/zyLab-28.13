#include <iostream>
#include <ItemToPurchase.h>
using namespace std;

int main(){

  // update from Kevin

  ItemToPurchase item1, item2;
  string name;
  int price, quantity;

  cout << "Item 1" << endl;
  cout << "Enter the item name:" << endl;;
  getline(cin, name);
  cout << "Enter the item price:" << endl;
  cin >> price;
  cout << "Enter the item quantity:" << endl;
  cin >> quantity;

  item1.SetName(name);
  item1.SetPrice(price);
  item1.SetQuantity(quantity);

  cin.ignore();
  
  return 0;
  
}
