#ifndef Date_h
#define Date_h
#include <iostream>
using namespace std;

#pragma once
class Date
{
    int year;
    int month;
    int day;
public:
    Date();
    Date(int year, int month, int day);
    
    Date& operator = (const Date& obj);

    bool isLeapYear()const;
    int monthDays()const;
    void nextDate();
    void prevDate();
 
    void setYear(int year);
    int getYear()const;
    void setMonth(int month);
    int getMonth()const;
    void setDay(int day);
    int getDay()const;

    void showDate()const;
    bool valid()const;
    
    bool operator == (const Date& obj)const&;
    bool operator != (const Date& obj)const&;
    bool operator > (const Date& obj)const&;
    bool operator < (const Date& obj)const&;
    bool operator >= (const Date& obj)const&;
    bool operator <= (const Date& obj)const&;
        
    Date& operator += (int days);
    Date& operator -= (int days);
    Date& operator += (float months);
    Date& operator -= (float months);
    Date& operator += (long years);
    Date& operator -= (long years);

    Date operator + (int days)const&;
    Date operator - (int days)const&;
    Date operator + (float months)const&;
    Date operator - (float months)const&;
    Date operator + (long years)const&;
    Date operator - (long years)const&;

    Date& operator -- ();
    Date operator -- (int);
    Date& operator ++ ();
    Date operator ++ (int);

    friend Date operator + (int days, const Date& a){
        return a + days;
    }
    friend Date operator - (int days, const Date& a){
        return a - days;
    }

    friend Date operator + (float months, const Date& a){
        return a + months;
    }
    friend Date operator - (float months, const Date& a){
        return a - months;
    }

    friend Date operator + (long years, const Date& a){
        return a + years;
    }
    friend Date operator - (long years, const Date& a){
        return a - years;
    }

    friend ostream& operator << (ostream& os, const Date& t){
        os<<t.day/10<<t.day%10<<"."<<t.month/10<<t.month%10<<"."<<t.year;
        return os;
    }
    friend istream& operator >> (istream& is, Date& t){
        do{
            cout<<"DD MM YYYY: ";
            is>>t.day>>t.month>>t.year;
        }while(!t.valid());
        return is;
    }
};

#endif
