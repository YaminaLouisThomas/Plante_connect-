#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void sauvegarde(int humidite,int temperature,int luminosite)
    {
        FILE *fic = fopen("humidité.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"\n%d/%d\n-", humidite,temperature); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("humidité.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_alisier_blanc(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("artisier blanc.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("artisier blanc.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }

void consulte_sauvegarde_alisier_blanc()
    {
        printf("ALISER BLANC\n\n");
        int lettre = 0;
        FILE *sau = fopen("artisier blanc.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }

void sauvegarde_guillmauve_officinale(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("guillmauve officinale.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("guillmauve officinale.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_sauvegarde_guillmauve_officinale()
    {
        printf("GUILLMAUVE OFFICINALE\n\n");
        int lettre = 0;
        FILE *sau = fopen("guillmauve officinale.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }

void sauvegarde_centaure_noire(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("centaure noire.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("centaure noire.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_sauvegarde_centaure_noire()
    {
         printf("CENTAURE NOIRE\n\n");
        int lettre = 0;
        FILE *sau = fopen("centaure noire.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_muguet(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("muguet.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("muguet.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }

void consulte_sauvegarde_muguet()
    {
        printf("MUGUET\n\n");
        int lettre = 0;
        FILE *sau = fopen("muguet.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_digitale_pourpre(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("digitale pourpre.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("digitale pourpre.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }

void consulte_sauvegarde_digitale_pourpre()
    {
        printf("DIGITALE POURPRE\n\n");
        int lettre = 0;
        FILE *sau = fopen("digitale pourpre.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }

void sauvegarde_asperule_odorante(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("asperule odorante.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("asperule odorante.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_sauvegarde_asperule_odorante()
    {
        printf("ASPERULE ODORANTE\n\n");
        int lettre = 0;
        FILE *sau = fopen("asperule odorante.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_hysope(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("hysope.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("hysope.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_sauvegarde_hysope()
    {
        printf("HYSOPE\n\n");
        int lettre = 0;
        FILE *sau = fopen("hysope.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_iris_faux_acore(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("iris faux acore.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("iris faux acore.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_sauvegarde_iris_faux_acore()
    {
        printf("IRIS FAUX ACORE\n\n");
        int lettre = 0;
        FILE *sau = fopen("iris faux acore.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_menthe_a_feuilles_rondes(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("menthe a feuilles rondes.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("menthe a feuilles rondes.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_sauvegarde_menthe_a_feuilles_rondes()
    {
        printf("MENTHE A FEUILLES RONDES\n\n");
        int lettre = 0;
        FILE *sau = fopen("menthe a feuilles rondes.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_petite_pervenche(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("petite pervenche.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("petite pervenche.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_sauvegarde_petite_pervenche()
    {
        printf("PETITE PERVENCHE\n\n");
        int lettre = 0;
        FILE *sau = fopen("petite pervenche.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_violette_des_chiens(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("violette des chiens.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("violette des chiens.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_sauvegarde_violette_des_chiens()
    {
        printf("VIOLETTE DES CHIENS\n\n");
        int lettre = 0;
        FILE *sau = fopen("violette des chiens.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_origan_commun(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("origan commun.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("origan commun.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_sauvegarde_origan_commun()
    {
        printf("ORIGAN COMMUN\n\n");
        int lettre = 0;
        FILE *sau = fopen("origan commun.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_lysimaque_commune(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("lysimaque commune.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("lysimaque commune.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_sauvegarde_lysimaque_commune()
    {
        printf("LYSIMAQUE COMMUNE\n\n");
        int lettre = 0;
        FILE *sau = fopen("lysimaque commune.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_gesse_des_bois(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("gesse des bois.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("gesse des bois.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_sauvegarde_gesse_des_bois()
    {
        printf("GESSE DES BOIS\n\n");
        int lettre = 0;
        FILE *sau = fopen("gesse des bois.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_knautie_des_champs(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("knautie des champs.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("knautie des champs.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_sauvegarde_knautie_des_champs()
    {
        printf("KNAUTIE DES CHAMPS\n\n");
        int lettre = 0;
        FILE *sau = fopen("knautie des champs.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_jasione_des_montagnes(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("jasione des montagnes.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("jasione des montagnes.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_sauvegarde_jasione_des_montagnes()
    {
        printf("JASIONE DES MONTAGNES\n\n");
        int lettre = 0;
        FILE *sau = fopen("jasione_des_montagnes.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_aubepine_a_un_style(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("aubepine a un style.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("aubepine a un style.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_aubepine_a_un_style()
    {
        printf("AUBEPINE A UN STYLE\n\n");
        int lettre = 0;
        FILE *sau = fopen("aubepine a un style.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_calamagrostide_commun(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("calamagrostide commun.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("calamagrostide commun.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_calamagrostide_commun()
    {
        printf("CALAMAGROSTIDE COMMUN\n\n");
        int lettre = 0;
        FILE *sau = fopen("calamagrostide commun.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_populage_des_marais(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("populage des marais.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("populage des marais.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_populage_des_marais()
    {
        printf("POPULAGE DES MARAIS\n\n");
        int lettre = 0;
        FILE *sau = fopen("populage des marais.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_campanule_agglomeree(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("campanule agglomeree.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("campanule agglomeree.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_campanule_agglomeree()
    {
        printf("CAMPANULE AGGLOMEREE\n\n");
        int lettre = 0;
        FILE *sau = fopen("campanule agglomeree.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_laiche_aigue(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("laiche aigue.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("laiche aigue.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_laiche_aigue()
    {
        printf("LAICHE AIGUE\n\n");
        int lettre = 0;
        FILE *sau = fopen("laiche aigue.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }

void sauvegarde_fetuque_des_moutons(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("fetuque des moutons.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("fetuque des moutons.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_fetuque_des_moutons()
    {
        printf("FETUQUE DES MOUTONS\n\n");
        int lettre = 0;
        FILE *sau = fopen("fetuque des moutons.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_heliantheme_des_apennins(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("heliantheme des apennins.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("heliantheme des apennins.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_heliantheme_des_apennins()
    {
        printf("HELIANTHEME DES APENNINS\n\n");
        int lettre = 0;
        FILE *sau = fopen("heliantheme des apennins.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_piloselle_officinale(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("piloselle officinale.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("piloselle officinale.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_piloselle_officinale()
    {
        printf("PILOSELLE OFFICINALE\n\n");
        int lettre = 0;
        FILE *sau = fopen("piloselle officinale.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_millepertuis_perfore(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("millepertuis perfore.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("millepertuis perfore.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_millepertuis_perfore()
    {
        printf("MILLEPERTUIS PERFORE\n\n");
        int lettre = 0;
        FILE *sau = fopen("millepertuis perfore.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_luzule_des_bois(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("luzule des bois.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("luzule des bois.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_luzule_des_bois()
    {
        printf("LUZULE DES BOIS\n\n");
        int lettre = 0;
        FILE *sau = fopen("luzule des bois.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_osmonde_royale(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("osmonde royale.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("osmonde royale.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_osmonde_royale()
    {
        printf("OSMONDE ROYALE\n\n");
        int lettre = 0;
        FILE *sau = fopen("osmonde royale.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_raiponce_en_epi(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("raiponce en epi.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("raiponce en epi.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_raiponce_en_epi()
    {
        printf("RAIPONCE EN EPI\n\n");
        int lettre = 0;
        FILE *sau = fopen("raiponce en epi.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_polypode_commun(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("polypode commun.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("polypode commun.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_polypode_commun()
    {
        printf("POLYPODE COMMUN\n\n");
        int lettre = 0;
        FILE *sau = fopen("polypode commun.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void sauvegarde_anemone_pulsatille(int humidite,int temperature,int luminosite)
    {
        time_t t = time(NULL);
        FILE *fic = fopen("anemone pulsatille.txt", "a"); // ouvre le fichier, "a" pour ajouter
        if (fic == NULL) // si le fichier n'existe pas
            exit(1);
        fprintf(fic,"-%s\Hummidite : %d pourcent\nTemperature : %d degres\nluminosite : %d pourcent \n\n",ctime(&t), humidite,temperature,luminosite); //ecris dans le fichier
        fclose(fic); // ferme le fichier


        int lettre = 0;
        FILE *sau = fopen("anemone pulsatille.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(fic)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


void consulte_anemone_pulsatille()
    {
        printf("ANEMONE PULSATILLE\n\n");
        int lettre = 0;
        FILE *sau = fopen("anemone pulsatille.txt", "r"); // ouvre le fichier, "r" pour le lire
        while(1)
        {
            lettre = fgetc(sau);// fgetc : lire un caractere, on l'ajoute a "lettre"
            if(feof(sau)) //feof : fin du fichier, on arrete la boucle quand il n'y a pu de caractere
                break;
            printf("%c", lettre);
        }


        fclose(sau);
        return 0;
    }


