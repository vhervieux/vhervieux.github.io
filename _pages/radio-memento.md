---
title:  "Radio memento"
categories: Radio
permalink: /pages/radio-memento.html
---
Memento Radioamateur.

# Alphabet phonétique international

|A|Alpha|
|B|Bravo|
|C|Charlie|
|D|Delta|
|E|Echo|
|F|Foxtrot|
|G|Golf|
|H|Hotel|
|I|India|
|J|Juliet|
|K|Kilo|
|L|Lima|
|M|Mike|
|N|November|
|O|Oscar|
|P|Papa|
|Q|Quebec|
|R|Romeo|
|S|Sierra|
|T|Tango|
|U|Uniform|
|V|Victor|
|W|Whiskey|
|X|X-ray|
|Y|Yankee|
|Z|Zulu|

# Classes d'Emission

| Première lettre: Modulation                                                  |
|------------------------------------------------------------------------------|
| A : Modulation d'amplitude, double bande latérale, porteuse normale          |
| B : Modulation d'amplitude, bandes latérales indépendantes, porteuse normale |
| C : Modulation d'amplitude, bande latérale résiduelle                        |
| F : Modulation de fréquence                                                  |
| G : Modulation de phase                                                      |
| J : Modulation d'amplitude, bande latérale unique, porteuse supprimée        |
| R : Modulation d'amplitude, bande latérale unique, porteuse réduite          |

| Chiffre: Signal modulant                                  |
|-----------------------------------------------------------|
| 1 : Signal numérique sans emploi d'une porteuse modulante |
| 2 : Signal numérique avec emploi d'une porteuse modulante |
| 3 : Signal analogique                                     |
| 7 : Plusieurs voies numériques                            |
| 8 : Plusieurs voies analogiques                           |
| 9 : Plusieurs voies analogiques et numériques             |


| Deuxième lettre: Information transmise  |
|-----------------------------------------|
| A : Télégraphie à réception auditive    |
| B : Télégraphie à réception automatique |
| C : Fac-similé                          |
| D : Données                             |
| E : Téléphonie                          |
| F : Télévision                          |

| Classe d'émission | Signification |
|-------------------|---------------|
| A1A | Télégraphie à réception auditive, Signal numérique sans emploi d'une porteuse modulante, Modulation d'amplitude, double bande latérale, porteuse normale |
| A1B | Télégraphie à réception automatique, Signal numérique sans emploi d'une porteuse modulante, Modulation d'amplitude, double bande latérale, porteuse normale |
| A1D | Transmission de données, Signal numérique sans emploi d'une porteuse modulante, Modulation d'amplitude, double bande latérale, porteuse normale |
| A2A | Télégraphie à réception auditive, Signal numérique avec emploi d'une porteuse modulante, Modulation d'amplitude, double bande latérale, porteuse normale |
| A2B | Télégraphie à réception automatique, Signal numérique avec emploi d'une porteuse modulante, Modulation d'amplitude, double bande latérale, porteuse normale |
| A2D | Transmission de données, Signal numérique avec emploi d'une porteuse modulante, Modulation d'amplitude, double bande latérale, porteuse normale |
| A3E | Téléphonie, Signal analogique, Modulation d'amplitude, double bande latérale, porteuse normale |
| A3F | Télévision, Signal analogique, Modulation d'amplitude, double bande latérale, porteuse normale |
| A3C | Fac-similé, Signal analogique, Modulation d'amplitude, double bande latérale, porteuse normale |
| C3F | Télévision, Signal analogique, Modulation d'amplitude, bande latérale résiduelle |
| F1A | Télégraphie à réception auditive, Signal numérique sans emploi d'une porteuse modulante, Modulation de fréquence |
| F1B | Télégraphie à réception automatique, Signal numérique sans emploi d'une porteuse modulante, Modulation de fréquence |
| F1D | Transmission de données, Signal numérique sans emploi d'une porteuse modulante, Modulation de fréquence |
| F2A | Télégraphie à réception auditive, Signal numérique avec emploi d'une porteuse modulante, Modulation de fréquence |
| F2B | Télégraphie à réception automatique, Signal numérique avec emploi d'une porteuse modulante, Modulation de fréquence |
| F2D | Transmission de données, Signal numérique avec emploi d'une porteuse modulante, Modulation de fréquence |
| F3C | Fac-similé, Signal analogique, Modulation de fréquence |
| F3E | Téléphonie, Signal analogique, Modulation de fréquence |
| F3F | Télévision, Signal analogique, Modulation de fréquence |
| G1D | Transmission de données, Signal numérique sans emploi d'une porteuse modulante, Modulation de phase |
| G2D | Transmission de données, Signal numérique avec emploi d'une porteuse modulante, Modulation de phase |
| G3C | Fac-similé, Signal analogique, Modulation de phase |
| G3E | Téléphonie, Signal analogique, Modulation de phase |
| G3F | Télévision, Signal analogique, Modulation de phase |
| R3C | Fac-similé, Signal analogique, Modulation d'amplitude, bande latérale unique, porteuse réduite |
| R3D | Transmission de données, Signal analogique, Modulation d'amplitude, bande latérale unique, porteuse réduite |
| R3E | Téléphonie, Signal analogique, Modulation d'amplitude, bande latérale unique, porteuse réduite |
| J1D | Transmission de données, Signal numérique sans emploi d'une porteuse modulante, Modulation d'amplitude, bande latérale unique, porteuse supprimée |
| J2C | Fac-similé, Signal numérique avec emploi d'une porteuse modulante, Modulation d'amplitude, bande latérale unique, porteuse supprimée |
| J3E | Téléphonie, Signal analogique, Modulation d'amplitude, bande latérale unique, porteuse supprimée |
| J7B | Télégraphie à réception automatique, Plusieurs voies numériques, Modulation d'amplitude, bande latérale unique, porteuse supprimée |

# Classes de Puissance

| Bande | Puissances crête en W |
|-------|-----------------------|
| F < 28 MHz | 500 W |
| 28 < F < 29,7 MHz | 250 W |
| F > 29,7 MHz | 120 W |

Note concernant la puissance:

Il s'agit de la puissance en crête de modulation en modulant l'émetteur à sa puissance de crête par deux signaux sinusoïdaux (SSB) et en puissance porteuse pour les autres types de modulation.

# ROS, TOS, TR

## transformation ROS > TOS : 
```
TOS = ROS -1 / ROS + 1 
```
Exemple:
Un ROS de 3 donne un TOS de 0.5
``` 
3-1 / 3+1 = 2 / 4 = 1/2
```

## transformation TOS > taux de puissance réfléchie :
```
TR = TOS²
```
Exemple:
Un TOS de 0.5 donne un taux de puissance réfléchie de 0.25:
```
 (1/2)² = 1/4 ; 
```

## puissance réfléchie
```
puissance réfléchie = Puissance émise x taux de puissance réfléchie
```
Exemple:
Une puissance de 4 watts émise, avec un taux de puissance réfléchie de 0.25, donne 1W réfléchi:
```
4 W x (1/4) = 1 W
```

