#include <iostream>
#include <vector>

using namespace std;

int iCount(initializer_list<int> i)
{
    int m = 0;
    int sum = 0;
    for (auto &t : i) {
        sum += t;
    }
    return sum;
}

int main(int argc, char **argv)
{
    int t1 = iCount({1, 2, 3, 4, 5});
    cout << "t1 = " << t1 << endl;

    int t2 = iCount({11, 22, 33});
    cout << "t2 = " << t2 << endl;
    
    int t3 = iCount({1, 2});
    cout << "t3 = " << t3 << endl;

    return 0;
}

