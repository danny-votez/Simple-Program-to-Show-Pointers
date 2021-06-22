// This lesson shows use of pointers based on Class
// Class forms one of the user-defined data types
// Other user-defined data types in C++ are Array, Union, and Structure
// We depict how pointers can modify variables
#include<iostream>
using namespace std;
class Cup{                      // Note, in this case, we use class. Had we used structure (Struct)
                                // For structure accessiblity is assumed as public
    private: int x,*p;
    public: void getShow(){
        p=&x;   // in this case, p points to x
        x = 1000;        // In this case, the value of variable x is 1000
                        // The aim is to apply pointers in modifying the variable x
        cout<<"Enter value x to modify:"<<endl;
        cin>>*p;
        cout<<"The value of *p = "<<*p<<" and value of x = "<<x<<endl;
        cout<<"Thank you for listening and learning with Us.";
    }
};
int main(){
    Cup c;
    c.getShow();
    return 0;
}