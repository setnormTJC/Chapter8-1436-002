#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int theNumbers = 42;// 43;
    //array ~ list 
    //a = 43; 

    vector <string> grocery_list =
    {
        "hard-boiled eggs",
        "cheddar cheese",
        "almonds"
    };

    //cout << grocery_list[1] << endl; 
    grocery_list.push_back("pistachios");

    //cout << grocery_list.size() << endl; 
    for (int i = 0; i < grocery_list.size(); i++)
    {
        cout << grocery_list[i] << endl; 
    }

    return 0;
}