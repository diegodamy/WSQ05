#include <iostream>
using namespace std;

float fahr;

int main(){
cout <<"What's the temperature in Fahrenheits?" << endl;
cin >> fahr;
cout << endl;
cout <<"The equivalent temperature in Celsius is ";
cout << 5*(fahr-32)/9;
cout <<" Degrees." << endl;
cout << endl;

if (fahr >= 212 ) {
  cout << "Water boils at this temperature under normal conditions" << endl;
} else {
  cout << "Water does not boil at this temperature under normal conditions" << endl;
  }
}
