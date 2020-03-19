#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v1 = { 3, 1, 7, 9,2,5,6,8,7,6 };

    int s = 0;

    std::for_each(v1.begin()+2, v1.end()-1, [&s](int x) {s += x; });
    std::cout << s << std::endl;
}