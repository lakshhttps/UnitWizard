#include<iostream>
using namespace std;
int main(){
    int flag=1;
    while(flag){
    double cm=0,m=0,km=0,f=0,k=0,c=0,g=0,kg=0,mg=0,gmg=0,mgg=0,gkg=0,kgg=0,kmm=0,kcm=0,mkm=0,mcm=0,cmkm=0,cmm=0,kgmg=0,mgkg=0,ck=0,cf=0,fk=0,fc=0,kc=0,kf=0,kb=0,mb=0,gb=0,kbgb=0,kbmb=0,gbmb=0,gbkb=0,mbgb=0,mbkb=0;
    cout<<"Welcome to Unit Convertor\n";
    cout<<"Enter Conversion Code : ";
    int pq;
    cin>>pq;
    cout<<"Enter unit code 1 : ";
    int u1;
    cin>>u1; 
    cout<<"Enter unit code 2 : ";
    int u2;
    cin>>u2;
    switch(pq){
        case 1 :
        cout<<"Length Conversion\n";
        switch(u1){
            case 1:
            cout<<"Enter value in Kilometers : ";
            cin>>km;
            switch(u2){
                case 1 :
                cout<<"Both units cannot be same";
                break;
                case 2 :
                 kmm=km*1000;
                cout<<"Value in Meters : "<<kmm;
                break;
                case 3 :
                kcm=km*100000;
                cout<<"Value in Centimeters : "<<kcm;
                break;
                default :
                cout<<"INVALID CODE\n";
            }
            break;
            case 2 :
            cout<<"Enter value in Meters : ";
            cin>>m;
            switch(u2){
                case 1 :
                mkm=m/1000;
                cout<<"Value in Kilometers : "<<mkm;
                break;
                case 2 :
                cout<<"Both units cannot be same\n";
                break;
                case 3 :
                mcm=m*100;
                cout<<"Value in Centimeters : "<<mcm;
                break;
                default :
                cout<<"INVALID CODE\n";
            }
            break;
            case 3:
            cout<<"Enter value in Centimeters : ";
            cin>>cm;
            switch(u2){
                case 1 :
                cmkm=cm/100000;
                cout<<"Value in Kilometers : "<<cmkm;
                break;
                case 2 :
                cmm=cm/100;
                cout<<"Value in Meters : "<<cmm;
                break;
                case 3 :
                cout<<"Both units cannot be same\n";
                break;
                default :
                cout<<"INVALID CODE\n";
            }
            break;
            default :
                cout<<"INVALID CODE\n";    
        }
        break;
         case 2 :
        cout<<"Mass Conversion\n";
        switch(u1){
            case 1:
            cout<<"Enter value in Kilograms : ";
            cin>>kg;
            switch(u2){
                case 1 :
                cout<<"Both units cannot be same";
                break;
                case 2 :
                kgg=kg*1000;
                cout<<"Value in Grams : "<<kgg;
                break;
                case 3 :
                kgmg=kg*1000000;
                cout<<"Value in Milligrams : "<<kgmg;
                break;
                default :
                cout<<"INVALID CODE\n";
            }
            break;
            case 2 :
            cout<<"Enter value in Grams : ";
            cin>>g;
            switch(u2){
                case 1 :
                gkg=g/1000;
                cout<<"Value in Kilograms : "<<gkg;
                break;
                case 2 :
                cout<<"Both units cannot be same\n";
                break;
                case 3 :
                gmg=g*1000;
                cout<<"Value in Milligrams : "<<gmg;
                break;
                default :
                cout<<"INVALID CODE\n";
            }
            break;
            case 3:
            cout<<"Enter value in Milligrams : ";
            cin>>mg;
            switch(u2){
                case 1 :
                mgkg=mg/1000000;
                cout<<"Value in Kilograms : "<<mgkg;
                break;
                case 2 :
                mgg=mg/1000;
                cout<<"Value in Meters : "<<mgg;
                break;
                case 3 :
                cout<<"Both units cannot be same\n";
                break;
                default :
                cout<<"INVALID CODE\n";
            }
            break;
            default :
                cout<<"INVALID CODE\n";    
        }
        break;
         case 3 :
        cout<<"Temprature Conversion\n";
        switch(u1){
            case 1:
            cout<<"Enter value in Celsius : ";
            cin>>c;
            switch(u2){
                case 1 :
                cout<<"Both units cannot be same";
                break;
                case 2 :
                cf=(c*(9/5.0))+32;
                cout<<"Value in Fahrenheit : "<<cf;
                break;
                case 3 :
                ck=c+273.15;
                cout<<"Value in Kelvin : "<<ck;
                break;
                default :
                cout<<"INVALID CODE\n";
            }
            break;
            case 2 :
            cout<<"Enter value in Fahrenheit : ";
            cin>>f;
            switch(u2){
                case 1 :
                 fc=(f-32)*(5.0/9);
                cout<<"Value in Celsius : "<<fc;
                break;
                case 2 :
                cout<<"Both units cannot be same\n";
                break;
                case 3 :
                fk=(f-32)*(5/9.0)+273.15;
                cout<<"Value in Kelvin : "<<fk;
                break;
                default :
                cout<<"INVALID CODE\n";
            }
            break;
            case 3:
            cout<<"Enter value in Kelvin : ";
            cin>>k;
            switch(u2){
                case 1 :
                kc=k-273.15;
                cout<<"Value in Celsius : "<<kc;
                break;
                case 2 :
                kf=((k-273.15)*(9/5))+32;
                cout<<"Value in Fahrenheit : "<<kf;
                break;
                case 3 :
                cout<<"Both units cannot be same\n";
                break;
                default :
                cout<<"INVALID CODE\n";
            }
            break; 
            default :
                cout<<"INVALID CODE\n";   
        }
        break;
         case 4 :
        cout<<"Data Conversion\n";
        switch(u1){
            case 1:
            cout<<"Enter value in Kilobytes : ";
            cin>>kb;
            switch(u2){
                case 1 :
                cout<<"Both units cannot be same";
                break;
                case 2 :
                 kbmb=kb/1024;
                cout<<"Value in Megabytes : "<<kbmb;
                break;
                case 3 :
                kbgb=kb/(1024*1024);
                cout<<"Value in Gigabytes : "<<kbgb;
                break;
                default :
                cout<<"INVALID CODE\n";
            }
            break;
            case 2 :
            cout<<"Enter value in Megabytes : ";
            cin>>mb;
            switch(u2){
                case 1 :
                mbkb=mb*1024;
                cout<<"Value in Kilobytes : "<<mbkb;
                break;
                case 2 :
                cout<<"Both units cannot be same\n";
                break;
                case 3 :
                mbgb=mb/1024;
                cout<<"Value in Gigabytes : "<<mbgb;
                break;
                default :
                cout<<"INVALID CODE\n";
            }
            break;
            case 3:
            cout<<"Enter value in Gigabytes : ";
            cin>>gb;
            switch(u2){
                case 1 :
                gbkb=gb*(1024*1024);
                cout<<"Value in Kilobytes : "<<gbkb;
                break;
                case 2 :
                gbmb=gb*1024;
                cout<<"Value in Megabytes : "<<gbmb;
                break;
                case 3 :
                cout<<"Both units cannot be same\n";
                break;
                default :
                cout<<"INVALID CODE\n";
            }
            break;
            default :
                cout<<"INVALID CODE\n";    
        }
        break;
        default :
                cout<<"INVALID CODE\n";

    }
    cout<<"\nEnter 0 to Terminate & any other number to restart : ";
    cin>>flag;
    }
    return 0;
}
