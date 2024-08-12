// Home work 3 template

// 以下程式片段為鏈結串列多載運算子的範例。
// 請注意其並非環狀串列，而作業要求是要環狀串列
// 可以參考並更改成環狀的版本。

#include <iostream>
#include <math.h>   // for abs()
using namespace std;

struct Term{
    float coef;
    int exp;
    struct Term* next;
};

class Polynomial{
friend ostream& operator<<(ostream& os, Polynomial& p); 
friend istream& operator>>(istream& is, Polynomial& p); 
private:
    struct Term *first;
public:
    Polynomial(){ first=NULL; }
    Polynomial(const Polynomial& B);
    ~Polynomial();
    Polynomial& operator=(const Polynomial& B);
    Polynomial& operator+(const Polynomial& B);
    Polynomial& operator-(const Polynomial& B);
    Polynomial& operator*(const Polynomial& B);
    float Evaluate(const float x)const;
    void newTerm(float coef, int exp);
};

ostream& operator<<(ostream& os, Polynomial& p){
    Term* current=p.first;
    while(current!=NULL){ // sample example, need to think how to deal with negative coefficient.
        os<<abs(current->coef)<<"x^"<<current->exp<<"+"; // "+" will show up in the end of line, need to be fixed.
    }
    return os; 
}
istream& operator>>(istream& is, Polynomial& p){
    float c;
    int e;
    while(is>>c>>e, c||e){
        p.newTerm(c, e);
    }
    return is;
}
Polynomial& Polynomial::operator+(const Polynomial& B){
    Term *i=this->first, *j=B.first;
    Polynomial result;
    while(i!=NULL&&j!=NULL){
        if(i->exp==j->exp){
            result.newTerm(i->coef+j->coef, i->exp);
            i = i->next;
            j = j->next;
        }else if(i->exp>j->exp){
            result.newTerm(i->coef, i->exp);
            i = i->next;
        }else{
            result.newTerm(j->coef, j->exp);
            j = j->next;
        }
    }
    while(i!=NULL){
        result.newTerm(i->coef, i->exp);
        i = i->next;
    }
    while(j!=NULL){
        result.newTerm(j->coef, j->exp);
        j = j->next;
    }
    return result;
}