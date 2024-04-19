#include <iostream>
#include "ItemToPurchase.h"

using namespace std;

ItemToPurchase::ItemToPurchase(){
    
    itemName = "none";
    itemPrice = 0;
    itemQuanity = 0;

}

void ItemToPurchase::SetName(string name){
    itemName = name;
}

string ItemToPurchase::GetName(){
    return itemName;
}

void ItemToPurchase::SetPrice(int price){
    itemPrice = price;
}

int ItemToPurchase::GetPrice(){
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity){
    itemQuanity = quantity;
}

int ItemToPurchase::GetQuantity(){
    return itemQuanity;
}


