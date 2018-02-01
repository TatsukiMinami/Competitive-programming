#include<iostream>
using namespace std;

int main(){
    int x,y,i;
    while(1){
        cin>>x>>y;
        if(y==0 && x==0){
            break;
        }
        if(x>y){
            cout<<y<<" "<<x<<endl;
        }
        else {
            cout<<x<<" "<<y<<endl;
        }
        
        i++;
    }
    return 0;
}