#include<iostream>
using namespace std;

class infection{

char name[20];
char state[20];
char city[20];
int age;
char ans1[20];
char ans2[20];
char ans3[20];
char ans4[20];
int ans5;
char ans6[20];
char ans7[20];




public:
    void Getdata(){

cout<<"Name\t:- ";
cin>>name;
cout<<"State\t:- ";
cin>>state;
cout<<"City\t:- ";
cin>>city;

cout<<"Age\t:- ";
cin>>age;


}
void check()
{
    if(age>=13){

        cout<<"\t\t\t\t PLEASE ANSWER THE FOLLOWING QUESTION CORRECTLY\n";
        cout<<"\n\n\tDo you have any travel history across India between October to November?(yes or no)\nAns:- ";
        cin>>ans1;
        cout<<"\n\n\tDo you came in contact with any covid patient?(yes or no)\nAns:- ";
        cin>>ans2;
        cout<<"\n\n\tIs there any covid patient in the range of 1Km?(yes or no)\nAns:- ";
        cin>>ans3;
        cout<<"\n\n\tAre You suffering of any kind of diseases like CANCER , DIABETES ,LUNGS diseases?(yes or no)\nAns:- ";
        cin>>ans4;
        cout<<"\n\n\tPlease let us know your body  temperature(in C)\nAns:- ";
        cin>>ans5;
        cout<<"\n\n\tIf you are suffering from any one write (yes or no)\n\t 1. Dry cough \n\t 2.Shortness of breath \n\t 3.Headache \n\t 4.Chest pain \n\t 5.fatigue \n\t 6.Diarrhea \nAns:- ";
        cin>>ans6;
        cout<<"\n\n\tAre you suffering from BP or suger problem?(yes or no)\nAns:- ";
        cin>>ans7;
        }



}
void result(){


if (ans1=="yes" || ans2 =="yes" || ans3 == "yes" || ans6 =="yes" || ans5>38){

    cout<<"\n\n\t\t\t ALERT! YOU ARE IN RED ZONE \n";
    cout<<"\n\t\n1Outside the containment zones, certain activities are prohibited in addition to those prohibited throughout the country.\n2)  Plying of cycle rickshwas and autorickshaws.\n3)  Running of taxis and cab aggregators.\n4)  Intra-district and inter-district plying of buses.\n5)  Barber shops, spas and saloons. \n6) Movement of individuals and vehicles is allowed only for permitted activities, with a maximum of 2 persons (besides the driver) in four wheeler vehicles, and with no pillion rider in the case of two wheelers.\n5)  Industrial establishments in urban areas, viz SEZs, Export Oriented Units, industrial estates and industrial townships with access controls have been permitted. The other industrial activities permitted are manufacturing units of essential goods, including drugs, pharmaceuticals, medical devices, their raw material and intermediates; production units, which require continuous process, and their supply chain \n6)  Manufacturing of IT hardware; jute industry with staggered shifts and social distancing; and, manufacturing units of packaging material";

  cout<<"\n\n\t\t\t STAY HOME STAY SAFE \n";



}
else if(ans3=="yes" ||ans4=="yes"){

        cout<<"\n\n\n\t HEY! YOU ARE IN ORANGE ZONE \n";
   cout<<"\n\t The areas with a limited number of cases in the past and with no surge in positive cases recently would be included under the orange zone. \n1)  Only restricted activities such as limited public transport and farm product harvesting are expected to be allowed in the coronavirus orange zone.\n2)  Micro Small and Medium Enterprises (MSMEs) engaged in manufacturing of essential items like wheat four (ATTA), pulse (DAL) and edible oils would be allowed to function freely with strict maintenance of social distancing.\n3)  A hotspot district can be turned to Orange Zone when no cases are reported in the last 14 days./n";
        cout<<"\n\n\t\t\t STAY HOME STAY SAFE \n";

}

else{
        cout<<"\n\n\t\t\t  CONGRATS! YOU ARE IN GREEN ZONE \n ";
        cout<<"\n\n\n\t  All activities are permitted except the limited number of activities which are prohibited throughout the country, irrespective of the Zone.\n1) Buses can operate with upto 50% seating capacity and bus depots can operate with up to 50% capacity.\n2) All goods traffic is to be permitted. \n3)  No State/ UT shall stop the movement of cargo for cross land-border trade under Treaties with neighbouring countries.\n4)  No separate pass of any sort is needed for such movement, which is essential for maintaining the supply chain of goods and services across the country during the lockdown period.\n5)  All other activities will be permitted, which are not specifically prohibited, or which are permitted with restrictions in the various Zones, under these guidelines.\n6)  However, States/UTs, based on their assessment of situation, and with the primary objective of keeping the spread of COVID-19 in check, may allow only select activities from out of the permitted activities, with such restrictions as felt necessary.\n7)  No separate/fresh permissions will be required from authorities for activities already permitted to operate under the guidelines on Lockdown measures up to May 3, 2020.";
        cout<<"\n\n\t\t\t STAY HOME STAY SAFE \n";

}

}




};
int main()
{
    cout<<"\t\t\t\t**********INFECTION RATE TEST COVID-19**********"<<endl;
    cout<<"\n";
    cout<<"\t\t\t\tPLEASE ENTER YOUR BASIC INFORMATION"<<endl;
   infection i;
    i.Getdata();
    i.check();
    cout<<"\t\t\t\t PLEASE WAIT WE ARE ANALYSING DATA....... "<<endl;
    i.result();

   return 0;

}









