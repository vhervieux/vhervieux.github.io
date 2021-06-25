---
title:  "Radio mcHF"
categories: Radio
permalink: /pages/radio-mcHF.html
---
J'ai acquis en mars 2021 [un kit mcHF de M0NKA](http://www.m0nka.co.uk). C'est un petit tranceiver SDR qui couvre l'ensemble de la bande HF radioamateur.

Il est a assembler soi-même et son code est open-source [https://df8oe.github.io/UHSDR/](https://df8oe.github.io/UHSDR/)! Vous comprendez donc pourquoi j'ai pensé que ce petit émetteur/recepteur serait parfait comme premier poste radioamateur!

J'ai acheté le kit avec la plupart des composants CMS déjà soudés. Il restera toutefois à souder comme composant CMS:

- les relais (fournis).

- une résistance de 680 ohms pour alimenter un micro electret (non fournie)

- le MCP9801 en boitier SOP8 (non fourni) qui sert à mesurer la température du TCXO.

Une fois le kit reçu, il faut avouer que ce n'est pas de suite gagné pour le mettre en route, car:

- La documentation d'assemblage en ligne date un peu, heureusement le forum auquel vous êtes inscrit lors de l'achat du kit: [https://groups.io/g/mcHF](https://groups.io/g/mcHF) est très actif. Il faut aussi regarder la vidéo d'OM0ET sur l'assemblage du mcHF, très instructive, que j'ai suivi de très près sauf pour la self RC8 où il ne faut qu'un tour, pour les ponts power meter/SWR où j'ai utilisé le bout de câble coaxial fourni, et pour l'écran, où je n'ai pas limé les headers.

- il faut également un analyseur de réseau vectoriel pour mettre au point les filtres passe-bas à bobiner soi même. J'ai pour ma part acheté un [NanoVNA](https://nanovna.com/?page_id=21), et je ne regrette pas! Je ne vois pas comment on peut faire sans, sachant que simplement jouer sur l'écartement des spires d'une seule bobine fait varier de plusieurs centaines de kHZ la fréquence de coupure. Avec trois bobine, par filtre, ça fait plus d'un MHz de variation. 

- le boitier n'est pas fourni et le concepteur Chris M0NKA conseille même de l'acheter sur Aliexpress. Le boitier vient avec sa visserie, mais manque de chance pour moi (et je ne suis pas le seul) les entretoises fournies ne sont pas toutes adéquates.

- il faut acheter une résistance de 680 ohms CMS (d'ailleurs ça se vend par 100, il m'en reste 99 si vous êtes intéressés).

- il faut acheter le MCP9801 (le mien provient d'Aliexpress) et fonctionne correctement.

- il faut éviter de souder l'écran directement sur la carte UI car il est extremenent fragile!!! (Je l'ai déjà cassé!) Donc pour se faire, il faut acheter des headers au pas de 2mm qui sont moins courant que ceux de 2,54mm. et "opérer" l'écran pour racourcir ses pattes. Idem, il me reste des headers, si un OM en veut.

TO BE CONTINUED


