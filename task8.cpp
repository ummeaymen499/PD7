#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int cargocount;
    cout <<"Enter the count of cargo for transportation: ";
    cin >> cargocount;
    float tonnage;
    float minibus=0;
    float truck=0;
    float train=0;
    for (int i=1;i<=cargocount;i++)
    {
        cout <<"Enter the tonnage of cargo " << i << ": ";
        cin >> tonnage;
        if(tonnage <= 3)
            minibus += tonnage;
        if(tonnage > 3 && tonnage <= 11)
            truck += tonnage;
        if(tonnage > 11)
            train += tonnage;
    }
   int finalprice=minibus+truck+train;
   float  miniBuspercentage=(minibus / finalprice) * 100;
   float truckpercentage=(truck / finalprice) * 100;
   float trainpercentage=(train / finalprice) * 100;
   float averageprice=(minibus*200+truck*175+train*120)/finalprice;
   cout<<fixed<<setprecision(2)<<averageprice<<endl;
   cout<<fixed<<setprecision(2)<<miniBuspercentage<<"%"<<endl;
   cout<<fixed<<setprecision(2)<<truckpercentage<<"%"<<endl;
   cout<<fixed<<setprecision(2)<<trainpercentage<<"%";
}
