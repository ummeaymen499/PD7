#include<iostream>
using namespace std;
main()
{
    int day;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>day;
    int patientcount;
    int treatedpatient=0;
    int untreatedpatient=0;
    int doc=7;
    for (int i=1;i<=day;i++)
    {
        if((i % 3==0) && untreatedpatient > treatedpatient)
            doc += 1;
        cout<<"Number of patients who visited hospital on Day " << i << ": ";
        cin >> patientcount;
        if(patientcount<=doc)
        {
            treatedpatient+=patientcount;
            untreatedpatient+=0;
        }
        else if(patientcount>doc)
        {
            untreatedpatient+=(patientcount-doc);
            treatedpatient+=doc;
        }
    }    
    cout<<"Treated Patients: "<<treatedpatient<<endl;
    cout<<"Untreated Patients: "<<untreatedpatient;      
}
