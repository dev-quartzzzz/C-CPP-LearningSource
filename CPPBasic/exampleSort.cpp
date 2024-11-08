#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream my_file(argv[1]);
    ofstream sort_file("exampleSort.txt");
    string temp;
    vector<int> arr;
    while (getline(my_file, temp))
    {
        arr.push_back(stoi(temp));
    }
    sort(arr.begin(), arr.end());
    cout << *(arr.begin() + 1);
    for(auto i : arr)
    {
        sort_file << int(i);
        if(i != *(arr.end()-1)) sort_file << endl;
    }
    my_file.close();
    sort_file.close();
}