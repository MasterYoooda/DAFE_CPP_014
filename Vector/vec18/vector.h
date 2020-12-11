#pragma once

using namespace std;

class vectop
{
    int sz;
    double* elem;
    
public:
    vectop(int s);

    int size() const;

    vectop(initializer_list<double> l);

    vectop (vectop&& a);
    vectop (const vectop&);

    vectop& operator = (const vectop&);
    vectop& operator = (vectop&&);
    double& operator [] (int n);

    double operator [] (int n) const;

    ~vectop()

};
