#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int a, b, c;

int main() {
    cin >> a >> b >> c;
    
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    
    sort(v.begin(), v.end());
    
    cout << v[0] << " " << v[1] << " " << v[2];
    
    return 0;
}