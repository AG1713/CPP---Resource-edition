#include <iostream>
using namespace std;

class Shop
{
    int itemid[100];    // This is an array
    int itemprice[100]; // This is an array
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void Shop ::setprice(void)
{
    cout << "Enter id of the item of item no" << counter + 1 << ".: " << endl;
    cin >> itemid[counter];
    cout << "Enter price of the item of item no." << counter + 1 << ": " << endl;
    cin >> itemprice[counter];
    counter++;
}
void Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemid[i] << "is " << itemprice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}