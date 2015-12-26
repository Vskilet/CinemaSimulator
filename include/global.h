
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/caissiere.h"
#include "../include/client.h"
#include "../include/argStruct.h"
#include "../include/SalleStruct.h"
#include "../include/caisseAuto.h"
#define Nbcaisses 8
#define NbcaissesAuto 3
#define NbClients 1000
#define NBSalles 5

pthread_t tid[NbClients+Nbcaisses+NbcaissesAuto];
pthread_mutex_t mutex_attenteClient;
pthread_cond_t attendre, dormir, attendreAuto, dormirAuto;
SalleStruct * lesSalles[NBSalles];

int nbClientsAttente;
int nbClientsAttenteAuto;
int nbAppelCaisse;