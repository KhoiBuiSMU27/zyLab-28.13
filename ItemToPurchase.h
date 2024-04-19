#include <string>
using namespace std;

class ItemToPurchase {

    private:
    string itemName;
    int itemPrice;
    int itemQuanity;

    public:
    ItemToPurchase();

    void SetName(string name);
    string GetName();

    void SetPrice(int price);
    int GetPrice();

    void SetQuantity(int quantity);
    int GetQuantity();

};
