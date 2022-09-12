#pragma once

#include <iostream>
using namespace std;

class Fraction
{
    private:
        int numerator;
        int denomerator;

        int GCD(int u, int v)
        {
            if (v != 0) 
            {
                return GCD(v, u % v);
            }
            else 
            { 
                return u;
            }
        }

    public:

        Fraction()
        {
            this->numerator = 0;
            this->denomerator = 1;
        }

        Fraction(int num, int den = 1)
        {
            this->numerator = num;
            this->denomerator = den;
            //this->Reduce();
        }

        void Reduce()
        {
            int gcd = this->GCD(this->numerator, this->denomerator);
            this->numerator = this->numerator / gcd;
            this->denomerator /= gcd;
        }

        Fraction Add(Fraction frac2)
        {
            Fraction f;
            f.numerator = this->numerator * frac2.denomerator + frac2.numerator * this->denomerator;
            f.denomerator = this->denomerator * frac2.denomerator;
            f.Reduce();
            return f;
        }

        Fraction operator+(const Fraction& f)
        {
            Fraction r; 
            r.numerator = (this->numerator * f.denomerator) + (this->denomerator * f.numerator); 
            r.denomerator = this->denomerator * f.denomerator;
            r.Reduce();
            return r; 
        }

        Fraction& operator+=(const Fraction& f) 
        {
            *this = *this + f;
            this->Reduce();
            return *this; 

            // this->numerator = (this->numerator * f.denomerator) + (this->denomerator * f.numerator); 
            // this->denomerator = this->denomerator * f.denomerator;
            // this->Reduce();
            // return *this;

            
        }

        Fraction operator-(const Fraction& f)
        {
            Fraction r; 
            r.numerator = (this->numerator * f.denomerator) - (this->denomerator * f.numerator); 
            r.denomerator = this->denomerator * f.denomerator;
            r.Reduce();
            return r; 
        }

        Fraction& operator-=(const Fraction& f) 
        {
            *this = *this - f;
            this->Reduce();
            return *this;
        }

        Fraction operator*(const Fraction& f)
        {
            Fraction r; 
            r.numerator = this->numerator *  f.numerator;
            r.denomerator = this->denomerator * f.denomerator;
            r.Reduce();
            return r; 
        }

        Fraction operator/(const Fraction& f)
        {
            Fraction r; 
            r.numerator = this->numerator *  f.denomerator;
            r.denomerator = this->denomerator * f.numerator;
            r.Reduce();
            return r; 
        }


        void Sub(Fraction frac2)
        {
            this->numerator = this->numerator * frac2.denomerator - frac2.numerator * this->denomerator;
            this->denomerator = this->denomerator * frac2.denomerator;

            this->Reduce();
        }

        void Mult(Fraction frac2)
        {
            this->numerator = this->numerator *  frac2.numerator;
            this->denomerator = this->denomerator * frac2.denomerator;

            this->Reduce();
        }

        void Div(Fraction frac2)
        {
            this->numerator = this->numerator *  frac2.denomerator;
            this->denomerator = this->denomerator * frac2.numerator;

            this->Reduce();
        }

        bool operator==(const Fraction& f) 
        {
            if(this->numerator == f.numerator && this->denomerator == f.denomerator) 
                return true;
            else
                return false;
        }

        bool operator>(const Fraction& f) 
        {
            Fraction temp = *this - f;
            cout << "temp: " << temp.numerator << " / " << temp.denomerator << endl;

            if (temp.numerator > 0 && temp.denomerator > 0)
                return true;
            else
                return false;
            
        }

        void Print()
        {
            cout << this->numerator << " / " << this->denomerator << endl;
        }

        friend ostream& operator<<(std::ostream& os, const Fraction& f) 
        {
            os << f.numerator << "/" << f.denomerator;
            return os;
        }

        friend istream& operator>>(std::istream& is, Fraction& f) 
        {
            cout << "Enter two numbers for fraction: ";
            is >> f.numerator >> f.denomerator;
            return is;
        }


};