#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
int main(){
printf("programma per la criptazione RC4 di una strinaga\n");
time_t t;
char M[128];
char k[128];
char C[128][4];
char ASCII[32][4] = {"NUL", "SOH", "STX","ETC", "EOT", "ENQ", "ACK", "BEL", "BS", "TAB", "LF", "VT", "FF", "CR", "SO", "SI", "DLC", "DC1","DC2", "DC3", "DC4", "NAK", "SYN", "ETB", "CAN", "EM", "SUB", "ESC", "FS", "GS", "RS", "US"};
char choice;
int i = 0;
int ch;
printf("inserisci la stringa da decifrare \n");
fgets(M, 128, stdin);
while((ch = getchar()) != '\n' && ch != EOF);
printf("scegli 1 per inserire la chiave\nscegli 2 per generare la chiave\n");
do{
scanf("%1c", &choice);
if((choice != '1') && (choice != '2')){
  printf("inserisci un carattere valido\n" );}}
while ((choice != '1') && (choice !='2'));
 switch (choice) {
   case '1':
  while (strlen(M) - 1 >= strlen(k)){
  printf("inserisci la chiave\n");
  fgets(k, 128, stdin);}
  break;
  case '2':
    srand((unsigned) time(&t));
    for(i = 0; i < strlen(M) -1; i++){
       k[i] = rand() % 128;}
   break;}
for(i = 0; i < strlen(M) -1; i++){
  C[i][4] = M[i] ^ k[i];}
for (i = 0; i <strlen(M) - 1; i++){
  if((int)C[i][4] < 32){
    printf("%s ", ASCII[(int)C[i][4]]);}
  else{
  printf("%c ",(char)C[i][4]);}}
return 0;}
