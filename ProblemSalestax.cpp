#include <iostream>
#include <iomanip>
using namespace std;

//function that returns a float value that represents the cost of an item with tax
float addTax(float taxRate, float cost)
{
  float final = cost * (taxRate * 0.01);
  final += cost;
  return final;
}

int main()
{
  float tax;
  float price;
  //prompts user for float variables
  cout << "Enter the sales tax as a percent (leave out percent sign)." << endl;
  cin >> tax;
  cout << "Enter the cost of the item before tax." << endl;
  cin >> price;
  cout << "Here is the price of the item with sales tax: $";
  //since the float will represent money, the precision is set to 2 decimal places
  cout << fixed << setprecision(2) << addTax(tax, price) << endl;
  return 0;
}
