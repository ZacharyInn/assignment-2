#include <iostream>
using namespace std;

int main()
{
  //initializes an array with 10 indexs
  int numberArray[10];
  //prompts user for input 10 inputs and the input is put into the array
  for (int x = 0; x < 10; x++)
  {
    int input = 0;
    cout << "Enter a nonnegative integer: " << endl;
    cin >> input;
    numberArray[x] = input;
  }

  //prints out the contents of the array
  cout << "Your integers are: " << endl;

  for (int x = 0; x < 10; x++)
  {
    cout << numberArray[x] << endl;
  }

  return 0;
}
