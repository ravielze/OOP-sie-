#include <iostream>
#include <utility> // untuk pair
using namespace std;

template <class T1, class T2, class T3>
class Triplet
{
private:
    pair<T1, T2> tup;
    T3 third;

public:
    Triplet(T1 t1, T2 t2, T3 t3) : tup(make_pair(t1, t2)), third(t3){};

    ~Triplet(){};

    T1 getFirst() const
    {
        return tup.first;
    };

    T2 getSecond() const
    {
        return tup.second;
    };

    T3 getThird() const
    {
        return third;
    };

    bool operator==(const Triplet &o)
    {
        return (this->getFirst() == o.getFirst()) && (this->getSecond() == o.getSecond()) && (this->getThird() == o.getThird());
    }
};

int main()
{
    Triplet<string, float, string> a("abc", 4.5, "def");
    Triplet<string, float, string> b("ghi", -1.0, "def");
    Triplet<string, float, string> c("abc", 4.5, "def");

    if (a == b)
    {
        cout << "a == b" << endl;
    }
    if (a == c)
    {
        cout << "a == c" << endl;
    }
}