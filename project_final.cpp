// ELECTRICITY BILL CALCULATOR


   /* BILL SLABS
    UNITS RATE AMOUNT:-
    FIRST 50 UNITS   = Rs 3.0
    NEXT 150 UNITS   = Rs 4.8
    NEXT 200 UNITS   = Rs 5.8
    NEXT UPTO UNITS  = Rs 6.2
    */

   /*
   FIXED CHARGES = Rs 100.00
   */

#include<iostream>
using namespace std;
int main()



{   string address;
    cout<<" BILL OF SUPPLY FOR ELECTRICITY (TPNODL)" <<endl;
    cout<<"***************" <<endl;
    cout<<endl;
    cout<<"ADDRESS :-"<<endl;
    cin>> address;

    cout<<" UNITS RATE AMOUNT:- "<<endl;
    cout<<"FIRST 50 UNITS   = Rs 3.0"<<endl;
    cout<<"NEXT 150 UNITS   = Rs 4.8"<<endl;
    cout<<"NEXT 200 UNITS   = Rs 5.8"<<endl;
    cout<<"NEXT UPTO UNITS  = Rs 6.2"<<endl;
    int meterno;
    cout<<"ENTER THE METER NUMBER : ";
    cin>> meterno;
    string Cusername ;
    cout<<"ENTER THE CONSUMER USERNAME : ";
    cin>> Cusername ;

    float unit,EngChr,total_bill;
    int fixchr = 100;
    cout<<"ENTER THE TOTAL UNITS CONSUMED : ";
    cin>>unit;
    if(unit<=50)
    {
        EngChr=3.0*unit;
    }
    else if( unit>50 && unit<=200)
    {
        EngChr=(3.0*50)+(4.8*(unit-50));
    }
    else if( unit>200 && unit<=400)
    {
        EngChr=(3.0*50)+(4.8*150)+(5.8*(unit-200));
    }
    else if( unit>400)
    {
        EngChr=(3.0*50)+(4.8*150)+(5.8*200)+(6.2*(unit-400));
    }

    total_bill= EngChr + fixchr  ;
    cout<<"YOUR ELECTRICITY BILL IS " << total_bill;
    return 0;

}