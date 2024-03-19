#include <cstring>
#include<iostream>
using namespace std;
int main()
{ char destination[25];
 char blank[] = " ", p[]= "Programming",
 DoubleC[] = "C++ ";
 strcpy(destination, DoubleC);
 //strcat(destination, blank);
 strcat(destination, p);
 cout<<destination<<endl;
 return 0;
}
