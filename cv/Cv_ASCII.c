/**
 *************************************************************************************************************
 * @file            CV_Vincent_HERVIEUX.c
 * @author          Vincent HERVIEUX
                    vincent.hervieux@free.fr
                    32 ans  -  Marié
                    tél.: 0651881604
 *************************************************************************************************************
 * @brief           Ingénieur logiciel C/C++ sur Linux
 *************************************************************************************************************
 */


/**
 * @struct          Formation
 * @brief           Ingénieur INSA de Rennes en électronique et systèmes de communication. 
 */                                                                                                                                   
struct Formation{
    2012        ;   /**< OpenWide: Formation Linux embarqué – Linux temps réel par Pierre Ficheux de 4jours. */
    2009        ;   /**< EGILIA:  Formation Java J2SE de 2 semaines (preparation au SCJP).                   */
    2004-2001   ;   /**< INSA de Rennes: Master en électronique et systèmes de communication, option réseaux.*/
                    /**< Université de Rennes I: DEA en Electronique (en parallèle de l'INSA).               */
                    /**< ESC Rennes: business ingénieur (en parallèle de l'INSA).                            */
    1999-2001   ;   /**< IUT de Rennes: DUT Genie Electrique et Informatique industrielle.                   */
};

/**
 * @struct          Compétences
 * @brief           9 ans d’expérience en développement/intégration C/C++ Linux.
 */
struct Compétences{
    OS          ;   /**< Linux, Windows (but mainly Linux!).                                                 */
    OS cibles   ;   /**< Linux, RTXC Quadros, Symbian.                                                       */
    Cibles      ;   /**< ARM, Power Quicc, x86.                                                              */
    Langages    ;   /**< C, C++, bash, Python, Java, Perl.                                                   */
    Versioning  ;   /**< SVN, Clearcase, Quilt.                                                              */
    Software    ;   /**< Eclipse, Carbide, Netbeans.                                                         */
    Hardware    ;   /**< Analyseurs logiques (Lauterbach, HP16900).                                          */
    Télécom     ;   /**< 2G/3G; réseaux IP, 802.11, MIL-STD-1553; ARINC 429.                                 */
    Langues     ;   /**< Anglais courant, Russe scolaire.                                                    */
};

/**
 * @struct          Expériences
 * @brief           SAGEMCOM – 2 ans en développement C Linux embarqué
 *                  REALWEB – 2 ans en développement C/C++ Linux
 *                  MOTOROLA – 4 ans et demi en développement C/C++ embarqués
 */
struct Expériences{
    /**
     * @enum            SAGEMCOM
     * @date            2011-2013
     * @brief           Développement, C, Linux embarqué,  Buildroot, Processeur x86, SVN,  Bugzilla.
     * @location        Cesson-Sévigné (35). 
     */
    enum {
        /* Etude et développement de nouvelles fonctionnalités sur décodeur TV pour la roadmap produit:      */
            Etude des spécifications fonctionnelles,
            Développement C embarqué sur x86,
            Toolchain Intel intégrée dans Buildroot,
            Pilotage d'un device de cryptographie par blocs,
            Conception du driver d’écran OLED,
            Développement de l’application gérant le refroidissement du CPU, HDD et Bluray,
            Etude et reprise de l’existant,
            Conception de couche d’abstraction (chargée via LD_PRELOAD) pour réutiliser des briques existantes,
            Développement de la correction FEC,
            Réalisation de tests unitaires, de tests d’API et d’intégration,
            Collaboration avec les équipes d’intégration et de développement,
        /* Correction de bugs produit:                                                                       */
            Etude des rapports bugzilla;
            Reproduction, investigation des conditions d’erreurs (GDB, valgrind),
            Développement C de la correction,
            Réalisation de tests unitaires et fonctionnels,
            Support client sur site
    } SAGEMCOM;

    /**
     * @enum          REALWEB
     * @date            2009-2011
     * @brief           C/C++, Linux x86_64, lib Boost, FCGI, Hudson, Pig/Hadoop.
     * @location        Saint Pétersbourg (Russie). 
     */
    enum {
        /* Développement de fonctionnalités sur serveurs Linux Gentoo:                                       */
            Définition des fonctionnalités à implémenter avec l’équipe commerciale,
            Ré-architecture complète du code existant,
            Conception et développement en C/C++ des services FCGI,
        /* Maintenance, correction de bugs produit:                                                          */
            Collaboration avec l’équipe d’administration serveurs,
            Reproduction, investigation des conditions d’erreurs sur serveurs clones,
            Développement des correctifs en C/C++,
            Rédaction et réalisation de tests fonctionnels sur serveur de build/tests Hudson,
        /* Valorisation des statistiques serveurs:                                                           */
            Analyse des logs serveurs disponibles,
            Définition des algorithmes de calcul des statistiques,
            Mise en place d’un cluster Hadoop de 5 serveurs,
            Implémentation en script PIG du traitement statistique
    } REALWEB;

    /**
     * @enum          ISIS-MPP
     * @date            2009
     * @brief           C/C++, PowerQuicc, Linux, GCC.
     * @location        Toulouse (31). 
     */
    enum {
        /* Développement en C++/C d'application embarquée sur PowerQuicc MPC837x:                            */
            Enregistrement temps réel (Kernel patché preempt-rt) du trafic avion IP et ARINC 429,
            Validation du boitier complet par des tests Python,
            Recette client (Airbus),
        /* Développement en C d’un driver et de son API de carte MIL-STD-1553:                               */
            Mise au point de la carte avec l’équipe hardware,
            Intégration sur le banc de test de l’A350
    } ISIS-MPP;

    /**
     * @enum          MOTOROLA Mobile Devices
     * @date            2004-2008
     * @brief           C/C++, Freescale, ARM9, ARM11, Clearcase, DDTS, Perl, Python.
     * @location        Toulouse (31). 
     */
    enum {
        /* Développement sur le driver modem licensee ETEL et TSY sur OS Symbian:                            */
            Reprise du code existant après fin de contrat avec Symbian,
            Développement C++ (Symbian) embarqué sur ARM11,
            Management de tierces companies (Teleca, Symbian),
        /* Développement de Unlicensed Mobile Access sur terminaux 2G et 3G mobiles:                         */
            Participation à la conception du premier mobile Motorola UMA,
            Développement C embarqué sur couches protocolaires L1 & RR,
            Intégration de la fonctionnalité sur ARM9,
            Support client sur site (British Telecom),
            Implémentation de UMA Enhanced Measurement Report,
            Réarchitecture de L1/RR pour le deuxième produit UMA over Wifi,
            Maintenance logicielle de la stack protocolaire jusqu'à mise en production du produit,
        /* Améliorations du code pour réduire la consommation des terminaux UMTS:                            */
            Analyse des indicateurs de performance,
            Amélioration du mécanisme de sélection de cellules 3G,
        /* Correction de bugs produit:                                                                       */
            Etude des rapports DDTS,
            Reproduction via tests unitaires en C, Perl ou Python,
            Investigation des conditions d’erreurs via DDD, ou analyseur logique,
            Développement C de la correction sur RTXOS (cible Freescale starcore140)
    } MOTOROLA;
};

