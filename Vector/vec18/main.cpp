#include vector.h

int main()
{
    vectop test (10);

    for (int i = 0; i < test.size(); i++)
    {
        test[i] = i * i;
        cout << test[i] << ' ';
    }
    cout<<'\n';

    const vectop test2 = {1.1,2.2,3.3,4.4,5.5};
    
    for (int i = 0; i < test2.size(); i++)
        cout<<test2[i]<<' ';
    return 0;
}
