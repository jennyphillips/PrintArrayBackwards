#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n = 0;
    cin >> n;
    if (n < 1 || n > std::pow(10, 3))
    {
        throw invalid_argument("invalid size indicated: " + n);
    }

    vector<int> arr(n);
    for (int arr_i = 0; arr_i < n; arr_i++)
    {
        int a = 0;
        cin >> a;

        if (a < 1 || a > std::pow(10, 4))
        {
            throw invalid_argument("invalid integer indicated: " + a);
        }
        arr[arr_i] = a;
    }

    cin.clear();
    cin.ignore();

    for (int i = arr.size()-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    cin.get();
    return 0;
}

