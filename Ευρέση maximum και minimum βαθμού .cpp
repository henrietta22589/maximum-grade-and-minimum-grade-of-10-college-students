/******************************************************************************
this is a program, which reads the grades of 10 college students for 3 courses, its student
besides of providing the grade, he/she will be asked to provide their last name
as well. The program will calculate the average grade of each student and
will inform us about the maximum average and the minimum.
*******************************************************************************/
#include <iostream>
/*Χρησιμοποιείται αυτή η κεφαλίδα για να μπορούμε να χρησιμοποιήσουμε την setprecision()*/
#include <iomanip>
/*Χρησιμοποιείται αυτή η κεφαλίδα για να μπορούμε να χρησιμοποιήσουμε string*/
#include <string>
using namespace std;
int main()
{
    float grade,average,sum,maximum,minimum;
    string last_name;
    int i,j;
    for(i=0;i<10;i++)
    {
        sum=0;/*Γίνεται μία αρχικοποίηση,του sum*/
        cout<<"Give me your last name";
        cout<<endl;
        cin>>last_name;
           
      for(j=0;j<3;j++)
        {
            cout<<"Give me your grade";
            cout<<endl;
            cin>>grade;
            sum=sum+grade;
            average=(sum/3);
       }
           /*Ευρέση μέγιστου μέσου όρου και ελάχιστου*/
          maximum=9;/*Γίνεται μία αρχικοποίηση,του maximum και του minimum*/
          minimum=6;
            if(average>maximum)
            {
                maximum=average;
                cout<<"Τον μέγιστό μέσο όρο τον έχει ο φοίτητης: "<<last_name<<endl;
                cout<<"O μέγιστος μέσος όρος είναι: "<<maximum<<endl;
            }
            if(average<minimum)
            {
                minimum=average;
                cout<<"Τον Ελάχιστο μέσο όρο τον έχει ο φοίτητης: "<<last_name<<endl;
                cout<<"O ελάχιστος μέσος όρος είναι: "<<minimum<<endl;
            }
    
return 0;
}