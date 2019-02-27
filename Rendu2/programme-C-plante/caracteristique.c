#include <stdio.h>
#include <stdlib.h>

void caracteristique_alisier_blanc(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_alisier_blanc(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}


void caracteristique_guillmauve_officinale(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_guillmauve_officinale(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}

void caracteristique_centaure_noire(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_centaure_noire(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_muguet(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_muguet(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_digitale_pourpre(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_digitale_pourpre(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}


void caracteristique_asperule_odorante(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_asperule_odorante(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_hysope(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_hysope(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}




void caracteristique_iris_faux_acore(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_iris_faux_acore(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_menthe_a_feuilles_rondes(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_menthe_a_feuilles_rondes(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_petite_pervenche(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_petite_pervenche(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_violette_des_chiens(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_violette_des_chiens(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_origan_commun(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_origan_commun(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_lysimaque_commune(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_lysimaque_commune(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_gesse_des_bois(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_gesse_des_bois(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_knautie_des_champs(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_knautie_des_champs(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_jasione_des_montagnes(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_jasione_des_montagnes(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_aubepine_a_un_style(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_aubepine_a_un_style(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_calamagrostide_commun(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_calamagrostide_commun(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_populage_des_marais(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_populage_des_marais(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");

}



void caracteristique_campanule_agglomeree(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_campanule_agglomeree(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");
}



void caracteristique_laiche_aigue(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_laiche_aigue(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");
}



void caracteristique_fetuque_des_moutons(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_fetuque_des_moutons(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");
}



void caracteristique_heliantheme_des_apennins(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_heliantheme_des_apennins(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");
}



void caracteristique_piloselle_officinale(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_piloselle_officinale(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");
}



void caracteristique_millepertuis_perfore(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_millepertuis_perfore(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");
}



void caracteristique_luzule_des_bois(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_luzule_des_bois(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");
}



void caracteristique_osmonde_royale(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_osmonde_royale(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");
}



void caracteristique_raiponce_en_epi(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_raiponce_en_epi(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");
}



void caracteristique_polypode_commun(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_polypode_commun(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");
}



void caracteristique_anemone_pulsatille(int humidite, int pourcentage,int temperature,int temperature_requise,int luminosite, int luminoste_requise)
{
    if ((temperature + 1) == temperature_requise || (temperature + 2)== temperature_requise||(temperature + 3)== temperature_requise||temperature== temperature_requise||(temperature - 1)== temperature_requise||(temperature - 2)== temperature_requise||(temperature - 2)== temperature_requise)
        printf("la temperature est optimal\n");
    else if (temperature < temperature_requise)
        printf("il fait trop froid pour votre plante actuellement\n");
    else
        printf("il fait trop chaud pour votre plante actuellement\n");


    if (luminosite == luminoste_requise || (luminosite+1)== luminoste_requise|| (luminosite+2)== luminoste_requise|| (luminosite+3)== luminoste_requise|| (luminosite+4)== luminoste_requise || (luminosite+5)== luminoste_requise || (luminosite-1)== luminoste_requise|| (luminosite-2)== luminoste_requise|| (luminosite-3)== luminoste_requise|| (luminosite-4)== luminoste_requise|| (luminosite-5)== luminoste_requise)
        printf("la luminosite est optimal\n\n");
    else if (luminosite < luminoste_requise)
        printf("votre plante ne recoit pas assez de luminosite\n\n");
    else
        printf("votre plante recoit trop de luminosite\n\n");

     if (humidite < pourcentage)
    {
        printf("IL FAUT ARROSER !\n");
        int eau = humidite;
        int degres = temperature;
        int lumiere = luminosite;
        printf("HISTORIQUE :\n\n");
        sauvegarde_anemone_pulsatille(eau,degres,lumiere);
    }

    if (humidite > pourcentage)
        printf("pas la peine d'arroser\n\n");
}
