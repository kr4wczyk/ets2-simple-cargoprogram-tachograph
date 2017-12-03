#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <fstream>
#include <time.h>
#include <conio.h>
#include <windows.h>

using namespace std;


int zuzycie_paliwa,przebieg,wybor,kilometry,wybor1,km,km1,km_wynik=0;
string miasto_zaladunku,miasto_rozladunku,towar,login,haslo;

int main()
{
    cout << "Witaj w programie systemu towarowego ETS2. Autorem programu jest kr4wczyk_." << endl;
    cout << "Zycze milego korzystania z programu. Jezeli znajdziesz jakis blad, skontaktuj sie z administratorem."<<endl;
    cout << "Nacisnij ENTER, aby przejsc do menu glownego."<<endl;
    getchar();
    system ("cls");

    while (true)
    {


    cout<<endl;
    cout <<"MENU GLOWNE PROGRAMU"<<endl;
    cout << "---------------------------------------------------------"<<endl;
    cout << "1. Dodaj nowa trase "<<endl;
    cout << "2. Wczytaj liczbe kilometrow "<<endl;
    cout << "3. Wygeneruj rozpiske"<<endl;
    cout << "4. Tachograf"<<endl;
    cout << "5. Wyjscie z programu"<<endl;


    cin>>wybor;
    getchar();
    system("cls");

    switch(wybor)
    {
    case 1:
        {
        cout << "Podaj miasto zaladunku: ";
        cin >>miasto_zaladunku;
        cout << "Podaj miasto rozladunku: ";
        cin >>miasto_rozladunku;
        cout << "Dlugosc trasy: ";
        cin >>kilometry;
        cout << "Zuzyte paliwo (w litrach): ";
        cin >>zuzycie_paliwa;

        fstream plik;

        plik.open("trasy.txt",ios::out|ios::app);
        plik<<miasto_zaladunku<<"---->";
        plik<<miasto_rozladunku<<endl;
        plik<<zuzycie_paliwa<<endl;
        plik.close();
        plik.open("kilometry.txt",ios::in|ios::app);
        plik<<kilometry<<endl;
        plik.close();
        system("cls");
        break;


        }

    case 2:
        {

        fstream plik;
        plik.open("kilometry.txt", ios::in|ios::out);              
        plik>>km;
        plik>>km_wynik;
        km_wynik=km+km_wynik;
        plik<<km_wynik;
        plik.close();
        plik.open("kilometry.txt",ios::trunc);
        plik.close();
        cout<<"Ilosc przejechanych kilometrow: "<<km_wynik<<endl;
        getchar();
        system("cls");
        break;
        }


        case 3:
            {
                cout<<"Przed wygenerowaniem rozpiski, dokonaj wyboru zestawu DLC/map."<<endl;
                cout<<"Wpisz okreslona liczbe, aby wybrac rozpiske dla danego zestawu."<<endl;
                cout<<endl;
                cout<<"Numer 11 - podstawowa wersja gry - bez DLC i map"<<endl;
                cout<<"Numer 12 - DLC Going East! - bez map"<<endl;
                cout<<"Numer 13 - DLC Scandinavia - bez map"<<endl;
                cout<<"Numer 14 - DLC Viva la France - bez map"<<endl;
                cout<<"Numer 15 - Going East! i Viva la France - bez map"<<endl;
                cout<<"Numer 16 - Going East i Skandynawia - bez map"<<endl;
                cout<<"Numer 17 - Skandynawia i Viva la France - bez map"<<endl;
                cout<<"Numer 18 - wszystkie DLC mapowe - bez map"<<endl;
                cout<<"Numer 19 - ProMods"<<endl;
                cout<<"Numer 20 - RusMap"<<endl;
                cout<<"Numer 21 - Promods + RusMap"<<endl;
                cout<<"Numer 22 - Krajowka (wymagany Going East!)"<<endl;
                cin>>wybor1;

                    switch(wybor1)
                        {

                        case 11:
                            {
                            getchar();
                            system("cls");

                            const int wordc = 56;
                            const char* const data[wordc] = {"Liverpool", "Manchester", "Sheffield", "Grimsby", "Birmingham", "Swansea", "Cardiff", "Plymouth", "Southampton", "London",
                            "Cambridge", "Felixstowe", "Dover", "Calais", "Lille", "Paris", "Dijon", "Reims", "Lyon", "Groningen", "Amsterdam", "Rotterdam", "Brussel", "Liege", "Koln", "Duisburg",
                            "Dusseldorf", "Luxembourg", "Strasbourg", "Zurich", "Bern", "Geneve", "Mannheim", "Kiel", "Rostock", "Hamburg", "Bremen", "Hannover", "Kassel", "Erfurt", "Leipzig",
                            "Berlin", "Dresden", "Frankfurt", "Nurnberg", "Munchen", "Innsbruck", "Venezia", "Milano", "Klagenfurt", "Linz", "Wien", "Bratislava", "Szczecin", "Poznan", "Wroclaw"};
                            for (int i=1; i<=1; i++)
                        {
                            int trasa_, trasa_1,trasa_2,trasa_3,trasa_4,trasa_5;
                            srand(time(NULL));
                            trasa_ = rand()%wordc;
                            trasa_1=rand()%wordc;
                            cout<<data[trasa_]<<"----->";
                            cout<<data[trasa_1]<<endl;
                            trasa_2=rand()% wordc;
                            cout<<data[trasa_1]<<"----->";
                            cout<<data[trasa_2]<<endl;
                            trasa_3=rand()% wordc;
                            cout<<data[trasa_2]<<"----->";
                            cout<<data[trasa_3]<<endl;
                            trasa_4= rand()% wordc;
                            cout<<data[trasa_3]<<"----->";
                            cout<<data[trasa_4]<<endl;
                            trasa_5= rand()% wordc;
                            cout<<data[trasa_4]<<"------>";
                            cout<<data[trasa_5]<<endl;
                            getchar();
                            system("cls");



                        }
                        break;
                        }
                        case 12:
                            {
                            getchar();
                            system("cls");

                           const int wordc1=67;
                           const char* const data1[wordc1] = {"Liverpool", "Manchester", "Sheffield", "Grimsby", "Birmingham", "Swansea", "Cardiff", "Plymouth", "Southampton", "London", "Cambridge", "Felixstowe", "Dover", "Calais",
                            "Lille", "Paris", "Dijon", "Reims", "Lyon", "Groningen", "Amsterdam", "Rotterdam", "Brussel", "Liege", "Koln", "Duisburg", "Dusseldorf", "Luxembourg", "Strasbourg", "Zurich", "Bern", "Geneve", "Mannheim",
                            "Kiel", "Rostock", "Hamburg", "Bremen", "Hannover", "Kassel", "Erfurt", "Leipzig",  "Berlin", "Dresden", "Frankfurt", "Nurnberg", "Munchen", "Innsbruck", "Venezia", "Milano", "Klagenfurt", "Linz", "Wien",
                            "Bratislava", "Szczecin","Poznan","Wroclaw","Olsztyn","Bialystok","Lublin","Krakow","Katowice","Lodz",
                            "Warszawa","Budapest","Kosice","Banska Bystrica", "Ostrava"};

                            for (int i=1; i<=1; i++)
                        {
                            int trasa_0, trasa_10,trasa_20,trasa_30,trasa_40,trasa_50;
                            srand(time(NULL));
                            trasa_0=rand()%wordc1;
                            trasa_10=rand()%wordc1;
                            cout<<data1[trasa_0]<<"----->";
                            cout<<data1[trasa_10]<<endl;
                            trasa_20=rand()% wordc1;
                            cout<<data1[trasa_10]<<"----->";
                            cout<<data1[trasa_20]<<endl;
                            trasa_30=rand()% wordc1;
                            cout<<data1[trasa_20]<<"----->";
                            cout<<data1[trasa_30]<<endl;
                            trasa_40=rand()% wordc1;
                            cout<<data1[trasa_30]<<"----->";
                            cout<<data1[trasa_40]<<endl;
                            trasa_50=rand()% wordc1;
                            cout<<data1[trasa_40]<<"------>";
                            cout<<data1[trasa_50]<<endl;
                            getchar();
                            system("cls");



                        }
                        break;
                        }
                        case 13:
                            {
                                getchar();
                                system("cls");
                                const int wordc2=81;
                                const char* const data2[wordc2] = {"Liverpool", "Manchester", "Sheffield", "Grimsby", "Birmingham", "Swansea", "Cardiff", "Plymouth",
                                 "Southampton", "London", "Cambridge", "Felixstowe", "Dover", "Calais", "Lille", "Paris", "Dijon", "Reims", "Lyon", "Groningen", "Amsterdam",
                                 "Rotterdam", "Brussel", "Liege", "Koln", "Duisburg", "Dusseldorf", "Luxembourg", "Strasbourg", "Zurich", "Bern", "Geneve", "Mannheim",
                                 "Kiel", "Rostock", "Hamburg", "Bremen", "Hannover", "Kassel", "Erfurt" "Leipzig",  "Berlin", "Dresden", "Frankfurt", "Nurnberg", "Munchen",
                                 "Innsbruck", "Venezia", "Milano", "Klagenfurt", "Linz", "Wien", "Bratislava", "Szczecin","Poznan","Wroclaw","Aalborg","Bergen","Esbjerg","Frederikshaven","Gedser","Goteborg",
                                 "Helsingborg", "Hirtshals", "Jonkoping","Kalmar","Karlskrona","Kobenhavn","Kristiansand","Linkoping","Malmo","Nynashamn","Odense","Orebro","Oslo","Sodertalje","Stavanger",
                                 "Stockholm","Trelleborg","Uppsala","Vasteraas","Vaxjo"};
                                 for (int i=1; i<=1; i++)
                        {
                            int trasa_01, trasa_11,trasa_21,trasa_31,trasa_41,trasa_51;
                            srand(time(NULL));
                            trasa_01=rand()%wordc2;
                            trasa_11=rand()%wordc2;
                            cout<<data2[trasa_01]<<"----->";
                            cout<<data2[trasa_11]<<endl;
                            trasa_21=rand()% wordc2;
                            cout<<data2[trasa_11]<<"----->";
                            cout<<data2[trasa_21]<<endl;
                            trasa_31=rand()% wordc2;
                            cout<<data2[trasa_21]<<"----->";
                            cout<<data2[trasa_31]<<endl;
                            trasa_41=rand()% wordc2;
                            cout<<data2[trasa_31]<<"----->";
                            cout<<data2[trasa_41]<<endl;
                            trasa_51=rand()% wordc2;
                            cout<<data2[trasa_41]<<"------>";
                            cout<<data2[trasa_51]<<endl;
                            getchar();
                            system("cls");


                        }
                        break;
                        }
                        case 14:
                            {
                                getchar();
                                system("cls");
                                const int wordc3=69;
                                const char* const data3[wordc3] = {"Liverpool", "Manchester", "Sheffield", "Grimsby", "Birmingham", "Swansea", "Cardiff", "Plymouth", "Southampton", "London", "Cambridge",
                                "Felixstowe", "Dover", "Calais", "Lille", "Paris", "Dijon", "Reims", "Lyon", "Groningen", "Amsterdam", "Rotterdam", "Brussel", "Liege", "Koln", "Duisburg", "Dusseldorf",
                                "Luxembourg", "Strasbourg", "Zurich", "Bern", "Geneve", "Mannheim", "Kiel", "Rostock", "Hamburg", "Bremen", "Hannover", "Kassel", "Erfurt" "Leipzig",  "Berlin", "Dresden",
                                "Frankfurt", "Nurnberg", "Munchen", "Innsbruck", "Venezia", "Milano", "Klagenfurt", "Linz", "Wien", "Bratislava", "Szczecin","Poznan","Wroclaw",
                                "Brest", "Roscoff", "Le Havre", "Le Mans", "Rennes", "Nantes", "La Rochelle", "Limoges", "Clermont-Ferrand", "Bordeaux", "Toulouse", "Montpellier", "Marseille", "Nice"};
                                          for (int i=1; i<=1; i++)
                        {
                            int trasa_02, trasa_12,trasa_22,trasa_32,trasa_42,trasa_52;
                            srand(time(NULL));
                            trasa_02=rand()%wordc3;
                            trasa_12=rand()%wordc3;
                            cout<<data3[trasa_02]<<"----->";
                            cout<<data3[trasa_12]<<endl;
                            trasa_22=rand()% wordc3;
                            cout<<data3[trasa_12]<<"----->";
                            cout<<data3[trasa_22]<<endl;
                            trasa_32=rand()% wordc3;
                            cout<<data3[trasa_22]<<"----->";
                            cout<<data3[trasa_32]<<endl;
                            trasa_42=rand()% wordc3;
                            cout<<data3[trasa_32]<<"----->";
                            cout<<data3[trasa_42]<<endl;
                            trasa_52=rand()% wordc3;
                            cout<<data3[trasa_42]<<"------>";
                            cout<<data3[trasa_52]<<endl;
                            getchar();
                            system("cls");


                        }
                        break;
                        }
                        case 15:
                            {
                                getchar();
                                system("cls");
                                const int wordc4=81;
                                const char* const data4[wordc4] = {"Liverpool", "Manchester", "Sheffield", "Grimsby", "Birmingham", "Swansea", "Cardiff", "Plymouth", "Southampton", "London", "Cambridge", "Felixstowe", "Dover", "Calais",
                            "Lille", "Paris", "Dijon", "Reims", "Lyon", "Groningen", "Amsterdam", "Rotterdam", "Brussel", "Liege", "Koln", "Duisburg", "Dusseldorf", "Luxembourg", "Strasbourg", "Zurich", "Bern", "Geneve", "Mannheim",
                            "Kiel", "Rostock", "Hamburg", "Bremen", "Hannover", "Kassel", "Erfurt", "Leipzig",  "Berlin", "Dresden", "Frankfurt", "Nurnberg", "Munchen", "Innsbruck", "Venezia", "Milano", "Klagenfurt", "Linz", "Wien",
                            "Bratislava", "Szczecin","Poznan","Wroclaw","Olsztyn","Bialystok","Lublin","Krakow","Katowice","Lodz", "Warszawa","Budapest","Kosice","Banska Bystrica", "Ostrava", "Brest", "Roscoff", "Le Havre", "Le Mans", "Rennes",
                             "Nantes", "La Rochelle", "Limoges", "Clermont-Ferrand", "Bordeaux", "Toulouse", "Montpellier", "Marseille", "Nice"};
                                          for (int i=1; i<=1; i++)
                                                   {
                            int trasa_03, trasa_13,trasa_23,trasa_33,trasa_43,trasa_53;
                            srand(time(NULL));
                            trasa_03=rand()%wordc4;
                            trasa_13=rand()%wordc4;
                            cout<<data4[trasa_03]<<"----->";
                            cout<<data4[trasa_13]<<endl;
                            trasa_23=rand()% wordc4;
                            cout<<data4[trasa_13]<<"----->";
                            cout<<data4[trasa_23]<<endl;
                            trasa_33=rand()% wordc4;
                            cout<<data4[trasa_23]<<"----->";
                            cout<<data4[trasa_33]<<endl;
                            trasa_43=rand()% wordc4;
                            cout<<data4[trasa_33]<<"----->";
                            cout<<data4[trasa_43]<<endl;
                            trasa_53=rand()% wordc4;
                            cout<<data4[trasa_43]<<"------>";
                            cout<<data4[trasa_53]<<endl;
                            getchar();
                            system("cls");


                        }
                        break;
                            }
                        case 16:
                            {
                                getchar();
                                system("cls");
                                const int wordc5=93;
                                const char* const data5[wordc5] = {"Liverpool", "Manchester", "Sheffield", "Grimsby", "Birmingham", "Swansea", "Cardiff", "Plymouth", "Southampton", "London", "Cambridge", "Felixstowe", "Dover", "Calais",
                            "Lille", "Paris", "Dijon", "Reims", "Lyon", "Groningen", "Amsterdam", "Rotterdam", "Brussel", "Liege", "Koln", "Duisburg", "Dusseldorf", "Luxembourg", "Strasbourg", "Zurich", "Bern", "Geneve", "Mannheim",
                            "Kiel", "Rostock", "Hamburg", "Bremen", "Hannover", "Kassel", "Erfurt", "Leipzig",  "Berlin", "Dresden", "Frankfurt", "Nurnberg", "Munchen", "Innsbruck", "Venezia", "Milano", "Klagenfurt", "Linz", "Wien",
                            "Bratislava", "Szczecin","Poznan","Wroclaw","Olsztyn","Bialystok","Lublin","Krakow","Katowice","Lodz",
                            "Warszawa","Budapest","Kosice","Banska Bystrica", "Ostrava", "Aalborg","Bergen","Esbjerg","Frederikshaven","Gedser","Goteborg",
                            "Helsingborg", "Hirtshals", "Jonkoping","Kalmar","Karlskrona","Kobenhavn","Kristiansand","Linkoping","Malmo","Nynashamn","Odense","Orebro","Oslo","Sodertalje","Stavanger",
                            "Stockholm","Trelleborg","Uppsala","Vasteraas","Vaxjo"};
                            for (int i=1; i<=1; i++)
                                                   {
                            int trasa_04, trasa_14,trasa_24,trasa_34,trasa_44,trasa_54;
                            srand(time(NULL));
                            trasa_04=rand()%wordc5;
                            trasa_14=rand()%wordc5;
                            cout<<data5[trasa_04]<<"----->";
                            cout<<data5[trasa_14]<<endl;
                            trasa_24=rand()% wordc5;
                            cout<<data5[trasa_14]<<"----->";
                            cout<<data5[trasa_24]<<endl;
                            trasa_34=rand()% wordc5;
                            cout<<data5[trasa_24]<<"----->";
                            cout<<data5[trasa_34]<<endl;
                            trasa_44=rand()% wordc5;
                            cout<<data5[trasa_34]<<"----->";
                            cout<<data5[trasa_44]<<endl;
                            trasa_54=rand()% wordc5;
                            cout<<data5[trasa_44]<<"------>";
                            cout<<data5[trasa_54]<<endl;
                            getchar();
                            system("cls");

                            }
                            break;
                        }
                        case 17:
                            {
                                getchar();
                                system("cls");
                                const int wordc6=95;
                                const char* const data6[wordc6]={"Liverpool", "Manchester", "Sheffield", "Grimsby", "Birmingham", "Swansea", "Cardiff", "Plymouth",
                                 "Southampton", "London", "Cambridge", "Felixstowe", "Dover", "Calais", "Lille", "Paris", "Dijon", "Reims", "Lyon", "Groningen", "Amsterdam",
                                 "Rotterdam", "Brussel", "Liege", "Koln", "Duisburg", "Dusseldorf", "Luxembourg", "Strasbourg", "Zurich", "Bern", "Geneve", "Mannheim",
                                 "Kiel", "Rostock", "Hamburg", "Bremen", "Hannover", "Kassel", "Erfurt" "Leipzig",  "Berlin", "Dresden", "Frankfurt", "Nurnberg", "Munchen",
                                 "Innsbruck", "Venezia", "Milano", "Klagenfurt", "Linz", "Wien", "Bratislava", "Szczecin","Poznan","Wroclaw","Aalborg","Bergen","Esbjerg","Frederikshaven","Gedser","Goteborg",
                                 "Helsingborg", "Hirtshals", "Jonkoping","Kalmar","Karlskrona","Kobenhavn","Kristiansand","Linkoping","Malmo","Nynashamn","Odense","Orebro","Oslo","Sodertalje","Stavanger",
                                 "Stockholm","Trelleborg","Uppsala","Vasteraas","Vaxjo", "Brest", "Roscoff", "Le Havre", "Le Mans", "Rennes", "Nantes", "La Rochelle", "Limoges", "Clermont-Ferrand", "Bordeaux",
                                  "Toulouse", "Montpellier", "Marseille", "Nice" };
                                  for (int i=1; i<=1; i++)
                                                   {
                            int trasa_05, trasa_15,trasa_25,trasa_35,trasa_45,trasa_55;
                            srand(time(NULL));
                            trasa_05=rand()%wordc6;
                            trasa_15=rand()%wordc6;
                            cout<<data6[trasa_05]<<"----->";
                            cout<<data6[trasa_15]<<endl;
                            trasa_25=rand()% wordc6;
                            cout<<data6[trasa_15]<<"----->";
                            cout<<data6[trasa_25]<<endl;
                            trasa_35=rand()% wordc6;
                            cout<<data6[trasa_25]<<"----->";
                            cout<<data6[trasa_35]<<endl;
                            trasa_45=rand()% wordc6;
                            cout<<data6[trasa_35]<<"----->";
                            cout<<data6[trasa_45]<<endl;
                            trasa_55=rand()% wordc6;
                            cout<<data6[trasa_45]<<"------>";
                            cout<<data6[trasa_55]<<endl;
                            getchar();
                            system("cls");

                            }
                            break;
                            }
                        case 18:
                            {
                                getchar();
                                system("cls");
                                const int wordc7=107;
                                const char* const data7[wordc7]={"Liverpool", "Manchester", "Sheffield", "Grimsby", "Birmingham", "Swansea", "Cardiff", "Plymouth",
                                 "Southampton", "London", "Cambridge", "Felixstowe", "Dover", "Calais", "Lille", "Paris", "Dijon", "Reims", "Lyon", "Groningen", "Amsterdam",
                                 "Rotterdam", "Brussel", "Liege", "Koln", "Duisburg", "Dusseldorf", "Luxembourg", "Strasbourg", "Zurich", "Bern", "Geneve", "Mannheim",
                                 "Kiel", "Rostock", "Hamburg", "Bremen", "Hannover", "Kassel", "Erfurt" "Leipzig",  "Berlin", "Dresden", "Frankfurt", "Nurnberg", "Munchen",
                                 "Innsbruck", "Venezia", "Milano", "Klagenfurt", "Linz", "Wien", "Bratislava", "Szczecin","Poznan","Wroclaw","Aalborg","Bergen","Esbjerg","Frederikshaven","Gedser","Goteborg",
                                 "Helsingborg", "Hirtshals", "Jonkoping","Kalmar","Karlskrona","Kobenhavn","Kristiansand","Linkoping","Malmo","Nynashamn","Odense","Orebro","Oslo","Sodertalje","Stavanger",
                                 "Stockholm","Trelleborg","Uppsala","Vasteraas","Vaxjo", "Brest", "Roscoff", "Le Havre", "Le Mans", "Rennes", "Nantes", "La Rochelle", "Limoges", "Clermont-Ferrand", "Bordeaux",
                                  "Toulouse", "Montpellier", "Marseille", "Nice", "Olsztyn","Bialystok","Lublin","Krakow","Katowice","Lodz","Warszawa","Budapest","Kosice","Banska Bystrica", "Ostrava", "Szeged"};
                            for(int i=1; i<=1; i++)
                            {


                            int trasa_06, trasa_16,trasa_26,trasa_36,trasa_46,trasa_56;
                            srand(time(NULL));
                            trasa_06=rand()%wordc7;
                            trasa_16=rand()%wordc7;
                            cout<<data7[trasa_06]<<"----->";
                            cout<<data7[trasa_16]<<endl;
                            trasa_26=rand()% wordc7;
                            cout<<data7[trasa_16]<<"----->";
                            cout<<data7[trasa_26]<<endl;
                            trasa_36=rand()% wordc7;
                            cout<<data7[trasa_26]<<"----->";
                            cout<<data7[trasa_36]<<endl;
                            trasa_46=rand()% wordc7;
                            cout<<data7[trasa_36]<<"----->";
                            cout<<data7[trasa_46]<<endl;
                            trasa_56=rand()% wordc7;
                            cout<<data7[trasa_46]<<"------>";
                            cout<<data7[trasa_56]<<endl;
                            getchar();
                            system("cls");
                            }
                            break;
                            }
                        case 19:
                            {
                                getchar();
                                system("cls");
                                const int wordc8=385;
                                const char* const data8[wordc8]={"Padborg","Rødbyhavn","Aarhus","Herning","Holstebro","Kolding","Viborg","Rønne","Aalborg","Hirtshals","Frederikshavn","Kobenhavn","Gävle","Haparanda","Karlstad",
                                "Kristianstad","Sundsvall","Söderhamn","Södertälje","Örnsköldsvik","Umeå","Östersund","Are","Stockholm","Linköping","Kirkenes","Longyearbyen","Hiorthhamn","Dombås","Hamar","Honningsvåg","Lillehammer",
                                "Oppdal","Orkanger","Otta","Tana Bru","Trondheim","Helsinki","Kuopio","Varkaus","Jyväskylä","Mikkeli","Tampere","Lahti","Hämeenlinna","Porvoo","Joensuu","Kemi","Kärsämäki","Napapiiri","Oulu","Pori",
                                "Rovaniemi","Tornio","Vantaa","Viitasaari","Alajärvi","Kemijärvi","Kristiinankaupunki","Vaasa", "Ivalo","Kokkola","Sodankylä","Utsjoki","Mariehamn", "Bayonne", "Pau","Narbonne","Perpignan", "Calais",
                                "Flensburg","Rostock","Oberhausen","Bad", "Oeynhausen","Aurach","Bremerhaven","Fürth","Halle","Heilbronn","Ulm","Bonn","Koblenz","Mainz","Sangerhausen","Uelzen","Wiesbaden", "Köln","Frankfurt","München",
                                "Berlin","Magdeburg","Leipzig","Nürnberg","Mannheim","Erfurt","Croydon","Portsmouth","Wick","Inverness","Oban","FortWilliam","Hull","Chelmsford","Birsay","Broadford","Evie","Heysham","Kirkwall","Portree",
                                "Stromness","Belfast","Cairnryan","Canterbury","Dumfries","Fishguard","Fraserburgh","Holyhead","Larne","Lisburn","Perth","Stranraer", "Dover", "Dublin","Galway","Limerick","Sligo","Wexford","Douglas","Ramsey",
                                "Saint Helier","Trinity","Arnhem","Eindhoven","Zwolle","Amsterdam","Rotterdam","Antwerp","Brussels","Vaduz","Basel","Reutte","Hainburg","Obsteig","Innsbruck","Salzburg","Wien","Genova","Modena","Parma",
                                "Vicenza","Bologna","Firenze","Livorno","Trieste","Irun","San Sebastián/Donostia","Barcelona","Bilbao","La Jonquera","Manresa","Huesca","Lleida","Andorra la Vella","Tallinn","Pärnu","Tartu","Valga","Narva",
                                "Haapsalu","Kärdla","Kuressaare","Rakvere","Valka","Rīga","Ventspils","Balvi","Gulbene","Liepāja","Rēzekne","Tukums","Jēkabpils","Kolka","Ogre","Saldus","Daugavpils","Kaunas","Panevėžys","Klaipėda","Tauragė",
                                "Reykjavík","Reyðarfjörður","Seyðisfjörður","Keflavík Airport","Akureyri","Vík","Blönduós","Borgarnes","Akranes","Hólmavík","Bolungarvík","Ísafjörður","Vestmannaeyjar","Höfn","Selfoss","Klaksvík","Tórshavn","Ljubljana","Maribor",
                                "Bielsko-Biała","Bydgoszcz","Cieszyn","Gdynia","Gorzów Wielkopolski","Grudziądz","Kielce","Koszalin","Krosno","Nowogard","Opole","Ostrołęka","Piła","Płock","Przemyśl","Radom","Rzeszów","Sanok","Siedlce","Suwałki","Świnoujście",
                                "Zamość","Zgorzelec","Augustów","Elbląg","Ostrów Mazowiecka","Szczecin","Wrocław","Łódź","Lublin","Warszawa", "Olsztyn","Lublin","Katowice","Krakow","Bialystok","Prague","Košice","Győr","Szeged","Osijek","Rijeka","Slavonski Brod","Zagreb",
                                "Нови Сад(Novi Sad)","Суботица (Subotica)","Зрењанин(Zrenjanin)","Arad","Bacău","Baia Mare","București","Cluj-Napoca","Constanța","Craiova","Oradea","Piatra Neamț","Sibiu","Timișoara","Bălți","Chișinău",
                                "Русе (Ruse)","Мукачеве(Mukacheve)","Ужгород(Uzhhorod)","Зеленоградск(Zelenogradsk)","Мурманск(Murmansk)","Никель(Nikel)","Черняховск(Chernyakhovsk)","Калининград(Kaliningrad)","Кандалакша(Kandalaksha)","Верхнетуломский(Verkhnetulomsky)",
                                "Liverpool", "Manchester", "Sheffield", "Grimsby", "Birmingham", "Swansea", "Cardiff", "Plymouth","Southampton", "London", "Cambridge", "Felixstowe", "Dover", "Calais", "Lille", "Paris", "Dijon", "Reims", "Lyon", "Groningen", "Amsterdam",
                                "Rotterdam", "Brussel", "Liege", "Koln", "Duisburg", "Dusseldorf", "Luxembourg", "Strasbourg", "Zurich", "Bern", "Geneve", "Mannheim",
                                "Kiel", "Rostock", "Hamburg", "Bremen", "Hannover", "Kassel", "Erfurt" "Leipzig",  "Berlin", "Dresden", "Frankfurt", "Nurnberg", "Munchen",
                                "Innsbruck", "Venezia", "Milano", "Klagenfurt", "Linz", "Wien", "Bratislava", "Szczecin","Poznan","Wroclaw","Aalborg","Bergen","Esbjerg","Frederikshaven","Gedser","Goteborg",
                                "Helsingborg", "Hirtshals", "Jonkoping","Kalmar","Karlskrona","Kobenhavn","Kristiansand","Linkoping","Malmo","Nynashamn","Odense","Orebro","Oslo","Sodertalje","Stavanger",
                                "Stockholm","Trelleborg","Uppsala","Vasteraas","Vaxjo", "Brest", "Roscoff", "Le Havre", "Le Mans", "Rennes", "Nantes", "La Rochelle", "Limoges", "Clermont-Ferrand", "Bordeaux",
                                "Toulouse", "Montpellier", "Marseille", "Nice", "Olsztyn","Bialystok","Lublin","Krakow","Katowice","Lodz","Warszawa","Budapest","Kosice","Banska Bystrica", "Ostrava"};
                                for(int i=1; i<=1; i++)
                            {


                            int trasa_07, trasa_17,trasa_27,trasa_37,trasa_47,trasa_57;
                            srand(time(NULL));
                            trasa_07=rand()%wordc8;
                            trasa_17=rand()%wordc8;
                            cout<<data8[trasa_07]<<"----->";
                            cout<<data8[trasa_17]<<endl;
                            trasa_27=rand()% wordc8;
                            cout<<data8[trasa_17]<<"----->";
                            cout<<data8[trasa_27]<<endl;
                            trasa_37=rand()% wordc8;
                            cout<<data8[trasa_27]<<"----->";
                            cout<<data8[trasa_37]<<endl;
                            trasa_47=rand()% wordc8;
                            cout<<data8[trasa_37]<<"----->";
                            cout<<data8[trasa_47]<<endl;
                            trasa_57=rand()% wordc8;
                            cout<<data8[trasa_47]<<"------>";
                            cout<<data8[trasa_57]<<endl;
                            getchar();
                            system("cls");
                            }
                            break;
                            }
                        case 20:
                            {
                                getchar();
                                system("cls");
                                const int wordc9=154;
                                const char* const data9[wordc9]= {"Liverpool", "Manchester", "Sheffield", "Grimsby", "Birmingham", "Swansea", "Cardiff", "Plymouth",
                                "Southampton", "London", "Cambridge", "Felixstowe", "Dover", "Calais", "Lille", "Paris", "Dijon", "Reims", "Lyon", "Groningen", "Amsterdam",
                                "Rotterdam", "Brussel", "Liege", "Koln", "Duisburg", "Dusseldorf", "Luxembourg", "Strasbourg", "Zurich", "Bern", "Geneve", "Mannheim",
                                "Kiel", "Rostock", "Hamburg", "Bremen", "Hannover", "Kassel", "Erfurt" "Leipzig",  "Berlin", "Dresden", "Frankfurt", "Nurnberg", "Munchen",
                                "Innsbruck", "Venezia", "Milano", "Klagenfurt", "Linz", "Wien", "Bratislava", "Szczecin","Poznan","Wroclaw","Aalborg","Bergen","Esbjerg","Frederikshaven","Gedser","Goteborg",
                                "Helsingborg", "Hirtshals", "Jonkoping","Kalmar","Karlskrona","Kobenhavn","Kristiansand","Linkoping","Malmo","Nynashamn","Odense","Orebro","Oslo","Sodertalje","Stavanger",
                                "Stockholm","Trelleborg","Uppsala","Vasteraas","Vaxjo", "Brest", "Roscoff", "Le Havre", "Golfech", "Le Mans", "Rennes", "Nantes", "La Rochelle", "Limoges", "Clermont-Ferrand", "Bordeaux",
                                "Toulouse", "Montpellier", "Marseille", "Nice", "Olsztyn","Bialystok","Lublin","Krakow","Katowice","Lodz","Warszawa","Budapest","Kosice","Banska Bystrica", "Ostrava","Valdai","Velikiye Luki",
                                "Veliky Novgorod","Velizh","Volokolamsk","Voronezh","Vyborg","Vyshny Volochek","Vyazma","Kaluga","Klin","Kolomna","Kursk","Luga","Moscow","Nevel","Obninsk","Orel","Ostashkov","Porkhov","Pskov",
                                "Rzhev","Roslavl","St Petersburg","Smolensk","Saratov","Kholm","Shlisselburg","Yukhnov","Tambov","Borisoglebsk","Volgograd","Volzhsky","Krasnoslobodsk","Engels","Baranovichi","Bobruisk","Brest",
                                "Vitebsk","Gomel","Minsk","Mogilev","Mozyr","Mstislavl","Orsha","Pinsk","Slutsk"};
                                for(int i=1; i<=1; i++)
                            {


                            int trasa_08, trasa_18,trasa_28,trasa_38,trasa_48,trasa_58;
                            srand(time(NULL));
                            trasa_08=rand()%wordc9;
                            trasa_18=rand()%wordc9;
                            cout<<data9[trasa_08]<<"----->";
                            cout<<data9[trasa_18]<<endl;
                            trasa_28=rand()% wordc9;
                            cout<<data9[trasa_18]<<"----->";
                            cout<<data9[trasa_28]<<endl;
                            trasa_38=rand()% wordc9;
                            cout<<data9[trasa_28]<<"----->";
                            cout<<data9[trasa_38]<<endl;
                            trasa_48=rand()% wordc9;
                            cout<<data9[trasa_38]<<"----->";
                            cout<<data9[trasa_48]<<endl;
                            trasa_58=rand()% wordc9;
                            cout<<data9[trasa_48]<<"------>";
                            cout<<data9[trasa_58]<<endl;
                            getchar();
                            system("cls");
                            }
                            break;
                            }
                        case 21:
                            {

                            getchar();
                            system("cls");
                            const int wordc10=432;
                            const char* const data10[wordc10]={"Padborg","Rødbyhavn","Aarhus","Herning","Holstebro","Kolding","Viborg","Rønne","Aalborg","Hirtshals","Frederikshavn","Kobenhavn","Gävle","Haparanda","Karlstad",
                                "Kristianstad","Sundsvall","Söderhamn","Södertälje","Örnsköldsvik","Umeå","Östersund","Are","Stockholm","Linköping","Kirkenes","Longyearbyen","Hiorthhamn","Dombås","Hamar","Honningsvåg","Lillehammer",
                                "Oppdal","Orkanger","Otta","Tana Bru","Trondheim","Helsinki","Kuopio","Varkaus","Jyväskylä","Mikkeli","Tampere","Lahti","Hämeenlinna","Porvoo","Joensuu","Kemi","Kärsämäki","Napapiiri","Oulu","Pori",
                                "Rovaniemi","Tornio","Vantaa","Viitasaari","Alajärvi","Kemijärvi","Kristiinankaupunki","Vaasa", "Ivalo","Kokkola","Sodankylä","Utsjoki","Mariehamn", "Bayonne", "Pau","Narbonne","Perpignan", "Calais",
                                "Flensburg","Rostock","Oberhausen","Bad", "Oeynhausen","Aurach","Bremerhaven","Fürth","Halle","Heilbronn","Ulm","Bonn","Koblenz","Mainz","Sangerhausen","Uelzen","Wiesbaden", "Köln","Frankfurt","München",
                                "Berlin","Magdeburg","Leipzig","Nürnberg","Mannheim","Erfurt","Croydon","Portsmouth","Wick","Inverness","Oban","FortWilliam","Hull","Chelmsford","Birsay","Broadford","Evie","Heysham","Kirkwall","Portree",
                                "Stromness","Belfast","Cairnryan","Canterbury","Dumfries","Fishguard","Fraserburgh","Holyhead","Larne","Lisburn","Perth","Stranraer", "Dover", "Dublin","Galway","Limerick","Sligo","Wexford","Douglas","Ramsey",
                                "Saint Helier","Trinity","Arnhem","Eindhoven","Zwolle","Amsterdam","Rotterdam","Antwerp","Brussels","Vaduz","Basel","Reutte","Hainburg","Obsteig","Innsbruck","Salzburg","Wien","Genova","Modena","Parma",
                                "Vicenza","Bologna","Firenze","Livorno","Trieste","Irun","San Sebastián/Donostia","Barcelona","Bilbao","La Jonquera","Manresa","Huesca","Lleida","Andorra la Vella","Tallinn","Pärnu","Tartu","Valga","Narva",
                                "Haapsalu","Kärdla","Kuressaare","Rakvere","Valka","Rīga","Ventspils","Balvi","Gulbene","Liepāja","Rēzekne","Tukums","Jēkabpils","Kolka","Ogre","Saldus","Daugavpils","Kaunas","Panevėžys","Klaipėda","Tauragė",
                                "Reykjavík","Reyðarfjörður","Seyðisfjörður","Keflavík Airport","Akureyri","Vík","Blönduós","Borgarnes","Akranes","Hólmavík","Bolungarvík","Ísafjörður","Vestmannaeyjar","Höfn","Selfoss","Klaksvík","Tórshavn","Ljubljana","Maribor",
                                "Bielsko-Biała","Bydgoszcz","Cieszyn","Gdynia","Gorzów Wielkopolski","Grudziądz","Kielce","Koszalin","Krosno","Nowogard","Opole","Ostrołęka","Piła","Płock","Przemyśl","Radom","Rzeszów","Sanok","Siedlce","Suwałki","Świnoujście",
                                "Zamość","Zgorzelec","Augustów","Elbląg","Ostrów Mazowiecka","Szczecin","Wrocław","Łódź","Lublin","Warszawa", "Olsztyn","Lublin","Katowice","Krakow","Bialystok","Prague","Košice","Győr","Szeged","Osijek","Rijeka","Slavonski Brod","Zagreb",
                                "Нови Сад(Novi Sad)","Суботица (Subotica)","Зрењанин(Zrenjanin)","Arad","Bacău","Baia Mare","București","Cluj-Napoca","Constanța","Craiova","Oradea","Piatra Neamț","Sibiu","Timișoara","Bălți","Chișinău",
                                "Русе (Ruse)","Мукачеве(Mukacheve)","Ужгород(Uzhhorod)","Зеленоградск(Zelenogradsk)","Мурманск(Murmansk)","Никель(Nikel)","Черняховск(Chernyakhovsk)","Калининград(Kaliningrad)","Кандалакша(Kandalaksha)","Верхнетуломский(Verkhnetulomsky)",
                                "Liverpool", "Manchester", "Sheffield", "Grimsby", "Birmingham", "Swansea", "Cardiff", "Plymouth","Southampton", "London", "Cambridge", "Felixstowe", "Dover", "Calais", "Lille", "Paris", "Dijon", "Reims", "Lyon", "Groningen", "Amsterdam",
                                "Rotterdam", "Brussel", "Liege", "Koln", "Duisburg", "Dusseldorf", "Luxembourg", "Strasbourg", "Zurich", "Bern", "Geneve", "Mannheim",
                                "Kiel", "Rostock", "Hamburg", "Bremen", "Hannover", "Kassel", "Erfurt" "Leipzig",  "Berlin", "Dresden", "Frankfurt", "Nurnberg", "Munchen",
                                "Innsbruck", "Venezia", "Milano", "Klagenfurt", "Linz", "Wien", "Bratislava", "Szczecin","Poznan","Wroclaw","Aalborg","Bergen","Esbjerg","Frederikshaven","Gedser","Goteborg",
                                "Helsingborg", "Hirtshals", "Jonkoping","Kalmar","Karlskrona","Kobenhavn","Kristiansand","Linkoping","Malmo","Nynashamn","Odense","Orebro","Oslo","Sodertalje","Stavanger",
                                "Stockholm","Trelleborg","Uppsala","Vasteraas","Vaxjo", "Brest", "Roscoff", "Le Havre", "Le Mans", "Rennes", "Nantes", "La Rochelle", "Limoges", "Clermont-Ferrand", "Bordeaux",
                                "Toulouse", "Montpellier", "Marseille", "Nice", "Olsztyn","Bialystok","Lublin","Krakow","Katowice","Lodz","Warszawa","Budapest","Kosice","Banska Bystrica", "Ostrava","Valdai","Velikiye Luki",
                                "Veliky Novgorod","Velizh","Volokolamsk","Voronezh","Vyborg","Vyshny Volochek","Vyazma","Kaluga","Klin","Kolomna","Kursk","Luga","Moscow","Nevel","Obninsk","Orel","Ostashkov","Porkhov","Pskov",
                                "Rzhev","Roslavl","St Petersburg","Smolensk","Saratov","Kholm","Shlisselburg","Yukhnov","Tambov","Borisoglebsk","Volgograd","Volzhsky","Krasnoslobodsk","Engels","Baranovichi","Bobruisk","Brest",
                                "Vitebsk","Gomel","Minsk","Mogilev","Mozyr","Mstislavl","Orsha","Pinsk","Slutsk"};
                                for(int i=1; i<=1; i++)
                            {


                            int trasa_09, trasa_19,trasa_29,trasa_39,trasa_49,trasa_59;
                            srand(time(NULL));
                            trasa_09=rand()%wordc10;
                            trasa_19=rand()%wordc10;
                            cout<<data10[trasa_09]<<"----->";
                            cout<<data10[trasa_19]<<endl;
                            trasa_29=rand()% wordc10;
                            cout<<data10[trasa_19]<<"----->";
                            cout<<data10[trasa_29]<<endl;
                            trasa_39=rand()% wordc10;
                            cout<<data10[trasa_29]<<"----->";
                            cout<<data10[trasa_39]<<endl;
                            trasa_49=rand()% wordc10;
                            cout<<data10[trasa_39]<<"----->";
                            cout<<data10[trasa_49]<<endl;
                            trasa_59=rand()% wordc10;
                            cout<<data10[trasa_49]<<"------>";
                            cout<<data10[trasa_59]<<endl;
                            getchar();
                            system("cls");
                            }
                            break;
                            }
                        case 22:
                            {
                                getchar();
                                system("cls");
                                const int wordc11=11;
                                const char* const data11[wordc11]={"Szczecin","Poznan","Wroclaw","Olsztyn","Bialystok","Lublin","Krakow","Katowice","Lodz","Warszawa","Gdansk"};
                                for(int i=1; i<=1; i++)
                            {


                            int trasa_091, trasa_191,trasa_291,trasa_391,trasa_491,trasa_591;
                            srand(time(NULL));
                            trasa_091=rand()%wordc11;
                            trasa_191=rand()%wordc11;
                            cout<<data11[trasa_091]<<"----->";
                            cout<<data11[trasa_191]<<endl;
                            trasa_291=rand()% wordc11;
                            cout<<data11[trasa_191]<<"----->";
                            cout<<data11[trasa_291]<<endl;
                            trasa_391=rand()% wordc11;
                            cout<<data11[trasa_291]<<"----->";
                            cout<<data11[trasa_391]<<endl;
                            trasa_491=rand()% wordc11;
                            cout<<data11[trasa_391]<<"----->";
                            cout<<data11[trasa_491]<<endl;
                            trasa_591=rand()% wordc11;
                            cout<<data11[trasa_491]<<"------>";
                            cout<<data11[trasa_591]<<endl;
                            getchar();
                            system("cls");
                            }
                            break;
                            }

                            }
            }
            break;


        case 4:
              {
                  for(;;)
                  {
                       for(int i=40; i>=0; i--)
                       {
                        cout<<"Do konca czasu jazdy pozostalo: "<<i+5<<"minut"<<endl;
                        Sleep(60000);                                   //zatrzymanie na okres 1 minuty - odliczanie co minutę
                        system("cls");
                       }
                       for(int i=5; i>=0; i--)
                       {
                            cout <<"Sugerujemy znalezienie parkingu - czas jazdy skonczy sie za "<<i<<" minut."<<endl;

                            for(int i=5; i>=0; i--)
                            {
                            cout<<"\a";
                            Sleep(3000);
                            }

                        Sleep(60000);
                       }

                        for(int i=5; i>=0; i--)
                       {
                           Sleep(60000);
                           system("cls");
                           cout<<"Czas jazdy zakonczyl sie. To czas na przerwe. To pierwsza pauza wymagana w tym cyklu. Tobie tez sie przyda, odpocznij! :)"<<endl;                  /hehe, mala forma marketingowa
                       }

                       system ("cls");
                       for (int i=40; i>=0; i--)
                       {
                           cout<<"Do konca czasu jazdy pozostalo: "<<i+5<<" minut."<<endl;
                           Sleep(60000);
                           system("cls");

                       }
                       for(int i=5; i>=0; i--)
                       {
                            cout <<"Sugerujemy znalezienie parkingu - czas jazdy skonczy sie za "<<i<<" minut."<<endl;

                            for(int i=5; i>=0; i--)
                            {

                            cout<<"\a";
                            Sleep(3000);

                            }
                            Sleep(60000);
                       }
                       system ("cls");
                       for (int i=11; i>0; i--)
                       {
                           Sleep(60000);
                           system("cls");
                           cout<<"Czas jazdy zakonczyl sie. To druga pauza wymagana w tym cyklu - 11 minut. To czas na zrobienie kawy, herbaty, zjedzenie czegos, rozruszanie zasiedzianych kosci;) A moze przyszedl sms od spedytora?"<<endl;
                       }


                  }


                  break;
                }
        case 5:
            {

            cout<<"Dziekujemy za skorzystanie z programu."<<endl;
            exit(0);
            break;
            }
    }
    }
    }









