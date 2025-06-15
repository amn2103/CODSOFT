#include<iostream>
using namespace std;
int main()
{
double num1, num2;
char operation ;
cout<<"Enter the values of num1 and num2:";
cin>>num1>>num2;

cout<<"Enter the operation ";
cin>>operation;

if (operation == '+'){
    cout<<"result is :"<< num1 + num2<<endl;
}
else if (operation == '-'){
    cout<<"result is :"<<num1 - num2<<endl;

}
else if (operation =='*'){
    cout<<"result is :"<<num1 * num2 <<endl;
}
else if (operation =='/'){
    cout<<"result is :"<<num1 / num2 <<endl;
}

return 0;
}
