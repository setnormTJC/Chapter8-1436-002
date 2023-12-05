#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //const int BAKERS_DOZEN = 13; 
    //string cookiesList[BAKERS_DOZEN] =
    //{
    //    "PB",
    //    "choco chip",
    //    "snickerdoodles"
    //};
    //int someNumbers[10] = { 3, 5, 7, 9, 123, -999}; //"C-style array"
    //for (int i = 0; i < 10; i++)
    //{
    //    cout << someNumbers[i] << endl; 
    //}

    //int arraySize;
    //cout << "Enter desired array size: " << endl;
    //cin >> arraySize;

    ////int list[arraySize];

    //vector<int> dynamicList; 

    ////dynamicList.push_back(1)
    //for (int i = 0; i < arraySize; i++)
    //{
    //    dynamicList.push_back(i * 2);
    //}

    //for (int i = 0; dynamicList.size(); i++)
    //{
    //    cout << dynamicList[i] << endl; 
    //}

    int randomNumberList[] =
    {
    1,
    2,
    3,
    4,
    5,
    6, 
    77, 
    88
    };

    int listSize = sizeof(randomNumberList);
    //cout << "The number of elements is: " << listSize/sizeof(int) << endl;


    int bigArray[1'000'000]; //stack overflow - asking for too much memory 


    return 0;
}