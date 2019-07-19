---
layout: home
author_profile: true
title: "Curriculum Vitae"
permalink: /resume/
---

# Ingénieur Electronique et systèmes de Communication

## Profil

Sorti d’école d’ingénieur avec un diplôme orienté éléctronique et télécommunications,  le contexte aidant, mon expérience professionnelle est principalement dans le développment bas niveau avec différents niveaux d’intervention : 

architecture, développement, intégration, support. 

En parallèle et à titre personnel j’ai continué l’electronique et les expériences radio.

[https://gitlab.com/croutor](https://gitlab.com/croutor)

[https://github.com/croutor](https://github.com/croutor)

## EXPERIENCES SIGNIFICATIVES

 - Motorola – 4,5 ans en développement C/C++ embarqué : Notamment sur la couche L1 du modem.
 - Realweb – 2 ans en développement C++/Hadoop Linux : Mise en place du système de publicité contextuel « Adhands » et analyse des données via script "Pig/Hadoop"
 - SagemCom – 3 ans en développement C/C++ Linux embarqué : 2 décodeurs TV pour Orange et développement des couches basses de Netflix.
 - Hoppen - 2 ans en responsable HW: portage d'installeurs Bash en "Ansible" 

## FORMATIONS

| Date | Diplôme |
|------|---------|
| 2016 | Formation Scrum master. Certifié PSM1 |
| 2012 | Formation Linux embarqué – Linux temps réel par Pierre Ficheux. |
| 2009 | Formation EGILIA de 2 semaines à J2SE |
| 2004 | Ingénieur Électronique et Systèmes de Communications, INSA de Rennes |
| 2004 | DEA Électronique, INSA de Rennes |
| 2001 | DUT Électrique et Informatique Industrielle, IUT de Rennes |

## CONNAISSANCES

| Catégorie | Outils, langages |
|-----------|------------------|
| Développement | C, C++, Shell, Ansible, Python, NodeJS, Perl, Java |
| IDE | Vim, Vscode, Eclipse, Pycharm, Netbeans |
| Cibles matérielles | Processeur x86, ARMx, PowerQuicc, ATMEL, STM32 |
| Débogage | GDB (et son UI DDD), valgrind |
| Test & validation | Ecriture de tests en C, Python, NodeJS - Bugzilla, DDTS, RobotFramework, Jenkins|
| Gestion de configuration | Git, SVN, Clearcase, quilt |
| Environnement | Linux, Linux embarqué (Buildroot, Yocto), RTXOS |
| Normes, Protocoles | 2G/3G; IP networks, 802.11, MIL-STD-1553; ARINC 429 |
| Méthodologies | Cycle en V, Agile Scrum, Kanban, 6 sigma, Lean |
| Equipements de laboratoire | Oscilloscope, Analyseurs de spectres, GBF, Géné HF |

## EXPERIENCES DETAILLEES

### Télécom Santé/Hoppen - Responsable HW

*Cesson-Sévigné - Juillet 2017 à aujourd’hui (2 ans)*

- Adaptation de la solution sur les nouveaux matériels. (Configurations, drivers)
- Suivi de la fabrication de cartes spécifiques.
- Portage de l’installeur legacy Bash en Ansible
- Développement d’un service de cache de VOD (Docker et NodeJS)

**Env. Technique: Développement C/NodeJS/Shell/Ansible, Docker, git**

### Envivio-Ericsson via Conserto - Développeur C++, intégrateur

*Rennes - Juin 2015 à Juillet 2017 (18 mois)* 

- Étude de la solution de licences Reprise
- Architecture et développement de la solution Reprise sur le logiciel d'encodage vidéo « Muse ».
- Intégration des composantes de la GUI unifiée (django et RabbitMQ).
- Étude de la solution de licences Safenet (utilisée par Ericsson)

**Env. Technique: Développement/intégration C++, Shell, Processeur x86_64, SVN**

### DGA-MI via Sogeti High Tech - Développeur C++/Java

*Cesson-Sévigné - Décembre 2014 (1 mois)*

Etude de portage d'une application d'étude de propagations (Java + JNI Windows XP sur Windows 7 64 bits).

**Env. Technique:  Développement C++/Java sous Windows (pas glob) Processeur x86_64, SVN**

### BSH via Sogeti High Tech - Développeur C++/Qt

*Cesson-Sévigné - Novembre 2014 (1 mois)*

Conception du logiciel d’automatisation des pesées dans un entrepôt de BSH (Bosch Siemens Home appliances Group)

**Env. Technique: Développement, C++, QT, Processeur x86_64, SVN**

### SAGEMCOM via Sogeti High Tech - Développeur C

*Cesson-Sévigné - Octobre 2011 à Octobre 2014 (3 ans)*
 
Développement de nouvelles fonctionnalités sur décodeur TV :
  - Développement C embarqué sur x86.
  - Chaînes de compilation Intel/ST/Broadcom intégrées sous Buildroot.
  - Mise en place de Netflix sur STB Sagemcom :
    - Intégration sous Buildroot des briques nécessaires à Netflix.
    - Développement en C++ de la DPI Netflix.
    - Développement des démos clients (Orange, Bouygues, SFR).
    - Mise en œuvre du décryptage  DRM Microsoft Playready.
    - Encapsulation de ES en PES pour le pipeline de la STB.

  - Conception driver kernel d’écran OLED avec rafraîchissements optimisés.
  - Développement de l’application gérant le refroidissement du CPU, HDD et Bluray.
  - Développement de la correction FEC (driver kernel sur parseur RTP).

Conceptions produits avec valorisation de l'existant :
  - Étude des spécifications fonctionnelles des nouvelles STB Orange.
  - Étude et reprise de l’existant (anciens boitiers Orange).
  - Conception d'une couche en LD_PRELOAD pour réutiliser des briques SagemCom existantes.
  - Développement en C de la solution sur GNU/Linux embarqué.
  - Réalisation de tests unitaires, de tests d’API (H3TA) et d’intégration sous Buildroot.
  - Collaboration avec les autres équipes (Intel, BroadCom, Soft@Home).

Correction de bugs produit
  - Étude des rapports Bugzilla.
  - Reproduction, Investigation des conditions d’erreurs.
  - Développement en C des corrections.
  - Réalisation de tests unitaires.
  - Support client sur site Orange.

**Env. Technique: Développement, C, C++, GNU/Linux embarqué,  Buildroot, Processeur x86, SVN, Bugzilla**

### REALWEB - Développeur C++, Pig/Hadoop

*Saint-Petersbourg - Octobre 2009 à Août 2011 (2 ans)*

Développement de fonctionnalités sur serveurs:

  - Ré-architecture complète du code existant.
  - Environnement avec de fortes contraintes multithreads liées à la charge.
  - Conception et développement en C/C++ des services FastCGI derrières Nginx.
  - Définition des fonctionnalités à implémenter avec l’équipe commerciale.
  - Architecture et développement des nouvelles fonctionnalités :
    - bannières personnalisées,
    - hash des paramètres,
    - rotation des bannières par utilisateur,
    - mise en place de redis pour cacher les entrées de DB les plus usitées,
    - développement de black list et filtrage des bots.
    - Remplacement de ACE logging par boost log.
    - etc.

Valorisation des statistiques serveurs :
  - Analyse des logs serveurs disponibles issus des services FastCGI.
  - Définition des algorithmes de calcul des statistiques.
  - Mise en place d’un cluster Apache Hadoop de 5 serveurs.
  - Implémentation en scripts Apache Pig des algorithmes.

Maintenance, correction de bugs produit
  - Collaboration avec l’équipe d’administration serveurs.
  - Analyse des problèmes traqués sous Jira et reproduction sur serveurs clones.
  - Développement des correctifs en C/C++.
  - Rédaction et réalisation de tests fonctionnels sur serveur de builds/tests Hudson.

**Env. Technique: Développement C/C++, Pig/Hadoop, Linux x86_64, lib Boost, FCGI, Hudson (Jenkins) SVN, Jira**

### ISIS-MPP via Aptus, Développement C/C++

*Toulouse - Février 2009 à Août 2009 (6 Mois)*

Développement en C++ d'une application embarquée sur PowerQuicc MPC837x
  - Log en temps réel (Kernel patché preempt-rt) le trafic avion IP et ARINC 429.
  - Validation du boîtier complet par des tests Python (chargeant une librairie d'API).
  - Recette client (Airbus).

Développement en C d’un driver Kernel et de son API de carte MIL-STD-1553
  - Mise au point de la carte avec l’équipe hardware.
  - Carte PCI avec transferts DMA pour récupération des données.
  - Intégration sur le banc de test de l’A350.

**Env. Technique: Développement C/C++, Freescale PowerQuicc, Linux x86_64, GCC SVN, Bugzilla**

### MOTOROLA - Développement C/C++

*Toulouse - Août 2004 à Janvier 2009 (4 ans et demi)*

Développement sur le driver modem licensee ETEL et TSY sur OS Symbian
  - Reprise du code existant après fin de contrat avec Symbian.
  - Développement C++ (Symbian) embarqué sur ARM11.
  - Management de compagnies tierces (Teleca, Symbian).

Développement de Unlicensed Mobile Access sur terminaux 2G et 3G mobiles
  - Participation à la conception du premier mobile Motorola UMA.
  - Développement C embarqué sur couches protocolaires L1 & RR.
  - Intégration de la fonctionnalité sur ARM9.
  - Support client sur site.
  - Implémentation de UMA Enhanced Measurement Report.
  - Ré-architecture de L1/RR pour le deuxième produit UMA over Wifi.
  - Maintenance logicielle de la stack protocolaire jusqu'à mise en production du produit.

Améliorations du code pour réduire la consommation des terminaux UMTS
  - Analyse des indicateurs de performance.
  - Amélioration du mécanisme de sélection de cellules 3G.

Correction de bugs produit
  - Étude des rapports DDTS.
  - Reproduction via tests unitaires en C, Perl ou Python.
  - Investigation des conditions d’erreurs via DDD, ou analyseur logique.
  - Développement C de la correction sur RTXOS, cible Freescale starcore140.

**Env. Technique: Développement C/C++, Perl, Python, Freescale, ARM9, ARM11, Clearcase, DDTS**

