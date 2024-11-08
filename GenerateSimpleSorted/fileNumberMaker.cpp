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
    ofstream sort_file("sorted.txt");
    int num = atoi(argv[1]);
    for(int i = 1; i <= num; i++)
    {
        sort_file << i;
        if(i != num) sort_file << endl;
    }
    sort_file.close();

    ofstream d_sort("d_sorted.txt");
    for(int i = num; i >= 1; i--)
    {
        d_sort << i;
        if (i != 1) d_sort << endl;
    }
    d_sort.close();

    ofstream rand_file("random.txt");
    vector<int> arr;

    while(arr.size() != num)
    {
        int random = rand() % (num) + 1;
        if(find(arr.begin(), arr.end(), random) == arr.end())
        {
            arr.push_back(random);
            rand_file << random;
            if (arr.size() != num) rand_file << endl;
        }
    }
    rand_file.close();
}

