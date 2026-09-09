///////////////////////////////////////////////////////////////
// Name:Jaziel Ramirez
// Date: september 9, 2026
// Course: CSCI 1470.04
// Semester: Fall 2026
// Instructor: Dr. Jonatan Reyes
// Program Description: simulate shopping cart
/////////////////////////////////////////////////////////////// 
#include <iostream>
using namespace std;
#include <algorithm>
#include <cctype>
#include <iomanip>  
int main()
{
//memory
string item1;
string item2;
string item3;
string item4;
string item5;

double price1;
double price2;
double price3;
double price4;
double price5;


string employeeName;
string storeName;


  
  //INPUTS
    cout<< "Enter employee full name: ";
    getline(cin, employeeName);
    cout<<endl;
    cout<<"storename ";
    cin>>storeName;
    cin.ignore();


// Item 1
    cout << "Enter name for item #1: ";
    getline(cin, item1);
    cout << "Enter price for item #1: ";
    cin >> price1;
    cin.ignore(); 
    cout << endl;
    
    // Item 2
    cout << "Enter name for item #2: ";
    getline(cin, item2);
    cout << "Enter price for item #2: ";
    cin >> price2;
    cin.ignore();
    cout << endl;
    
    // Item 3
    cout << "Enter name for item #3: ";
    getline(cin, item3);
    cout << "Enter price for item #3: ";
    cin >> price3;
    cin.ignore();
    cout << endl;
    
    // Item 4
    cout << "Enter name for item #4 ";
    getline(cin, item4);
    cout << "Enter price for item #4 ";
    cin >> price4;
    cin.ignore();
    cout << endl;
    
    // Item 5
    cout << "Enter name for item #5 ";
    getline(cin, item5);
    cout << "Enter price for item #5 ";
    cin >> price5;
    cin.ignore();
    cout <<endl;
   
   // calculate
    double subtotal = price1 + price2 + price3 + price4 + price5;
    double salesTax = subtotal * 0.15;
    double grandTotal = subtotal + salesTax;
   
   // --- OUTPUT RECEIPT SECTION ---
    cout << "==========================================="<<endl;
    cout<< right << setw(33)<<"THANKS FOR SHOPPING AT\n"<<right<<setw(23.5)<<storeName<<endl;
    cout << "EMPLOYEE: " << employeeName << endl;
    cout << "store# 3\n"<< "Edinburg, TX"<<endl;
    cout << "==========================================="<<endl;
    
    // something?
    cout << fixed << setprecision(2);
    
    // Print each item manually using its own variable
    cout << left << setw(33) << item1 << " $" << price1 << endl;
    cout << left << setw(33) << item2 << " $" << price2 << endl;
    cout << left << setw(33) << item3 << " $" << price3 << endl;
    cout << left << setw(33) << item4 << " $" << price4 << endl;
    cout << left << setw(33) << item5 << " $" << price5 << endl;
    
    cout << "============================================"<<endl;
    cout << right << setw(18) << "SUBTOTAL:" << right << setw(17)<<" $" << subtotal << endl;
    cout << right << setw(25) << "TAX VALUE (15%):" <<right << setw(10)<< " $" << salesTax <<endl;
    cout << right << setw(21) << "GRAND TOTAL:" << right << setw(14)<<" $"<< grandTotal << endl;
    cout << "============================================"<<endl;
    cout << right << setw(35) << "THANK YOU FOR YOUR BUSINESS!"<<endl<<endl;
   cout << right << setw(31)<<"*** CUSTOMER COPY ***";
   
    return 0;
}
