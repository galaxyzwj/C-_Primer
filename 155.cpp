#include <iostream>
#include <string>
using namespace std;


class Person
{
private:
    string strName;
    string strAddress;
public:
    Person() = default;
    Person(const string &name, const string &address) : strName(name),  strAddress(address)
    {
          
    }
    /*
    Person(std::istream &is)
    {
        is >> *this;
    }*/
    string getName() const
    {
        return this->strName;
    }
    string getAddress() const
    {
        return this->strAddress;
    }

};

int main(int argc, char **argv)
{
    Person m("jack", "china");
    cout << "NAME: " << m.getName() << endl;
    cout << "ADDRESS: " << m.getAddress()<< endl;
    return 0;
}
