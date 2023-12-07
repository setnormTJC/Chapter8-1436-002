#include <iostream>
#include <vector>

using namespace std;

int getMaxAge(std::vector<int> listOfAges)
{
    int maxAge = listOfAges[0]; //22

    for (int age : listOfAges)
    {
        if (age > maxAge)
        {
            maxAge = age; 
        }
    }

    return maxAge; 

}

double getTableAverage(std::vector<vector<int >> someTable)
{

    double sum = 0.0; 
    for (vector<int> row : someTable)
    {
        for (int number : row)
        {
            sum += number; 
        }
    }

    double average = sum / 9.0;

    return average; 
}

int main()
{
    vector<vector<int> > tableOfPeoplesCharacteristics =
    {
        {22, 36,    14}, //row 1 (ages)
        {140, 190, 110}, //row 2 (list of weights)
        {65, 72, 60}, //row 3 (heights) 
    };

    for (auto& row : tableOfPeoplesCharacteristics) //cover the rows
    {
        for (auto& element : row) //cover the columns
        {
            cout << element << "\t";
        }
        cout << "\n";
    }

    cout << "\n\n";
    cout << "The max age is: " << getMaxAge(tableOfPeoplesCharacteristics[0]) << endl;
    
    cout << "The AVERAGE of all those numbers is: "
        << getTableAverage(tableOfPeoplesCharacteristics) << endl;

    return 0;
}