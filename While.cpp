/*Iteration*/
#include<iostream>
using namespace std;
int main()
{
    /*Declare*/
    int intSum= 0;
    int intCount= 0;
    while (intCount<=10)
    {
        intSum=intSum+intCount;
        intCount=intCount+1;
    }
    cout<< "The sum is:";
    cout<< intSum;
    return 0;
}