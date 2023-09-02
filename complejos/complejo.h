#ifndef COMPLEJO_H
#define COMPLEJO_H
#include<iostream>

using namespace std;

class complejo
{
    public:
        complejo();
        virtual ~complejo();

        void Set_imaginario(float);
        void Set_real(float);
        void SetData();
        // sobrecarga de operadores (usando puntero this)
        complejo& operator+ (const complejo&);
        complejo operator/ (const complejo&);
        // con funcion FRIEND
        friend complejo operator- (const complejo& cmp0, const complejo& cmp1);
        friend complejo operator* (const complejo &cmp0, const complejo& cmp1);
        friend ostream& operator<< (ostream&, const complejo&); // VERRRRR

       // float get_complejo();
        float get_imaginario();
        float get_real();



    protected:
        float P_real;
        float P_imaginaria;

    private:
};

#endif // COMPLEJO_H
