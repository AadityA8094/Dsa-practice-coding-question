#include <bits/stdc++.h>
using namespace std;
class A
{
    int l;

protected:
    int b;
    public:
    A()
    {
        l = 12;
        b = 13;
        cout<<"tau is called"<<endl;
    }

    friend int friend_fun(A);
};
int friend_fun(A OBJ1)
{
    OBJ1.b *= 2;
    OBJ1.l /= 2;
    return OBJ1.b * OBJ1.l;
};
int main()
{
    A OBJ1;
    cout<< friend_fun(OBJ1)<<endl;

    return 0;
}