#include <iostream>
#include <ItemToPurchase.h>
using namespace std;

int main(){

  ItemToPurchase item1, item2;
  int price, quantity;
  string name;

  // Item 1
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

  // Item 2
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

  // Print the bill
  int item1Cost = item1.GetQuantity() * item1.GetPrice();
  int item2Cost = item2.GetQuantity() * item2.GetPrice();
  int total = item1Cost + item2Cost;
  
  cout << "TOTAL COST" << endl;
  cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1Cost << endl;
  cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2Cost << endl;
  cout << endl;
  cout << "Total: $" << total << endl;
  
  return 0;

  
}
