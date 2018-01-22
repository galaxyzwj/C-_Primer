#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(int argc, char **argv)
{
    int a[10] = {0};
    vector<int> vec(10, 0);
    srand((unsigned int)time(NULL));
    cout << "vector list: ";
    for (auto &t : vec) {
        t = rand() % 100;
        cout << t << " ";
    }
    cout << endl;
    int i = 0;
    for (auto &s : vec) {
        a[i++] = s;
    }

    cout << "shuzu list: ";
    for (auto & z : a) {
        cout << z << " ";
    }
    cout << endl;
    


    return 0;
}


