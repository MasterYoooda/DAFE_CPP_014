#include <iostream>

using namespace std;

class vectop
        {
    int sz;
    double* elem;
public:
    vectop(int s)
    {
        sz = s;
        elem = new double[s];
        for(int i = 0; i < s; ++i)
            elem[i] = 0.0;
    }
    int size() const
    {
        return sz;
    }
    double get(int n)
    {
        return elem[n];
    }
    void set(int n, double v)
    {
        elem[n] = v;
    }
    ~vectop()
    {
        delete [] elem;
    }
};

int main()
{
    vectop test(4);
    test.set(1,1.0);
    test.set(2,2.1);
    test.set(3,3.2);
    test.set(4,4.3);
    for (int i = 0; i < test.size(); i++)
        cout << test.get(i) << '\n';
}
