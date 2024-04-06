#include<iostream>

using namespace std;
int main(){
    int quant;
    int choice;
    //Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodle=0, Qpaneers=0,Qchicken=0 ; 
    //food item sold
     int Srooms=0, Spasta=0, Sburger=0, Snoodle=0, Spaneers=0,Schicken=0; 
     //total process of item
     int Total_rooms=0, Total_pasta=0, Total_burger=0,Total_noodle=0, Total_paneers=0,Total_chicken=0;
cout<<"\n\t Quantity of item we have";
cout<<"\n Rooms avaliabe: " ;
cin>>Qrooms;
cout<<"\n Quantity of pasta : ";
cin>>Qpasta;
cout<<"\n Quantity of burgers : ";
cin>>Qburger;
cout<<"\n Quantity of noodle : ";
cin>>Qnoodle;
cout<<"\n Quantity of Paneers : ";
cin>>Qpaneers;
cout<<"\n Quantity of chicken-Roll : ";
cin>>Qchicken;

cout<<"\n\t\t\t plese select form the menu options";
cout<<"\n\n1)Rooms";
cout<<"\n2) Pasta";
cout<<"\n3) Burger";
cout<<"\n4) Noodle";
cout<<"\n5) Paneers";
cout<<"\n6) Chicken-roll";
cout<<"\n7) Information regarding sales and collection";
cout<<"\n8) Exit";


cout<<"\n\n Please Enter your Choice!";
cin>>choice;
switch(choice)
{
case 1: 
     cout<<"\n\n Enter the number of the rooms you want: "; 
     cin>>quant;
     if(Qrooms-Srooms >= quant){
        Srooms=Srooms+quant;
        Total_rooms= Total_rooms+quant*1500;
        cout<<"\n\n\t\t"<<quant<<"room/rooms have been allocated to you";
     }
     else
     {
        cout<<"\n\tOnly"<<Qrooms-Srooms<<"rooms have been remaining in hotal";
        break;

     }
     case 2: 
     cout<<"\n\n Enter the Pasta Quantity: "; 
     cin>>quant;
     if(Qpasta-Spasta >= quant){
        Spasta=Spasta+quant;
        Total_pasta= Total_pasta+quant*100;
        cout<<"\n\n\t\t"<<quant<<" pasta is order! ";
     }
     else
     {
        cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotal";
        break;

     }
     case 3:
      cout<<"\n\n Enter the Burgur Quantity: "; 
     cin>>quant;
     if(Qburger-Sburger >= quant){
        Sburger=Sburger+quant;
        Total_burger= Total_burger+quant*200;
        cout<<"\n\n\t\t"<<quant<<" burger is order! ";
     }
     else
     {
        cout<<"\n\tOnly"<<Qburger-Sburger<<"burger remaining in hotal";
        break;

     } 
    
      
     case 4: 
     cout<<"\n\n Enter the Noodle Quantity: "; 
     cin>>quant;
     if(Qnoodle-Snoodle >= quant){
        Snoodle=Snoodle+quant;
        Total_noodle= Total_noodle+quant*190;
        cout<<"\n\n\t\t"<<quant<<" noodle is order! ";
     }
     else
     {
        cout<<"\n\tOnly"<<Qnoodle-Snoodle<<"Noodle remaining in hotal";
        break;

     }
     case 5: 
     cout<<"\n\n Enter the paneers Quantity: "; 
     cin>>quant;
     if(Qpaneers-Spaneers >= quant){
        Spaneers=Spaneers+quant;
        Total_paneers= Total_paneers+quant*300;
        cout<<"\n\n\t\t"<<quant<<" chicken is order! ";
     }
     else
     {
        cout<<"\n\tOnly"<<Qpaneers-Spaneers<<"paneers remaining in hotal";
        break;

     }
     
      case 6: 
     cout<<"\n\n Enter the chicken Quantity: "; 
     cin>>quant;
     if(Qchicken-Schicken >= quant){
        Schicken=Schicken+quant;
        Total_chicken= Total_chicken+quant*500;
        cout<<"\n\n\t\t"<<quant<<" chicken is order! ";
     }
     else
     {
        cout<<"\n\tOnly"<<Qchicken-Schicken<<"chicken remaining in hotal";
        break;

     }
     case 7:
      cout<<"\n\t\tDetail of sales and collection ";
      cout<<"\n\n Number of rooms we had: "<<Qrooms;
      cout<<"\n\n Number of rooms we gave for rent"<<Srooms;
      cout<<"\n\n Remaining Rooms: "<<Qrooms-Srooms;
      cout<<"\n\n Total room callection of the day : "<<Total_rooms;

      cout<<"\n\n Number of Pasta we had: "<<Qpasta;
      cout<<"\n\n Number of Pasta we have sold "<<Qpasta;
      cout<<"\n\n Remaining Pasta: "<<Qpasta-Spasta;
      cout<<"\n\n Total Pasta callection of the day : "<<Total_pasta;

      cout<<"\n\n Number of Burgur we had: "<<Qburger;
      cout<<"\n\n Number of Burgur we have sold"<<Sburger;
      cout<<"\n\n Remaining Burgur: "<<Qburger-Sburger;
      cout<<"\n\n Total Burgur callection of the day : "<<Total_burger;

      cout<<"\n\n Number of  Noodle we had: "<<Qnoodle;
      cout<<"\n\n Number of  Noodle we have sold"<<Snoodle;
      cout<<"\n\n Remaining  Noodle: "<<Qnoodle-Snoodle;
      cout<<"\n\n Total  Noodle callection of the day : "<<Total_noodle;

      cout<<"\n\n Number of Paneer we had: "<<Qpaneers;
      cout<<"\n\n Number of Paneer we have sold"<<Spaneers;
      cout<<"\n\n Remaining Paneer: "<<Qpaneers-Spaneers;
      cout<<"\n\n Total Paneer callection of the day : "<<Total_paneers;

      cout<<"\n\n Number of  Chicken-roll we had: "<<Qchicken;
      cout<<"\n\n Number of Chicken-roll we have sold"<<Schicken;
      cout<<"\n\n Remaining Chicken-roll: "<<Qchicken-Schicken;
      cout<<"\n\n Total Chicken-roll callection of the day : "<<Total_chicken;

      case 8:
      exit(0);
      default:
      cout<<"\n Plese select the number Mentioned Above!";
}


}