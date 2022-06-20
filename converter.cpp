#include <iostream>
#define maxt 100
using namespace std;
//Program to convert decimal number to octal or binary
int main()
{
    int answer, digits = 0;
    int decimal, result[maxt], division;
    cout<<"Welcome to the decimal and octal conversion program"<<endl;
    cout<<"Please enter whether you want to convert to octal or decimal, \n mark 8 for octal and 2 for binary:"<<endl;
    cin>>answer;
    cout<<"Please enter the number to be transformed:"<<endl;
    cin>>decimal;
    division=decimal;
    do{
        division = decimal/answer;
        digits++;
    }
    while (division > 0 );
    for (int i=0; i<digits; i++)
    {
        result[i] = decimal%answer;
    }
    cout<<"El numero decimal "<<decimal<<", en el sistema de numérico de "<<answer<<" numeros, es: \n"<<endl;
    for (int i=digits-1; i>=0; i--)
    {
        cout<<result[i];
    }
}
