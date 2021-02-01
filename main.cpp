#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double total_cost, vat_amount, amount_paid, balance;
    const double vat=0.12;
    const int printer_price=315;
    const int phone_price=355;
    const int table_price=105;
    string name_Of_Customer;
    int unique_ID, quantity_bought, item_to_be_bought, choice;
    char option;

    do{
    cout << "~~WE WARMLY WELCOME YOU TO INVINCIBLE SUPERMARKET~~\n" << endl;
    // program asks for the name of the customer
    cout<<"please what is your name\n";
    getline(cin, name_Of_Customer);

    cout <<endl;


    //system requests for your unique ID
    cout <<"what is your unique ID? mention the numbers only\n";
    cin>>unique_ID;

    cout <<"we do two things here, but only option 1 is currently available\n";
    cout <<"1. Purchasing an item\n";
    cout <<"2. Making enquiries"<<endl;
    cout<<endl;
    cout<<"select option 1 to continue\n";
    //int choice;
    cin>>choice;

    while(choice!=1){
            cout<<"please select option one only\n";
            cin>>choice;}


    //system request for the item to be bought
    cout <<"These are the items we sell here: Printer, phone or table\n";
    cout <<"(you can buy only one thing at a time)\n\n";
    cout <<left<<setw(12)<<"ITEM"<<setw(9)<<"PRICE"<<endl;
    cout <<"__________________\n";
    cout<<left<<setw(12)<<"1.Printer"<<setw(9)<<"GHC315"<<endl;
    cout<<left<<setw(12)<<"2.Phone"<<setw(9)<<"GHC355"<<endl;
    cout <<left<<setw(12)<<"3.Table"<<setw(9)<<"GHC105"<<endl;
    cout<<endl;

    cout<<"What item do you want to buy\n";
    cout<<"Enter '1' for printer\nEnter '2' for phone\nEnter '3' for table\n";
    cin>>item_to_be_bought;


    if (item_to_be_bought==1){
        cout<<"how many pieces do you want\n";
        cin>>quantity_bought;
        cout<<endl;

        cout<<"How much money do you have to pay for the item selected"<<endl;
        cin>>amount_paid;

        vat_amount=printer_price * quantity_bought * vat;
        total_cost=(printer_price * quantity_bought) + vat_amount;
        balance=amount_paid - total_cost;

        if (balance>=0){
            cout<<setw(40)<<"INVINCIBLE SUPERMARKET"<<endl;
        cout<<setw(35)<<"Official Receipt"<<endl;
        cout<<setw(35)<<"Contact: 0558294700/ 020697550"<<endl;
        cout<<setw(35)<<"Location: Abura, Cape coast"<<endl;
        cout<<"______________________________________________________________"<<endl;
        cout<<left<<setw(25)<<"Name of the Customer"<<setw(20)<<name_Of_Customer<<endl;
        cout<<left<<setw(25)<<"Customer's Unique ID"<<setw(20)<<unique_ID<<endl;
        cout<<left<<setw(25)<<"Item Bought"<<setw(20)<<"Printer"<<endl;
        cout<<left<<setw(25)<<"Quantity Bought"<<setw(20)<<quantity_bought<<endl;
        cout<<left<<setw(25)<<"Vat Amount"<<setw(20)<<fixed<<setprecision(2)<<vat_amount<<endl;
        cout<<left<<setw(25)<<"Total Cost"<<setw(20)<<fixed<<setprecision(2)<<total_cost<<endl;
        cout<<left<<setw(25)<<"Total Amount Paid"<<setw(20)<<fixed<<setprecision(2)<<amount_paid<<endl;
        cout<<left<<setw(25)<<"Balance"<<setw(20)<<fixed<<setprecision(2)<<balance<<endl;
        cout<<endl;
        cout<<"Thank you for transacting with us, "<<name_Of_Customer<<endl;
        cout<<endl;


        cout<<"Do you want to purchase another item?\n";
        cout<<"Enter 'Y' or 'y' for yes and 'N' or 'n' for no\n";
        cin>>option;
        cout<<endl;
        }


        else
        {
            cout<<"your balance is not enough to purchase the selected item\n";
        }
    }
    else if(item_to_be_bought==2){
        cout<<"how many pieces do you want\n";
        cin>>quantity_bought;
        cout<<endl;

        cout<<"How much money do you have to pay for the item selected"<<endl;
        cin>>amount_paid;

        vat_amount=phone_price * quantity_bought * vat;
        total_cost=(phone_price * quantity_bought) + vat_amount;
        balance=amount_paid - total_cost;

        if (balance>=0){
            cout<<setw(40)<<"INVINCIBLE SUPERMARKET"<<endl;
        cout<<setw(35)<<"Official Receipt"<<endl;
        cout<<setw(35)<<"Contact: 0558294700/ 020697550"<<endl;
        cout<<setw(35)<<"Location: Abura, Cape coast"<<endl;
        cout<<"______________________________________________________________"<<endl;
        cout<<left<<setw(25)<<"Name of the Customer"<<setw(20)<<name_Of_Customer<<endl;
        cout<<left<<setw(25)<<"Customer's Unique ID"<<setw(20)<<unique_ID<<endl;
        cout<<left<<setw(25)<<"Item Bought"<<setw(20)<<"Phone"<<endl;
        cout<<left<<setw(25)<<"Quantity Bought"<<setw(20)<<quantity_bought<<endl;
        cout<<left<<setw(25)<<"Vat Amount"<<setw(20)<<fixed<<setprecision(2)<<vat_amount<<endl;
        cout<<left<<setw(25)<<"Total Cost"<<setw(20)<<fixed<<setprecision(2)<<total_cost<<endl;
        cout<<left<<setw(25)<<"Total Amount Paid"<<setw(20)<<fixed<<setprecision(2)<<amount_paid<<endl;
        cout<<left<<setw(25)<<"Balance"<<setw(20)<<fixed<<setprecision(2)<<balance<<endl;
        cout<<endl;
        cout<<"Thank you for transacting with us, "<<name_Of_Customer<<endl;
        cout<<endl;


        cout<<"Do you want to purchase another item?\n";
        cout<<"Enter 'Y' or 'y' for yes and 'N' or 'n' for no\n";
        cin>>option;
        cout<<endl;
        }


        else
        {
            cout<<"your balance is not enough to purchase the selected item\n";
        }

    }
    else if(item_to_be_bought==3){
        cout<<"how many pieces do you want\n";
        cin>>quantity_bought;
        cout<<endl;

        cout<<"How much money do you have to pay for the item selected"<<endl;
        cin>>amount_paid;

        vat_amount=table_price * quantity_bought * vat;
        total_cost=(table_price * quantity_bought) + vat_amount;
        balance=amount_paid - total_cost;

        if (balance>=0){
            cout<<setw(40)<<"INVINCIBLE SUPERMARKET"<<endl;
        cout<<setw(35)<<"Official Receipt"<<endl;
        cout<<setw(35)<<"Contact: 0558294700/ 020697550"<<endl;
        cout<<setw(35)<<"Location: Abura, Cape coast"<<endl;
        cout<<"______________________________________________________________"<<endl;
        cout<<left<<setw(25)<<"Name of the Customer"<<setw(20)<<name_Of_Customer<<endl;
        cout<<left<<setw(25)<<"Customer's Unique ID"<<setw(20)<<unique_ID<<endl;
        cout<<left<<setw(25)<<"Item Bought"<<setw(20)<<"Table"<<endl;
        cout<<left<<setw(25)<<"Quantity Bought"<<setw(20)<<quantity_bought<<endl;
        cout<<left<<setw(25)<<"Vat Amount"<<setw(20)<<fixed<<setprecision(2)<<vat_amount<<endl;
        cout<<left<<setw(25)<<"Total Cost"<<setw(20)<<fixed<<setprecision(2)<<total_cost<<endl;
        cout<<left<<setw(25)<<"Total Amount Paid"<<setw(20)<<fixed<<setprecision(2)<<amount_paid<<endl;
        cout<<left<<setw(25)<<"Balance"<<setw(20)<<fixed<<setprecision(2)<<balance<<endl;
        cout<<endl;
        cout<<"Thank you for transacting with us, "<<name_Of_Customer<<endl;
        cout<<endl;


        cout<<"Do you want to purchase another item?\n";
        cout<<"Enter 'Y' or 'y' for yes and 'N' or 'n' for no\n";
        cin>>option;
        cout<<endl;
        }


        else
        {
            cout<<"your balance is not enough to purchase the selected item\n";
        }

    }

    else
    {cout<<"you did not select any item from the list\n";}
    }
    while(option=='y'||'y');

    return 0;

}
