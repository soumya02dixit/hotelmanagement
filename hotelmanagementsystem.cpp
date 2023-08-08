#include<iostream>
using namespace std;
int main()
{
    int quantity;
    int choice;
    int Qrooms=0 , Qpizza=0 , Qburger=0 , Qpasta=0 , Qnoodleswithmanchurian = 0 ,Qbiriyani=0 , Qkadhipakodi=0 , Qpavbhaji=0 , Qpaneerthal=0 , Qrasmalayi=0 , Qlemonjuice=0;
    int Srooms=0 , Spizza=0 , Sburger=0 , Spasta=0 , Snoodleswithmanchurian = 0 ,Sbiriyani=0 , Skadhipakodi=0 , Spavbhaji=0 , Spaneerthal=0 , Srasmalayi=0 , Slemonjuice=0;
    int T_rooms=0 , T_pizza=0 , T_burger=0 , T_pasta=0 , T_noodleswithmanchurian = 0 ,T_biriyani=0 , T_kadhipakodi=0 , T_pavbhaji=0 , T_paneerthal=0 , T_rasmalayi=0 , T_lemonjuice=0;

    cout<<"\n\t The quantity of items we have in our hotel are given below";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n quantity of pizza available: ";
    cin>>Qpizza;
    cout<<"\n quantity of burger available: ";
    cin>>Qburger;
    cout<<"\n quantity of pasta available: ";
    cin>>Qpasta;
    cout<<"\n quantity of noodlewithmanchurian available: ";
    cin>>Qnoodleswithmanchurian;
    cout<<"\n quantity of biriyani available: ";
    cin>>Qbiriyani;
    cout<<"\n quantity of kadhipakodi available: ";
    cin>>Qkadhipakodi;
    cout<<"\n quantity of pavbhaji available: ";
    cin>>Qpavbhaji;
    cout<<"\n quantity of paneerthal available: ";
    cin>>Qpaneerthal;
    cout<<"\n quantity of rasmalayi available: ";
    cin>>Qrasmalayi;
    cout<<"\n quantity of lemon juice available: ";
    cin>>Qlemonjuice;
    m:
    cout<<"\n\t\t\t Please select from the given menu ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) pizza";
    cout<<"\n3) burger";
    cout<<"\n4) pasta";
    cout<<"\n5) noodle with manchurian";
    cout<<"\n6) biriyani";
    cout<<"\n7) kadhipakodi";
    cout<<"\n8) pavbhaji";
    cout<<"\n9) paneerthal";
    cout<<"\n10) rasmalayi";
    cout<<"\n11) lemon juice";
    cout<<"\n12) information regarding sales and collection(*owner specific*)";
    cout<<"\n13) exit";

    cout<<"\n\n Please enter your choice from the menu :) ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"\n\nEnter the number of rooms you want: ";
            cin>>quantity;
            if(Qrooms-Srooms>=quantity)
            {
                Srooms = Srooms+quantity;
                T_rooms = T_rooms+(quantity*1200);
                cout<<"\n\n\t\t"<<quantity<<"room/rooms have been alloted to you!";
            }
            else
                cout<<"\n\tOnly"<<Qrooms-Srooms<<"remaining in the hotel!";
                break;
         case 2:
            cout<<"\n\nEnter the number of pizza you want: ";
            cin>>quantity;
            if(Qpizza-Spizza>=quantity)
            {
                Spizza = Spizza+quantity;
                T_pizza = T_pizza+(quantity*140);
                cout<<"\n\n\t\t"<<quantity<<"pizza have been ordered successfully!";
            }
            else
                cout<<"\n\tOnly"<<Qpizza-Spizza<<"remaining in the hotel!";
                break;

          case 3:
            cout<<"\n\nEnter the number of burger you want: ";
            cin>>quantity;
            if(Qburger-Sburger>=quantity)
            {
                Sburger = Sburger+quantity;
                T_burger = T_burger+(quantity*250);
                cout<<"\n\n\t\t"<<quantity<<"burger have been ordered successfully !";
            }
            else
                cout<<"\n\tOnly"<<Qburger-Sburger<<"remaining in the hotel!";
                break;

          case 4:
            cout<<"\n\nEnter the number of pasta you want: ";
            cin>>quantity;
            if(Qpasta-Spasta>=quantity)
            {
                Spasta = Spasta+quantity;
                T_pasta = T_pasta+(quantity*160);
                cout<<"\n\n\t\t"<<quantity<<"pasta have been ordered successfully !";
            }
            else
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"remaining in the hotel!";
                break;

          case 5:
            cout<<"\n\nEnter the number of noodle with manchurian you want: ";
            cin>>quantity;
            if(Qnoodleswithmanchurian-Snoodleswithmanchurian>=quantity)
            {
                Snoodleswithmanchurian = Snoodleswithmanchurian+quantity;
                T_noodleswithmanchurian = T_noodleswithmanchurian+(quantity*300);
                cout<<"\n\n\t\t"<<quantity<<"noodles with manchurian have been ordered successfully !";
            }
            else
                cout<<"\n\tOnly"<<Qnoodleswithmanchurian-Snoodleswithmanchurian<<"remaining in the hotel!";
                break;

          case 6:
            cout<<"\n\nEnter the number of biriyani you want: ";
            cin>>quantity;
            if(Qbiriyani-Sbiriyani>=quantity)
            {
                Sbiriyani = Sbiriyani+quantity;
                T_biriyani = T_biriyani+(quantity*240);
                cout<<"\n\n\t\t"<<quantity<<"biriyani have been ordered successfully !";
            }
            else
                cout<<"\n\tOnly"<<Qbiriyani-Sbiriyani<<"remaining in the hotel!";
                break;

          case 7:
            cout<<"\n\nEnter the number of kadhipakodi you want: ";
            cin>>quantity;
            if(Qkadhipakodi-Skadhipakodi>=quantity)
            {
                Skadhipakodi = Skadhipakodi+quantity;
                T_kadhipakodi = T_kadhipakodi+(quantity*320);
                cout<<"\n\n\t\t"<<quantity<<"kadhipakodi have been ordered successfully !";
            }
            else
                cout<<"\n\tOnly"<<Qkadhipakodi-Skadhipakodi<<"remaining in the hotel!";
                break;

         case 8:
            cout<<"\n\nEnter the number of pavbhaji you want: ";
            cin>>quantity;
            if(Qpavbhaji-Spavbhaji>=quantity)
            {
                Spavbhaji = Spavbhaji+quantity;
                T_pavbhaji = T_pavbhaji+(quantity*120);
                cout<<"\n\n\t\t"<<quantity<<" pavbhaji have been ordered successfully !";
            }
            else
                cout<<"\n\tOnly"<<Qpavbhaji-Spavbhaji<<"remaining in the hotel!";
                break;


         case 9:
            cout<<"\n\nEnter the number of paneerthal you want: ";
            cin>>quantity;
            if(Qpaneerthal-Spaneerthal>=quantity)
            {
                Spaneerthal = Spaneerthal+quantity;
                T_paneerthal= T_paneerthal+(quantity*320);
                cout<<"\n\n\t\t"<<quantity<<"paneerthal have been ordered successfully !";
            }
            else
                cout<<"\n\tOnly"<<Qpaneerthal-Spaneerthal<<"remaining in the hotel!";
                break;

         case 10:
            cout<<"\n\nEnter the number of rasmalayi you want: ";
            cin>>quantity;
            if(Qrasmalayi-Srasmalayi>=quantity)
            {
                Srasmalayi = Srasmalayi+quantity;
                T_rasmalayi = T_rasmalayi+(quantity*60);
                cout<<"\n\n\t\t"<<quantity<<"rasmalayi have been ordered successfully !";
            }
            else
                cout<<"\n\tOnly"<<Qrasmalayi-Srasmalayi<<"remaining in the hotel!";
                break;


          case 11:
            cout<<"\n\nEnter the number of lemon juice you want: ";
            cin>>quantity;
            if(Qlemonjuice-Slemonjuice>=quantity)
            {
                Slemonjuice = Slemonjuice+quantity;
                T_lemonjuice = T_lemonjuice+(quantity*40);
                cout<<"\n\n\t\t"<<quantity<<"lemon juice have been ordered successfully !";
            }
            else
                cout<<"\n\tOnly"<<Qlemonjuice-Slemonjuice<<"remaining in the hotel!";
                break;

          case 12:
            cout<<"\n\nSales and collection information: ";
            cout<<"\n\nNumber of rooms we had: "<<Qrooms;
            cout<<"\n\nNumber of rooms booked: "<<Srooms;
            cout<<"\n\nRooms vacant: "<<Qrooms-Srooms;
            cout<<"\n\nTotal rooms collections for the day: "<<T_rooms;


            cout<<"\n\nNumber of pizza we had: "<<Qpizza;
            cout<<"\n\nNumber of pizza sold: "<<Spizza;
            cout<<"\n\npizza left: "<<Qpizza-Spizza;
            cout<<"\n\nTotal pizza collections for the day: "<<T_pizza;


            cout<<"\n\nNumber of burger we had: "<<Qburger;
            cout<<"\n\nNumber of burger sold: "<<Sburger;
            cout<<"\n\nburgers left: "<<Qburger-Sburger;
            cout<<"\n\nTotal burger collections for the day: "<<T_burger;

            cout<<"\n\nNumber of pasta we had: "<<Qpasta;
            cout<<"\n\nNumber of pasta sold: "<<Spasta;
            cout<<"\n\npasta left: "<<Qpasta-Spasta;
            cout<<"\n\nTotal pasta collections for the day: "<<T_pasta;

            cout<<"\n\nNumber of noodles with manchurian we had: "<<Qnoodleswithmanchurian;
            cout<<"\n\nNumber of noodles with manchurian sold: "<<Snoodleswithmanchurian;
            cout<<"\n\nnoodles with manchurian left: "<<Qnoodleswithmanchurian-Snoodleswithmanchurian;
            cout<<"\n\nTotal noodles with manchurian collections for the day: "<<T_noodleswithmanchurian;

            cout<<"\n\nNumber of biriyani we had: "<<Qbiriyani;
            cout<<"\n\nNumber of biriyani sold: "<<Sbiriyani;
            cout<<"\n\biriyani left: "<<Qbiriyani-Sbiriyani;
            cout<<"\n\nTotal biriyani collections for the day: "<<T_biriyani;

            cout<<"\n\nNumber of kadhipakodi we had: "<<Qkadhipakodi;
            cout<<"\n\nNumber of kadhipakodi sold: "<<Skadhipakodi;
            cout<<"\n\nkadhipakodi left: "<<Qkadhipakodi-Skadhipakodi;
            cout<<"\n\nTotal kadhipakodi collections for the day: "<<T_kadhipakodi;

            cout<<"\n\nNumber of pavbhaji we had: "<<Qpavbhaji;
            cout<<"\n\nNumber of pavbhaji sold: "<<Spavbhaji;
            cout<<"\n\npavbhaji left: "<<Qpavbhaji-Spavbhaji;
            cout<<"\n\nTotal pavbhaji collections for the day: "<<T_pavbhaji;

            cout<<"\n\nNumber of paneerthal we had: "<<Qpaneerthal;
            cout<<"\n\nNumber of paneerthal sold: "<<Spaneerthal;
            cout<<"\n\npaneerthal left: "<<Qpaneerthal-Spaneerthal;
            cout<<"\n\nTotal paneerthal collections for the day: "<<T_paneerthal;

            cout<<"\n\nNumber of rasmalayi we had: "<<Qrasmalayi;
            cout<<"\n\nNumber of rasmalayi sold: "<<Srasmalayi;
            cout<<"\n\nrasmalayi left: "<<Qrasmalayi-Srasmalayi;
            cout<<"\n\nTotal rasmalayi collections for the day: "<<T_rasmalayi;

            cout<<"\n\nNumber of lemon juice we had: "<<Qlemonjuice;
            cout<<"\n\nNumber of lemon juice sold: "<<Slemonjuice;
            cout<<"\n\nlemon juice left: "<<Qlemonjuice-Slemonjuice;
            cout<<"\n\nTotal lemon juice collections for the day: "<<T_lemonjuice;

            cout<<"\n\n\nThe total collection of the day is: "<<T_rooms+ T_pizza+ T_burger + T_pasta+ T_noodleswithmanchurian+ T_pavbhaji+ T_paneerthal+ T_rasmalayi+ T_lemonjuice;

          case 13:
              exit(0);
              default:
                  cout<<"\n Please select from the numbers mentioned above!";











    }
    goto m;




}
