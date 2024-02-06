//input: 2 cisla N, K
//output: spravne nespravne
// N na K


#import <iostream>
#import <cmath>
using namespace std;


int metoda()
{
    int n,k,hadanyVysledok,vysledok;
    cout<<"Zadajte dve cele cisla, ktore  chcete hadat: "<<endl;
    cin>>n;
    cin>>k;
    cout<<"Zadajte vysledok (cele cislo), ktore hadate"<<endl;
    cin>>hadanyVysledok;
    vysledok = pow(n,k);
    if (vysledok==hadanyVysledok)
    {
        cout<<"Spravne!!";
    }
    else
    {
        cout<<"Nespravne!!"<<endl;
        metoda();
    }

    return 0;
}

int main()
{
   metoda();
}


