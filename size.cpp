#include<iostream>
using namespace std;

int main()
{
    int integerType;
    char charType;
    float floatType;
    double doubleType;
    cout << "Size of int: " << //size of integer
    sizeof(integerType)<<"bytes"<<"\n";
    cout << "Size of char: " <<//size of character
    sizeof(charType)<<"bytes" <<"\n";
    cout << "Size of float: "<<//size of float
    sizeof(floatType) <<"bytes"<<"\n";
    cout << "Size of double: " <<//size of double
    sizeof(doubleType)<<"bytes" <<"\n";
    return 0;
}
