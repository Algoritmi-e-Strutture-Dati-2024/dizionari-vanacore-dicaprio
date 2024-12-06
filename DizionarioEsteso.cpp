#include <iostream>
#include <string>
#include "DizionarioEsteso.cpp" // Assicurati che l'implementazione di DizionarioEsteso sia inclusa

int main() {

    //Creazione di un dizionario di tipo stringa
    DizionarioEsteso<std::string> dict;

    //Inserimento di coppie chiave-valore
    dict.inserisci("mela", "frutta");
    dict.inserisci("auto", "veicolo");
    dict.inserisci("libro", "obiettivo");

    //Recupero dei valori con chiavi esistenti
    std::cout << "Valore di 'mela': " << dict.recupera("apple") << "\n";
    std::cout << "Valore di 'auto': " << dict.recupera("car") << "\n";

    //Tentativo di recupero di un valore con una chiave che non esiste
    std::string value = dict.recupera("penna");
    if (value != "chiave non trovata!") {
        std::cout << "valore di 'penna': " << valore << "\n";
    } else {
        std::cout << "la chiave 'penna' non è stata trovata!\n";
    }

    //Verifica se una chiave appartiene al dizionario
    std::cout << "'mela' appartiene al dizionario? " << (dict.appartiene("apple") ? "si" : "No") << "\n";
    std::cout << "'penna' appartiene al dizionario? " << (dict.appartiene("penna") ? "si" : "No") << "\n";

    //Stampa il contenuto del dizionario
    dict.stampa();

    //Cancellazione di una chiave
    dict.cancella("auto");
    std::cout << "dopo aver cancellato "auto":\n";
    dict.stampa();

    return 0;
}
