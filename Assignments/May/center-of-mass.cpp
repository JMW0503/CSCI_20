#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inf;
    inf.open("FileToRead.txt");
    if (!inf.is_open())
    {
        cerr << "Can't open data.txt!" << endl;
        return 1;
    }

    int number;
    inf >> number;

    cout << "The number is " << number << " Twice the number is " << number * 2 <<endl;

    while (!inf.eof())
    {
        string dataFromFile;
        getline(inf, dataFromFile);
        cout << dataFromFile << endl;
    }

    inf.close();

    return 0;

}