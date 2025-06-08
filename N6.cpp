#include<iostream>
using namespace std;

int main() {
    int tt;
    float ca, cu;
    cout<<"ingrese el credito actual de la tarjeta: "<<endl;
    cin>>ca;
    cout<<"ingresse el tipo de tarjeta"<<endl;
    cin>>tt;
    if (tt == 1){
        cu=ca+(ca*0.25);
    }
    else if (tt == 2){
        cu=ca+(ca*0.35);
    }
    else if (tt == 3){
        cu=ca+(ca*0.40);
    }
    else {
        cu=ca+(ca*0.50);
	}
    cout<<"el nuevo credito es: "<<cu<<endl;

    return 0;
}
