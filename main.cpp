#include <iostream>
#include <vector>
using namespace std;

int main() {
   int N, medio, i, pro, deb, somma;
   float media;
   pro = 0;
   deb = 0;
   somma = 0;
   media = 0;
   string nome;
   cout << "Quanti studenti ci sono in questa classe?" << endl;
   cin >> N;
   while (N<0) {
    cout << "Non valgono valori negativi" << endl;
    cin >> N;
   } 
   int stud[N];
   for (i=1; i<=N; i++){
    cout << "Qual è il tuo nome?" << endl;
    cin >> nome;
    cout << "Qual è il tuo voto medio in informatica?" << endl;
    cin >> medio;
    somma = somma + medio;
    if (medio<6) {
        cout << nome << " prenderà il debito" << endl;
        deb = deb+1;
    }
    else {
        cout << nome << " non prenderà il debito" << endl;
        pro = pro+1;
    }
   }
   cout << "in totale " << pro << " studenti saranno promossi e " << deb << " saranno bocciati" << endl;
   media = somma/N;
   cout << "La media totale della classe è " << media; 
}


