#include<iostream>
using namespace std;
int main(){
    int a,b,c,m;
    cin>>a>>b>>c;

    if(a>b){
        m =a;
        a=b;
        b=m;
        if(b>c){
            m=b;
            b=c;
            c=m;
            if(a>b){
                m=a;
                a=b;
                b=m;
            }
        }
    }
    else{
        if(b>c){
            m=b;
            b=c;
            c=m;
            if(a>b){
                m=a;
                a=b;
                b=m;

            }
        }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0; 

}