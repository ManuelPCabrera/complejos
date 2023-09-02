#include <iostream>
#include "complejo.h"

using namespace std;

int main()
{
    complejo c1,c2,c3;
    c1.SetData();
    c2.Set_real(4);
    c2.Set_imaginario(4);

     c2 + c1;


    cout <<c2<<" "<< c2<<endl;
    return 0;
}
