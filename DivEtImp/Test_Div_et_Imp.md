# Test Divide Et Impera

### Generare Simbol
Folosind metoda Backtracking se genereze toate sirurile formate din 4 caractere din multimea {#, \*, &, @, %}. Care este solutia inainte de &\*#@? Cate solutii se pot genera in total tinand cont de aceste reguli?

&*#&


### Cercul Vietii
Se da urmatoarea structura de date care reprezinta coordonatele carteziene ale unui punct in planul xOy.

    typedef struct {
        float x, y;
    } punct;
    punct p;

Scrieti o expresie care are valoarea **true / 1** daca punctul p este situat in cadranul I sau III 

    (p.x < 0 && p.y < 0) || ( p.x > 0 && p.y > 0 )

    sau MS p.x*p.y>0;

### Palindrom
Se dă un șir de n numere intregi. Folosind metoda Divide et Impera, să se determine câte dintre numerele șirului dat sunt numere palindrom

### Criminali si Zane
O sectie de politie are la sectie mai multi indivizi suspectati de crima. Fiecare suspect are un Tag(nr natural). Pentru a se putea intoarce la mancat gogosi, va lasa pe voi responsabili de gasirea adevartului criminal.
- Introduceti suspectii in baza de date(citire fisier n, c1, c2 .. cn) si sortatii dupa tag (orice metoda dorita)
- O zana va sopteste ca adevaratul criminal ar avea tag-ul **x**(citit de la tastatura). Atentie, criminalul nu lucreaza singur si a infiltrat persoane cu tag-uri printre suspecti, astfel aparand tag-uri duplicate. Gasiti criminalul afisand pe ecran prima pozitie a tag-ului **x**.