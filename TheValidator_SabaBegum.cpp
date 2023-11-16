/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    bool r[8]={0,0,0,0,1,1,1,1};
    bool a[8]={1,0,1,0,1,0,1,0};
    bool ht[8]={1,1,0,0,1,1,0,0};
    bool e[8]={0,1,0,1,0,1,0,1};
    bool prop;
    
    for(int r=0;r<=1;r++){
        for(int a=0;a<=1;a++){
            for(int ht=0;ht<=1;ht++){
                for(int e=0;e<=1;e++){
                    if(((!r||a)==1)&&((!a||ht)==1)&&((!ht||e)==1)&&((!e||r)==1)){
                        cout<<"It is Valid for "<<endl;
                        cout<<" Rocket--> "<<r<<" Astronut--> "<<a<<" Highly Trained--> "<<ht<<" Educated--> "<<e<<endl;
                    }
                    else if(((!r||a)==1)&&((!a||ht)==1)&&((!ht||e)==1)&&((!e||r)==0)){
                        cout<<"it is invalid for "<<endl;
                        cout<<" Rocket--> "<<r<<" Astronut--> "<<a<<" Highly Trained--> "<<ht<<" Educated--> "<<e<<endl;;
                    }
                }
            }
        }
    }

    return 0;
}