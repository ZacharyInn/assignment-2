#include <iostream>
#include <string>
using namespace std;

//a void function that outputs the length in meters and centimeters
void output(int meter, double centi)
{
  cout << "The length in meters is: " << meter << " meters and " << centi << " centimeters." << endl;
}

//a void function that converts the feet and inches originally given in the userInput method and converts them to meters and centimeters
void calc(int feet, int inches)
{
  //total amount of inches
  int totalLength = (feet * 12) + inches;
  //total amount of centimeters, converting from inches
  int centimeters = (totalLength * 2.54);
  //converting centimeters to meters
  int meters = centimeters/100;
  //rounding the centimeters to the nearest whole centimeter
  int centimeter = centimeters%100;

  output(meters, centimeter);
  return;
}

//a void function that prompts the user for input that is the feet and inches they want to convert to meters and centimeters
void userInput()
{
  string input = "";
  string feet;
  string inch;
  cout << "Enter a length in feet and inches separated by a space. Enter \"exit\" to exit the program." << endl;
  getline(cin,input);
  //runs as long as the user does not input "exit", which would stop the program
  while (input != "exit")
  {
    //the first number is feet which we can find by taking a substring that starts at the beginning of the string and ends at the space
    feet = input.substr(0, (input.find(' ')));
    //the second number is inches which can be fount by taking a substring that starts at 1 after the space and ends at the end of the string
    inch = input.substr((input.find(' ')) + 1, input.size());
    //converts the strings to int
    int feet1 = stoi (feet);
    int inch1 = stoi (inch);
    calc (feet1, inch1);
    //prompts for user input again, gives opportunity to exit or input more numbers
    cout << "Enter a length in feet and inches separated by a space. Enter \"exit\" to exit the program." << endl;
    getline(cin,input);
  }
  return;
}

//runs userInput
int main()
{
  userInput();
  return 0;
}
