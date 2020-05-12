#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    string linia;
    fstream plik;
    string tab[2];
    int licznik=1;
    plik.open("test.txt",ios::out);

    if(plik.good()==false){
        cout<<"Nie ma takiego pliku";
    }

    plik<<"Blbla"<<endl;
    plik<<"Blbla";
    plik.close();

    plik.open("test2.txt",ios::in);

    while(getline(plik,linia))
    {
        cout<<linia<<endl;


    }
    plik.close();
    cout<<tab[1]<<tab[0];




    return 0;
}

