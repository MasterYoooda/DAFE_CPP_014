# include "vector.cpp"

int main()
{
    vectop <int> test1 = {1,2,3,4,5,6,7,8,9,10};
    vectop <string> test2 = {"a", "b", "c", "d", "e", "F"};
    test1.resize(13, 100);
    for (int i = 0; i < test1.size(); i++)
        cout<<test1[i]<<' ';
    cout<<'\n';

    for(int i = 0; i < test2.size(); i++)
        cout<<test2[i]<<' ';
    cout<<'\n';
}
