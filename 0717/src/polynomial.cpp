#include <math.h>

#include <iostream>
using namespace std;

class Polynomial;
class Term {
    friend Polynomial;

   private:
    float coef;
    int exp;
};

class Polynomial {
   private:
    int capacity;

   public:
    int terms;
    Term *termsArray;
    Polynomial();
    Polynomial Add(Polynomial b);
    Polynomial Mult(Polynomial b);
    float Eval(float f);
    void newTerm(float coef, int exp);
    void output();
};

int main() {
    int n, m;
    while (cin >> n >> m) {
        Polynomial p1, p2;
        int c, t;
        while (n--) {
            cin >> c >> t;
            p1.newTerm(c, t);
        }
        while (m--) {
            cin >> c >> t;
            p2.newTerm(c, t);
        }
        Polynomial result = p1.Add(p2);
        result.output();
    }
    return 0;
}

Polynomial::Polynomial() : capacity(2), terms(0) { termsArray = new Term[capacity]; }
void Polynomial::newTerm(float coef, int exp) {
    if (capacity == terms) {
        capacity *= 2;
        Term *temp = new Term[capacity];
        copy(termsArray, termsArray + terms, temp);
        delete[] termsArray;
        termsArray = temp;
    }
    termsArray[terms].coef = coef;
    termsArray[terms++].exp = exp;
}

Polynomial Polynomial::Add(Polynomial b) {
    int apos = 0, bpos = 0;
    Polynomial c;
    while (apos < terms && bpos < b.terms) {
        if (termsArray[apos].exp == b.termsArray[bpos].exp) {
            float tmp = termsArray[apos++].coef + b.termsArray[bpos++].coef;
            if (tmp) c.newTerm(tmp, termsArray[apos - 1].exp);
        } else if (termsArray[apos].exp > b.termsArray[bpos].exp) {
            c.newTerm(termsArray[apos].coef, termsArray[apos].exp);
            apos++;
        } else {
            c.newTerm(b.termsArray[bpos].coef, b.termsArray[bpos].exp);
            bpos++;
        }
    }
    for (int i = apos; i < terms; i++) c.newTerm(termsArray[i].coef, termsArray[i].exp);
    for (int i = bpos; i < b.terms; i++) c.newTerm(b.termsArray[i].coef, b.termsArray[i].exp);
    return c;
}

Polynomial Polynomial::Mult(Polynomial b) {
    Polynomial c;
    for (int apos = 0; apos < terms; apos++) {
        for (int bpos = 0; bpos < b.terms; bpos++) {
            int Exp = termsArray[apos].exp + b.termsArray[bpos].exp, cpos = 0;
            bool flag = true;
            while (flag && cpos < c.terms) {
                if (c.termsArray[cpos].exp == Exp) {
                    flag = false;
                    c.termsArray[cpos].coef += termsArray[apos].coef * b.termsArray[bpos].coef;
                }
                cpos++;
            }
            if (flag) c.newTerm(termsArray[apos].coef * b.termsArray[bpos].coef, Exp);
        }
    }
    return c;
}

float Polynomial::Eval(float f) {
    float ans;
    for (int i = 0; i < terms; i++) {
        ans += termsArray[i].coef * pow(f, termsArray[i].exp);
    }
    return ans;
}

void Polynomial::output() {
    bool flag = true;
    for (int i = 0; i < terms; i++) {
        flag = false;
        if (termsArray[i].exp == 0) {
            cout << termsArray[i].coef;
        } else if (i == terms - 1) {
            if (termsArray[i].exp == 1)
                cout << termsArray[i].coef << "x";
            else
                cout << termsArray[i].coef << "x^" << termsArray[i].exp;
        } else {
            if (termsArray[i].exp == 1)
                cout << termsArray[i].coef << "x+";
            else
                cout << termsArray[i].coef << "x^" << termsArray[i].exp << "+";
        }
    }
    if (flag) cout << "0";
    cout << "\n";
}