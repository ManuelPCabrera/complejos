#include "complejo.h"
#include <iostream>
using namespace std;
//constructor
complejo::complejo()
{
    P_real = 1;
    P_imaginaria = 1;
}
//destructor
complejo::~complejo()
{

}
///////////SETTERS//////////
void complejo::Set_imaginario(float nuevo_imaginaria)
{
    P_imaginaria = nuevo_imaginaria;
}

void complejo::Set_real(float nuevo_real)
{
    P_real = nuevo_real;
}

void complejo::SetData()
{
    cout << "Introduzca el valor real del complejo: ";
    cin >> P_real;
    cout << "Introduzca el valor imaginario del complejo: ";
    cin >> P_imaginaria;
}

/////////GETERS/////////

float complejo::get_imaginario()
{
    return P_imaginaria;
}
float complejo::get_real()
{
    return P_real;
}

//////// SOBRE CARGA DE OPERADORES ///////
complejo& complejo::operator+ (const complejo &cmp)
{
    complejo& suma = *this;

    suma.P_real+= cmp.P_real;
    suma.P_imaginaria+= cmp.P_imaginaria;

    return suma;
}
//// CARGA SOBRE OPERADOR CON FUNCION FRIEND ////
complejo operator-(const complejo &cmp0, const complejo& cmp1)
{
    complejo cmp2;

    cmp2.P_real = cmp0.P_real - cmp1.P_real;
    cmp2.P_imaginaria = cmp0.P_imaginaria - cmp1.P_imaginaria;

    return cmp2;
}

ostream& operator<< (ostream& co, const complejo &cmp)
{
    ios_base::fmtflags fl;
    //int fl;

    co << cmp.P_real;
    fl = co.setf(ios::showpos);
    co << cmp.P_imaginaria << "i";
    co.flags(fl);

    return co;
}

complejo operator*(const complejo &cmp0, const complejo& cmp1)
{
    complejo cmp2;

    cmp2.P_real = cmp0.P_real*cmp1.P_real - cmp0.P_imaginaria*cmp1.P_imaginaria;
    cmp2.P_imaginaria = cmp0.P_real*cmp1.P_imaginaria + cmp0.P_imaginaria*cmp1.P_real;

    return cmp2;
}

/*
complejo complejo::operator/ (const complejo &cmp)
{
    complejo cociente;
    float deno;

    deno = cmp.P_real*cmp.P_real + cmp.P_imaginaria*cmp.P_imaginaria;
    cociente.P_real = (P_real*cmp.P_real + P_imaginaria*cmp.P_imaginaria)/deno;
    cociente.P_imaginaria = (-P_real*cmp.P_imaginaria + P_imaginaria*cmp.P_real)/deno;

    return cociente;
}
}
*/

complejo complejo::operator/ (const complejo &cmp)
{
    complejo cociente;
    double deno;

    deno = cmp.P_real*cmp.P_real + cmp.P_imaginaria*cmp.P_imaginaria;
    cociente.P_real = (P_real*cmp.P_real + P_imaginaria*cmp.P_imaginaria)/deno;
    cociente.P_imaginaria = (-P_real*cmp.P_imaginaria + P_imaginaria*cmp.P_real)/deno;

    return cociente;
}
