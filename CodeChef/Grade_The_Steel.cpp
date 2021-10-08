// Code of the problem -> FLOW014
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        float hardness,Carbon_C,Tensile_St;
        cin>>hardness>>Carbon_C>>Tensile_St;

        if(hardness>50 && Carbon_C<0.7 && Tensile_St>5600){
            cout<<"10"<<endl;
        }

        else if(hardness>50 && Carbon_C<0.7){
            cout<<"9"<<endl;
        }

        else if(Carbon_C<0.7 && Tensile_St>5600){
            cout<<"8"<<endl;
        }

        else if(hardness>50 && Tensile_St>5600){
            cout<<"7"<<endl;
        }

        else if(Carbon_C<0.7|| hardness>50 || Tensile_St>5600){
            cout<<"6"<<endl;
        }

        else{
            cout<<"5"<<endl;
        }
    }

    return 0;
}
