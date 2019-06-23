#include <stdio.h>
#include <stdlib.h>
#include "caracteristique.h"
#include "sauvegarde.h"
#include "plante.h"
#include <time.h>
#include <winsock.h>
#include <MYSQL/mysql.h>

int main()
{

    //Déclaration du pointeur de structure de type MYSQL
    MYSQL mysql;
    //Initialisation de MySQL
    mysql_init(&mysql);
    //Options de connexion
    mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");

    //Si la connexion réussie...
    if(mysql_real_connect(&mysql,"127.0.0.1","root","","plante",0,NULL,0))
    {
        mysql_query(&mysql, "SELECT * FROM plante");
        MYSQL_RES *result;
        MYSQL_ROW row;

        result = mysql_store_result(&mysql);
        printf("BIENVENUE SUR CONNECTED FLOWERS\n");
        printf("MENU PRINCIPAL\n");
        printf("1. Choix des plantes\n");
        printf("2. A propos\n");
        printf("3. Comment ca marche\n");
        printf("4. Quitter\n");

        int choix_menu;
        scanf("%d",&choix_menu);

        if (choix_menu==1){
        system("cls");


        int choice;
        while(choice < 1 || choice > 30){
            while ((row = mysql_fetch_row(result)))
            {
                printf("%s %s\n",row[0],row[1]);
            }
            printf("Choisis une plante ?\n");
            scanf("%d",&choice);
            system("cls");
        }
        choice -= 1;
        mysql_data_seek(result, choice);

        row = mysql_fetch_row(result);

        char *nom_plante = row[1];
        char *benefique = row[5];
        int *taille_min = row[2];
        int *taille_max = row[3];
        char *couleur = row[4];
        int *humidite = row[6];
        int *luminosite = row[7];
        int *temperature = row[8];

        plantes(nom_plante,temperature,humidite,luminosite,benefique,taille_min,taille_max,couleur,12,12,12);

        //Libération du jeu de résultat
        mysql_free_result(result);

        //Fermeture de MySQL
        mysql_close(&mysql);
        }
        else if (choix_menu == 2)
        {
            system("cls");
            printf("Tout a commencer en 2016,\n3 etudiants, fraichement diplomer et partageant la meme passion pour la puissance de la technologie et la douceur des fleurs, ont decider de tout plaquer pour se consacrer a un seul et unique but faire de vous des mains vertes sans trop d'efforts. Cela fait maintenant 3 ans que connectedflower est implante sur le marche des objets connecte pour vous offrir des objets ultras perfectionner et simple d'utilisation pour accompagner vos plantes et sublimer vos jardins. Voilà vous savez tout.");
        }
        else if (choix_menu == 3)
        {
            system("cls");
            printf("                                                COMMENT CA MARCHE ?\n\n\n");
            printf("---Si tu tape 1 dans le menu, tu pourra choisir la plante de ton choix. Tu pourra voir toute les informations \nde la plante que tu aura selectione.\nSi l'humidite de la terre de la plante est trop faible ou qu'elle est trop expose au soleil,\nil y'aura une alerte qui te dira d'arroser et un historique des conditions quand tu aura arrose la plante s'affichera avec la date.\n\n");
            printf("---Si tu tape 2 dans le menu, tu pourra consulter l'historique de quand tu as arroser les plantes\n\n");
            printf("---Si tu tape 3 dans le menu, tu pourra consulter le 'A propos' de notre application et de notre entreprise\n\n");
            printf("---Si tu tape 5 dans le menu, tu quitte l'application\n\n");

        }
        else if (choix_menu == 4){
            system("cls");
            exit(0);
        }
    }

    else  //Sinon ...
    {
        printf("Une erreur s'est produite lors de la connexion à la BDD!");
    }

    return 0;




    printf("BIENVENUE SUR CONNECTED FLOWERS\n");
    printf("MENU PRINCIPAL\n");
    printf("1. Choix des plantes\n");
    printf("2. Sauvegarde\n");
    printf("3. A propos\n");
    printf("4. Comment ca marche\n");
    printf("5. Quitter\n");

    int choix_menu;
    scanf("%d",&choix_menu);

    if (choix_menu==1)
    {
        system("cls");
        printf("CHOIX DES PLANTES\n");
        printf("1. Alisier blanc\n2. Guimauve officinale\n3. Centaure noire\n4. Muguet\n5. Digitale pourpre\n6. Asperule odorante\n7. Hysope\n8. Iris faux acore\n9. Menthe a feuilles rondes\n10. Petite pervenche\n");
        printf("11. Violette des chiens\n12. Origan commun\n13. Lysimaque commune\n14. Gesse des bois\n15. Knautie des champs\n16. Jasione des montagnes\n17. Aubepine a un style\n18. Calamagrostide commun\n19. populage des marais\n20. Campanule agglomeree\n");
        printf("21. Laiche aigue\n22. Fetuque des moutons\n23. Heliantheme des apennins\n24. Piloselle officinal\n25. Millepertuis perfore\n26. Luzule des bois\n27. Osmonde royale\n28. Raiponce en epi\n29. Polypode commun\n30. Anemone pulsatille\n");
        int choix_plante;
        printf("Quelle plante veux-tu ?\n");
        scanf("%d",&choix_plante);
        system("cls");
        if (choix_plante == 1)
        {
            alisier_blanc(5,45,23,25,68,75); // 1er humidité dans la terre, 2eme humidité requise, 3eme temperature, 4eme temperature requise,5eme luminosité,6eme luminosité requise
        }
        if (choix_plante == 2)
        {
            guillmauve_officinale(30,36,25,14,77,88);
        }
        if (choix_plante == 3)
        {
            centaure_noire(5,45,23,25,68,75);
        }
        if (choix_plante == 4)
        {
            muguet(65,45,23,25,68,75);
        }
        if (choix_plante == 5)
        {
            digitale_pourpre(5,45,23,25,68,75);
        }
        if (choix_plante == 6)
        {
            asperule_odorante(5,45,23,25,68,75);
        }
        if (choix_plante == 7)
        {
            hysope(5,45,23,25,68,75);
        }
        if (choix_plante == 8)
        {
            iris_faux_acore(5,45,23,25,68,75);
        }
        if (choix_plante == 9)
        {
            menthe_a_feuilles_rondes(5,45,23,25,68,75);
        }
        if (choix_plante == 10)
        {
            petite_pervenche(5,45,23,25,68,75);
        }
        if (choix_plante == 11)
        {
            violette_des_chiens(5,45,23,25,68,75);
        }
        if (choix_plante == 12)
        {
            origan_commun(5,45,23,25,68,75);
        }
        if (choix_plante == 13)
        {
            lysimaque_commune(5,45,23,25,68,75);
        }
        if (choix_plante == 14)
        {
            gesse_des_bois(5,45,23,25,68,75);
        }
        if (choix_plante == 15)
        {
            knautie_des_champs(5,45,23,25,68,75);
        }
        if (choix_plante == 16)
        {
            jasione_des_montagnes(5,45,23,25,68,75);
        }
        if (choix_plante == 17)
        {
            aubepine_a_un_style(5,45,23,25,68,75);
        }
        if (choix_plante == 18)
        {
            calamagrostide_commun(5,45,23,25,68,75);
        }
        if (choix_plante == 19)
        {
            populage_des_marais(5,45,23,25,68,75);
        }
        if (choix_plante == 20)
        {
            campanule_agglomeree(5,45,23,25,68,75);
        }
        if (choix_plante == 21)
        {
            laiche_aigue(5,45,23,25,68,75);
        }
        if (choix_plante == 22)
        {
            fetuque_des_moutons(5,45,23,25,68,75);
        }
        if (choix_plante == 23)
        {
            heliantheme_des_apennins(5,45,23,25,68,75);
        }
        if (choix_plante == 24)
        {
            piloselle_officinale(5,45,23,25,68,75);
        }
        if (choix_plante == 25)
        {
            millepertuis_perfore(5,45,23,25,68,75);
        }
        if (choix_plante == 26)
        {
            luzule_des_bois(5,45,23,25,68,75);
        }
        if (choix_plante == 27)
        {
            osmonde_royale(5,45,23,25,68,75);
        }
        if (choix_plante == 28)
        {
            raiponce_en_epi(5,45,23,25,68,75);
        }
        if (choix_plante == 29)
        {
            polypode_commun(5,45,23,25,68,75);
        }
        if (choix_plante == 30)
        {
            anemone_pulsatille(5,45,23,25,68,75);
        }


    }

   if (choix_menu == 2)
   {
        system("cls");
        printf("quelle historique de plante veux tu consulter ?\n");
        printf("1. Alisier blanc\n2. Guimauve officinale\n3. Centaure noire\n4. Muguet\n5. Digitale pourpre\n6. Asperule odorante\n7. Hysope\n8. Iris faux acore\n9. Menthe a feuilles rondes\n10. Petite pervenche\n");
        printf("11. Violette des chiens\n12. Origan commun\n13. Lysimaque commune\n14. Gesse des bois\n15. Knautie des champs\n16. Jasione des montagnes\n17. Aubepine a un style\n18. Calamagrostide commun\n19. populage des marais\n20. Campanule agglomeree\n");
        printf("21. Laiche aigue\n22. Fetuque des moutons\n23. Heliantheme des apennins\n24. Piloselle officinal\n25. Millepertuis perfore\n26. Luzule des bois\n27. Osmonde royale\n28. Raiponce en epi\n29. Polypode commun\n30. Anemone pulsatille\n");
        int choix_sauvegarde;
        scanf("%d",&choix_sauvegarde);
        if (choix_sauvegarde == 1)
        {
            consulte_sauvegarde_alisier_blanc();
        }
        if (choix_sauvegarde == 2)
        {
            consulte_sauvegarde_guillmauve_officinale();
        }
        if (choix_sauvegarde == 3)
        {
            consulte_sauvegarde_centaure_noire();
        }
        if (choix_sauvegarde == 4)
        {
            consulte_sauvegarde_muguet();
        }
        if (choix_sauvegarde == 5)
        {
            consulte_sauvegarde_digitale_pourpre();
        }
        if (choix_sauvegarde == 6)
        {
            consulte_sauvegarde_asperule_odorante();
        }
        if (choix_sauvegarde == 7)
        {
            consulte_sauvegarde_hysope();
        }
        if (choix_sauvegarde == 8)
        {
            consulte_sauvegarde_iris_faux_acore();
        }
        if (choix_sauvegarde == 9)
        {
            consulte_sauvegarde_menthe_a_feuilles_rondes();
        }
        if (choix_sauvegarde == 10)
        {
            consulte_sauvegarde_petite_pervenche();
        }
        if (choix_sauvegarde == 11)
        {
            consulte_sauvegarde_violette_des_chiens();
        }
        if (choix_sauvegarde == 12)
        {
            consulte_sauvegarde_origan_commun();
        }
        if (choix_sauvegarde == 13)
        {
            consulte_sauvegarde_lysimaque_commune();
        }
        if (choix_sauvegarde == 14)
        {
            consulte_sauvegarde_gesse_des_bois();
        }
        if (choix_sauvegarde == 15)
        {
            consulte_sauvegarde_knautie_des_champs();
        }
        if (choix_sauvegarde == 16)
        {
            consulte_sauvegarde_jasione_des_montagnes();
        }
        if (choix_sauvegarde == 17)
        {
            consulte_aubepine_a_un_style();
        }
        if (choix_sauvegarde == 18)
        {
            consulte_calamagrostide_commun();
        }
        if (choix_sauvegarde == 19)
        {
            consulte_populage_des_marais();
        }
        if (choix_sauvegarde == 20)
        {
            consulte_campanule_agglomeree();
        }
        if (choix_sauvegarde == 21)
        {
            consulte_laiche_aigue();
        }
        if (choix_sauvegarde == 22)
        {
            consulte_fetuque_des_moutons();
        }
        if (choix_sauvegarde == 23)
        {
            consulte_heliantheme_des_apennins();
        }
        if (choix_sauvegarde == 24)
        {
            consulte_piloselle_officinale();
        }
        if (choix_sauvegarde == 25)
        {
            consulte_millepertuis_perfore();
        }
        if (choix_sauvegarde == 26)
        {
            consulte_luzule_des_bois();
        }
        if (choix_sauvegarde == 27)
        {
            consulte_osmonde_royale();
        }
        if (choix_sauvegarde == 28)
        {
            consulte_raiponce_en_epi();
        }
        if (choix_sauvegarde == 29)
        {
            consulte_polypode_commun();
        }
        if (choix_sauvegarde == 30)
        {
            consulte_anemone_pulsatille();
        }




   }
   if (choix_menu == 3)
   {
       system("cls");
       printf("Tout a commencer en 2016,\n3 etudiants, fraichement diplomer et partageant la meme passion pour la puissance de la technologie et la douceur des fleurs, ont decider de tout plaquer pour se consacrer a un seul et unique but faire de vous des mains vertes sans trop d'efforts. Cela fait maintenant 3 ans que connectedflower est implante sur le marche des objets connecte pour vous offrir des objets ultras perfectionner et simple d'utilisation pour accompagner vos plantes et sublimer vos jardins. Voilà vous savez tout.");
   }
   if (choix_menu == 4)
   {
       system("cls");
       printf("                                                COMMENT CA MARCHE ?\n\n\n");
       printf("---Si tu tape 1 dans le menu, tu pourra choisir la plante de ton choix. Tu pourra voir toute les informations \nde la plante que tu aura selectione.\nSi l'humidite de la terre de la plante est trop faible ou qu'elle est trop expose au soleil,\nil y'aura une alerte qui te dira d'arroser et un historique des conditions quand tu aura arrose la plante s'affichera avec la date.\n\n");
       printf("---Si tu tape 2 dans le menu, tu pourra consulter l'historique de quand tu as arroser les plantes\n\n");
       printf("---Si tu tape 3 dans le menu, tu pourra consulter le 'A propos' de notre application et de notre entreprise\n\n");
       printf("---Si tu tape 5 dans le menu, tu quitte l'application\n\n");

   }
   if (choix_menu == 5)
        system("cls");
        exit(0);

    return 0;
}


