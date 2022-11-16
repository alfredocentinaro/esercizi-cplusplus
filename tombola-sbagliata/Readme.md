Una tombola "sbagliata" dove estraiamo a caso una serie di numeri. Ad ogni estrazione si deve verificare se 
il numero estratto fa ambo con uno dei numeri già estratti precedentemente, ovvero se è un doppione. 
In caso un numero viene estratto tre volte il gioco si arresta.

Algoritmo di massima:
- Estraggo il numero casuale
- Scorro il vettore dei numeri estratti e cerco se il numero è presente
- Se non è presente, lo inserisco nel vettore dei numeri estratti
- Se il numero è presente devo fare due cose:
- Scorro il vettore dei doppioni e cerco se il numero sia presente anche li
- Se il numero non è presente nel vettore dei doppioni lo inserisco (è la seconda volta che estraggo quel numero)
- Se il numero estratto è presente anche nel vettore dei doppioni vuol dire che è la terza volta che lo estraggo e devo uscire dal programma
