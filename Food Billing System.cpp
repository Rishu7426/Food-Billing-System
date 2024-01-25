#include <bits/stdc++.h>
using namespace std;

int main()
{
    int returnTotalBill(void);
int totalAmount = returnTotalBill();
cout<<"---------------------------------------------Your Total Bill Amount is: Rs "<<totalAmount<<"---------------------------------"<<endl<<endl;
cout<<"---------------------------------------------------Thankyou for your order!---------------------------"<<endl;
}
int returnTotalBill(){
    char c;
    char item;
    char vegItem;
    char nonVegItem;
    char selectItem;
    int billAmount = 0;

start:
    cout << "-----------welcome to our hotel services!-----------" << endl;
    cout << "-----------please follow the instructions!-----------" << endl;
    cout << "-----------please press 's' to start your order!-----------" << endl;
    cout << "-----------please press 'a' for veg item-----------" << endl;
    cout << "-----------please press 'b' for non-veg item-----------" << endl;
    cout << "-----------you will get the final bill after your order-----------" << endl;

    cin >> c;
    if (c == 's' || c == 'S')
    {
    item:
        cout << "-------------(a)Veg            (b)Non-Veg" << endl;
        cin >> item;
        if (item == 'a' || item == 'A')
        {
        vegItem:
            cout << "please press (1)paneer   price: RS-250" << endl;
            cout << "please press (2)burger   price: RS-50" << endl;
            cout << "please press (3)pizza   price: RS-100" << endl;
            cout << "please press (4)momos   price: RS-100" << endl;
            cout << "please press (5)veg-roll   price: RS-100" << endl;
            cin >> vegItem;
            if (vegItem == '1')
            {
                billAmount += 250;
            }
            else if (vegItem == '2')
            {
                billAmount += 50;
            }
            else if (vegItem == '3')
            {
                billAmount += 100;
            }
            else if (vegItem == '4')
            {
                billAmount += 100;
            }
            else if (vegItem == '5')
            {
                billAmount += 100;
            }
            else
            {
                cout << "you have entered wrong value, please try again !" << endl;
                goto vegItem;
            }
            cout<<"Do you want to add more items, press y or n ?"<<endl;
            cin>>selectItem;
            if(selectItem== 'y' || selectItem=='Y'){
                goto item;
            }else{
                return billAmount;
            }
            
        }
        else if (item == 'b' || item == 'B')
        {
            nonVegItem:
            cout << "please press (1)chicken   price: RS-250" << endl;
            cout << "please press (2)Biryani   price: RS-250" << endl;
            cout << "please press (3)mutton  price: RS-600" << endl;
            cout << "please press (4)egg curry   price: RS-150" << endl;
            cout << "please press (5)egg-roll   price: RS-100" << endl;
            cin >> nonVegItem;
            if (nonVegItem == '1')
            {
                billAmount += 250;
            }
            else if (nonVegItem == '2')
            {
                billAmount += 250;
            }
            else if (nonVegItem == '3')
            {
                billAmount += 600;
            }
            else if (nonVegItem == '4')
            {
                billAmount += 150;
            }
            else if (nonVegItem == '5')
            {
                billAmount += 100;
            }
            else
            {
                cout << "you have entered wrong value, please try again !" << endl;
                goto nonVegItem;
            }
            cout<<"Do you want to add more items, press y or n ?"<<endl;
            cin>>selectItem;
            if(selectItem== 'y' || selectItem=='Y'){
                goto item;
            }else{
                return billAmount;
            }
        }
        else
        {
            cout << "you have entered wrong value, please press 'a' or 'b'" << endl;
            goto item;
        }
    }
    else
    {
        cout << "you have entered wrong value, please press 's'" << endl;
        goto start;
    }
    cout<<billAmount;
}
