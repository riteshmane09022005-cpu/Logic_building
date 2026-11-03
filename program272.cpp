#include<iostream>
#include<cstdlib>

using namespace std;

template <class T>                  //generic datatype
T Addition(T No1, T No2)
{
    T Ans = 0;

    Ans = No1 + No2;

    return Ans;
}

int main()
{
    cout << Addition(10, 11) << "\n";

    cout << Addition(10.5f, 11.3f) << "\n";

    cout << Addition(10.5, 11.3) << "\n";

    return EXIT_SUCCESS;
}
