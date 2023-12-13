#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int punti;
    char i;
    string nome, cognome;
    cout << "Questo è un test per scoprire quanto incide lo stile della tua vita sull'ambiente:"  << endl;
    cout << "Nome: ";
    cin >> nome;
    cout << "Cognome: ";
    cin >> cognome;
    cout << endl <<"Ecco le domande:" << endl << endl;
    cout << "Domande sulla casa:" << endl << "1. Quante persone vivono con te?" << endl;
    cout << "a. 1" << endl << "b. 2" << endl << "c. 3" << endl << "d. 4" << endl << "e. 5 o più" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti = 30;
                 break;
                case 'b' : punti = 25;
                 break;
                case 'c' : punti = 20;
                 break;
                case 'd' : punti = 15;
                 break;
                case 'e' : punti = 10;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d')&&(i!='e'));
    cout << endl << "2. In che modo è riscaldata la tua casa?" << endl;
    cout << "a. gas naturale" << endl << "b. elettricità" << endl << "c. olio combustibile" << endl << "d. energia rinnovabile" << endl << "q. Altro!" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 30;
                 break;
                case 'b' : punti += 40;
                 break;
                case 'c' : punti += 50;
                 break;
                case 'd' : punti += 0;
                 break;
                case 'q' : punti += 10;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d')&&(i!='q'));
    cout << endl << "3. Quante stanze con punti d'acqua (bagno, cucina, lavanderia, balcone) ci sono nella casa tua?" << endl;
    cout << "a. meno di 3" << endl << "b. 3 - 5" << endl << "c. 6 - 8" << endl << "d. 8 - 10" << endl << "e. più di 10" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 5;
                 break;
                case 'b' : punti += 10;
                 break;
                case 'c' : punti += 15;
                 break;
                case 'd' : punti += 20;
                 break;
                case 'e' : punti += 25;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d')&&(i!='e'));
    cout << endl << "4. In che tipo di casa abiti?" << endl;
    cout << "a. appartamento/condominio" << endl << "b. villetta" << endl << "q. Altro!" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 20;
                 break;
                case 'b' : punti += 40;
                 break;
                case 'q' : punti += 10;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d')&&(i!='q'));
    cout << endl << "Domande sull'alimentazione:" << endl << "Quante volte alla settimana mangi carne o pesce?" << endl;
    cout << "a. 0" << endl << "b. 1 - 3" << endl << "c. 4 - 6" << endl << "d. 7 - 10" << endl << "e. più di 10" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 0;
                 break;
                case 'b' : punti += 10;
                 break;
                case 'c' : punti += 20;
                 break;
                case 'd' : punti += 35;
                 break;
                case 'e' : punti += 50;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d')&&(i!='e'));
    cout << endl << "2. Quanti pasti preparati in casa mangi ogni settimana?" << endl;
    cout << "a. meno di 10" << endl << "b. 10 - 14" << endl << "c. 14 - 18" << endl << "d. più di 18" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 25;
                 break;
                case 'b' : punti += 20;
                 break;
                case 'c' : punti += 15;
                 break;
                case 'd' : punti += 10;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d'));
    cout << endl << "2. Quando acquisti alimenti preferisci prodotti locali?" << endl;
    cout << "a. si" << endl << "b. no" << endl << "c. qualche volta" << endl << "d. raramente" << endl << "e. non lo so" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 5;
                 break;
                case 'b' : punti += 10;
                 break;
                case 'c' : punti += 15;
                 break;
                case 'd' : punti += 20;
                 break;
                case 'e' : punti += 25;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d')&&(i!='e'));
    cout << endl << "Domanda sui acquisti:" << endl << "1. Quanti acquisti importanti (stereo, televisore, computer, auto, elettrodomestic, mobili), ha fatto la tua famiglia negli ultimi 12 mesi?";
    cout << "a. 0" << endl << "b. 1 - 3" << endl << "c. 4 - 6" << endl << "d. più di 6" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 0;
                 break;
                case 'b' : punti += 15;
                 break;
                case 'c' : punti += 30;
                 break;
                case 'd' : punti += 45;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d'));
    cout << endl << "Domande sui trasporti:" << endl << "1. Quale mezzo di trasporto tu e la tua famiglia usate abitualmente?" << endl;
    cout << "a. bicicletta" << endl << "b. utilitaria" << endl << "c. ciclomotore" << endl << "d. berlina" << endl << "e. macchina sportiva, monovolume, famigliare" << endl << "f. van, utility vehicle, fuoristrada" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 15;
                 break;
                case 'b' : punti += 35;
                 break;
                case 'c' : punti += 60;
                 break;
                case 'd' : punti += 75;
                 break;
                case 'e' : punti += 100;
                 break;
                case 'f' : punti += 130;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d')&&(i!='e')&&(i!='f'));
    cout << endl << "2. Con che mezzo ti rechi a scuola?" << endl;
    cout << "a. automobile" << endl << "b. mezzi pubblici" << endl << "c. motorino" << endl << "d. a piedi" << endl << "e. in bicicletta" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 50;
                 break;
                case 'b' : punti += 25;
                 break;
                case 'c' : punti += 20;
                 break;
                case 'd' : punti += 0;
                 break;
                case 'q' : punti += 15;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d')&&(i!='q'));
    cout << "3. Dove hai passato le vacanze nel corso dell'ultimo anno?" << endl;
    cout << "a. niente vacanze" << endl << "b. nella mia regione" << endl << "c. in Italia" << endl << "d. in Europa" << endl << "e. in un altro continente" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 0;
                 break;
                case 'b' : punti += 10;
                 break;
                case 'c' : punti += 30;
                 break;
                case 'd' : punti += 40;
                 break;
                case 'e' : punti += 70;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d')&&(i!='e'));
    cout << "4. Quante volte la tua famiglia utilizza l'automobile per il fine settimana?" << endl;
    cout << "a. 0" << endl << "b. 1 - 3" << endl << "c. 4 - 9" << endl << "d. 7 - 9" << endl << "e. più di 9" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 0;
                 break;
                case 'b' : punti += 10;
                 break;
                case 'c' : punti += 20;
                 break;
                case 'd' : punti += 30;
                 break;
                case 'e' : punti += 40;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d')&&(i!='e'));
    cout << "Domande sui rifiuti:" << endl << "1. Fai la riduzione dei rifiuti (per esempio preferisci imballaggi ridotti, rifiuti l'invio di posta pubblicità, preferisici contenitori riutilizzabili)?" << endl;
    cout << "a. sempre" << endl << "b. qualche volta" << endl << "c. raramente" << endl << "d. mai" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 0;
                 break;
                case 'b' : punti += 10;
                 break;
                case 'c' : punti += 15;
                 break;
                case 'd' : punti += 20;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d'));
    cout << "2. Quanti sacchi della spazzatura produce la tua famiglia in totale ogni settimana?" << endl;
    cout << "a. 2 sacchi" << endl << "b. 3 sacchi" << endl << "c. 4 sacchi" << endl << "d. più di 4 sacchi" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 0;
                 break;
                case 'b' : punti += 5;
                 break;
                case 'c' : punti += 10;
                 break;
                case 'd' : punti += 20;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d'));
    cout << "3. Ricicli giornali, le bottiglie di vetro e quelle di plastica?" << endl;
    cout << "a. sempre" << endl << "b. qualche volta" << endl << "c. raramente" << endl << "d. mai" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 5;
                 break;
                case 'b' : punti += 10;
                 break;
                case 'c' : punti += 15;
                 break;
                case 'd' : punti += 20;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d'));
    cout << endl << "Domande sull'igiene e divertimenti:" << endl << "1. Quanto spende la tua famiglia mediamente ogni mese per l'abbigliamento?" << endl;
    cout << "a. 100 uero" << endl << "b. 100 - 250 euro" << endl << "c. 250 - 500 euro" << endl << "d. più di 500 euro" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 5;
                 break;
                case 'b' : punti += 10;
                 break;
                case 'c' : punti += 15;
                 break;
                case 'd' : punti += 20;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d'));
    cout << "2. Quanto spende la tua famiglia mensilmente per divertimenti?" << endl;
    cout << "a. 50 euro" << endl << "b. 50 - 100 euro" << endl << "c. 100 - 200 euro" << endl << "d. più di 200 euro" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 5;
                 break;
                case 'b' : punti += 10;
                 break;
                case 'c' : punti += 15;
                 break;
                case 'd' : punti += 20;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d'));
    cout << "3. Quanti minuti stai sotto la doccia?" << endl;
    cout << "a. 5 minuti" << endl << "b. 10 minuti" << endl << "c. 15 minuti" << endl << "d. più di 15" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 5;
                 break;
                case 'b' : punti += 10;
                 break;
                case 'c' : punti += 15;
                 break;
                case 'd' : punti += 20;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d'));
    cout << "4. Quando ti lavi i denti?" << endl;
    cout << "a. utilizzi il rubinetto con acqua a flusso continuo" << endl << "b. utilizzi lo spazzolino elettrico" << endl << "c. utilizzi rubinetto con acqua a flusso intermittente" << endl << "d. utilizzi il bicchiere per il risciacquo" << endl;
    do
    {
        cout << "La tua risposta è : ";
        cin >> i;
            switch (i)
            {
                case 'a' : punti += 5;
                 break;
                case 'b' : punti += 10;
                 break;
                case 'c' : punti += 15;
                 break;
                case 'd' : punti += 10;
                 break;
                default : cout << "Inserisci un carattere corretto" << endl;
            }
    } while ((i!='a')&&(i!='b')&&(i!='c')&&(i!='d'));
    cout << "Il risultato di " << nome << " " << cognome << " è ";
    if (punti<120)
    {
        cout << "impronta ecologica inferiore a 4 ettari" << endl;
    }
    if ((punti>=120)&&(punti<=320))
    {
        cout << "impronta ecologica tra 4 e 6 ettari" << endl;
    }
    if ((punti>320)&&(punti<=520))
    {
        cout << "impronta ecologica tra 6 e 7.7 ettari" << endl;
    }
    if ((punti>520)&&(punti<=720))
    {
        cout << "impronta ecologica tra 7.7 e 10 ettari" << endl;
    }
    cout << endl << "L’impronta ecologica media mondiale richiesta dagli scienziati è di 1.7 ettari a persona;" << endl << "per ottenere una punteggio inferiore a 4 ettari è indice di un comportamento eco-sostenibile." << endl;
    cout << endl << "Vuoi vedere il codice? [y/n]: ";
    cin >> i;
    while ((i!='y')&&(i!='n')) {
        cout << "Inserisci un valore valido [y/n]" << endl << ": ";
        cin >> i;
    }
    if (i=='y')
    {
        cout << "Vai su https://eletronico2.github.io/OpenDay2024.html" << endl;
    }
    return 0;
}
