//The input are numbers from 1 to 3, this method will sort them in ascending order

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
  
  cout << "Please, put the numbers: ";                           //"1+2+1+3+2+1..."
	cin >> str;
  
  sort(str.begin(), str.end());                                 //sort the numbers
  cout << "\nThe numbers in order are: " << str << endl;        //print out the string
}
