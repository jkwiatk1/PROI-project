#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> g;
    g.push_back(10);
    g.push_back(20);
    g.push_back(30);
    g.push_back(40);
    g.push_back(10);

    for (auto number : g)
        cout << number << endl;

    cout << endl;
    auto it = remove(g.begin(),g.end(),10);
    g.erase(it,g.end());


    for (auto number : g)
        cout << number << endl;
    
}