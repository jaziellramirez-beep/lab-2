/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
    cout << "========================================"<<endl;
    cout << "WELCOME TO " << storeName << endl;
    cout << "EMPLOYEE: " << employeeName << endl;
    cout << "========================================"<<endl;
    
    // something?
    cout << fixed << setprecision(2);
    
    // Print each item manually using its own variable
    cout << left << setw(25) << item1 << " $" << price1 << endl;
    cout << left << setw(25) << item2 << " $" << price2 << endl;
    cout << left << setw(25) << item3 << " $" << price3 << endl;
    cout << left << setw(25) << item4 << " $" << price4 << endl;
    cout << left << setw(25) << item5 << " $" << price5 << endl;
    
    cout << "----------------------------------------"<<endl;
    cout << left << setw(25) << "SUBTOTAL:" << " $" << subtotal << endl;
    cout << left << setw(25) << "TAX VALUE (15%):" << " $" << salesTax <<endl;
    cout << left << setw(25) << "GRAND TOTAL:" << " $" << grandTotal << endl;
    cout << "========================================<<"<<endl;
    cout << "THANK YOU FOR YOUR BUSINESS!"<<endl;
    return 0;
}