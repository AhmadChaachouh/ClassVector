#include <iostream>
using namespace std;

// header file
class Vector{

    public :

    Vector (int = 1);
    Vector(double*,int);
    Vector(const Vector&);
    ~Vector();
    
    Vector& operator=(const Vector&);

    double& operator[](int i);
    const double operator[](double i) const ;

    void push_back(double);
    double pop_back();

    private :

    int size ; //nb of elements
    int capacity; // nb of allocated bytes
    double *ptr; // ptr towards first elements
    friend ostream& operator<<(ostream&, const Vector&);


};

Vector operator+(Vector v1 , const Vector& v2);

int main(){
    return 0;
}