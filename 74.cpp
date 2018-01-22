#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(int argc, char **argv)
{
    const int cnt = 10;
    int m[cnt] = {0};
    srand((unsigned) time(NULL));

    cout << "随机生成的数组: ";
    for (auto &t : m) {
        t = rand() % 100;
        cout << t << " ";
    }
    cout << endl;

    vector<int> vec(begin(m), end(m));
/*    vector<int> vec(10, 0);
    for (auto &y : m) {
        vec.push_back(y);
    }*/
    cout << "vector容器值: ";
    for (auto & z : vec) {
        cout << z << " ";
    }
    cout << endl;

    return 0;
}


