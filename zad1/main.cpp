#include <iostream>
#include <fstream>
using namespace std;

string tresc[3];
string odpA[3];
string odpB[3];
string odpC[3];
string popOdp[3];

int main()
{

    int nr_linii=1;
    string odpowiedz;
    int nr_pytania=0;
    string linia;
    fstream plik;
    int punkty;
    plik.open("quiz.txt",ios::in);

    if(plik.good()==false){
        cout<<"Nie ma takiego pliku";
    }
    while(getline(plik,linia))
    {
        switch(nr_linii)
        {
        case 1: tresc[nr_pytania]=linia; break;
        case 2: odpA[nr_pytania]=linia; break;
        case 3: odpB[nr_pytania]=linia; break;
        case 4: odpC[nr_pytania]=linia; break;
        case 5: popOdp[nr_pytania]=linia; break;
        }

        if(nr_linii%5==0){nr_linii=0; nr_pytania++;}
        nr_linii++;
    }
    plik.close();
    for(int i=0;i<3;i++)
    {
        cout<<tresc[i]<<endl;
        cout<<"A. "<<odpA[i]<<endl;
        cout<<"B. "<<odpB[i]<<endl;
        cout<<"C. "<<odpC[i]<<endl<<endl;
        cout<<"Podaj odpowiedz:"<<endl;
        cin>>odpowiedz;
        cout<<endl;
        if(popOdp[i]==odpowiedz){cout<<"Poprawna odpowiedz"<<endl<<endl; punkty++;}
            else{cout<<"Zla odpowiedz. "<<"Poprawna odpowiedz:"<<popOdp[i]<<endl<<endl;}

    }
    cout<<"Zdobywasz:"<<punkty<<" punkty"<<endl<<endl;
    return 0;
}
