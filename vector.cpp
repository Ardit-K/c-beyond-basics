#include <stdio.h>
#include <iostream>
#include <vector>
#include "Resource.h"

using std::vector;
using std::cout;

int main(){
    vector numbers{1, 2, 3};
    for ( int i : numbers){
        cout << i << std::endl;
    }
    cout << "Time to Change the List \n";
    numbers.push_back(4);
    for (int i : numbers){
        cout << i << std::endl;
    }
    Resource r("local");
    {
        cout << "--------------------" << std::endl;
        vector<Resource> resources;
        resources.push_back(r);
        cout << "--------------------" << std::endl;
        resources.push_back(Resource("first"));
        cout << "--------------------" << std::endl;
        resources.push_back(Resource("second"));
        cout << "--------------------" << std::endl;
    }
    return 0;
}