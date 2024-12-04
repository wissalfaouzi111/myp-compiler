# Compilateur MyP

## **Avancement**
On a fini par implementer les fonctionnalités des phases **I à VI**  :

1. **Gestion des expressions arithmétiques simples avec constantes**  
Cette phase repose surtout sur la gestion des conversions des types , 

2. **Gestion/vérification/conversions de types**  
si un des types est un float ,il faut tout convertir en float avant d'appliquer l'opération


3. **Gestion des variables globales**  
il faut creer un offset pour chaque variable pour localiser sa position par rapport au BP (bloc pointer )
ainsi chaque variable global

4. **Gestion des branchements**  
 
5. **Gestion des sous-blocs**  
  
6. **Gestion des appels de fonctions**


## **Compilation**
Exécutez :  
```bash
make
```


## **Exécution d’un programme MyP (Exemple 1.1)**

1. **Afficher le résultat dans la console** :  
   ```bash
   ./myp < test/test1.1.myp
   ```
   Cette commande compile le fichier MyP et affiche directement le résultat de son exécution dans la console

2. **Générer un fichier P-Code** :  
   ```bash
   ./run test1.1
   ```
   Cette commande génère un fichier P-Code nommé `test/test1.1_pcode.c`