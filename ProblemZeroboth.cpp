#include <iostream>
using namespace std;

//void function that takes in 2 pointer int parameters that changes the initial variables used as parameters to 0
void zeroBoth(int* param1, int* param2)
{
  *param1 = 0;
  *param2 = 0;
  return;
}

int main()
{
  int var1 = 0;
  int var2 = 0;
  //prompts user for 2 integers
  cout << "Enter 2 integers:" << endl;
  cin >> var1;
  cin >> var2;
  //passes the 2 int variables as reference variables
  zeroBoth(&var1, &var2);
  //outputs the initial int variables after calling the zeroBoth function which sets them both to 0
  cout << "Here are the integers after calling the zeroBoth function." << endl;
  cout << var1 << endl;
  cout << var2 << endl;
  return 0;
}
