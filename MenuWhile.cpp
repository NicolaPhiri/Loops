#include <iostream>
using namespace std;
//Menu function prototype
void displayMenu();
int main()
{
    while (true)
    {
        char chrOption;
        //call the function
        displayMenu();
        cout<<"Enter choice"<<" ";
        cin>>chrOption;
        if (chrOption=='1')
        cout<<"Triangle";
    }
    return 0;
}
void displayMenu()
{
    cout<<"Shapes Menu"<<"\n";
    cout<<"1.Triangle Area"<<"\n";
    cout<<"2.Circle Area"<<"\n";
    cout<<"3.Exit"<<"\n";

}