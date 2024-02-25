#include <iostream>
#include <vector>
using namespace std;
using std::exception;
using std::out_of_range;

int main()
{
    vector<int> v;
    v.push_back(1);
    try
    {
        int j = v.at(99);
    }
    catch(out_of_range & oor)
    {
        cout << "Index was out-of-range. " << oor.what();
    }
    return 0;
}