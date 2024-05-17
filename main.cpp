#include <iostream>
#include <cstdlib>
#include <cstring>
#define TABLESPACE 2000
using namespace std;
struct agenda{
 bool livre;
 char nome[50];
 char enredeco[50];
 char tel[10];
};
void iniciaAgenda (agenda a[]){
 int i;
 for (i=0; i<TABLESPACE; i++){
 a[i].livre = true;
 }
}
int minhaHash(char *chave){
 return (chave[i]-65);
}
int main(int argc, char* argv[]){
 int i;
 agenda a[TABLESPACE];
 char nome[50];
 iniciaAgenda(a);
 int op=1, pos;
 while (op != 0){
 cout << "Digite um nome: ";
 cin >> nome;
 pos = minhaHash(nome);
 if (a[pos].livre){
 cout << "Esse nome foi armazenado na posicao ";
 cout << pos << ".\n";
 strcpy(nome,a[pos].nome);
 a[pos].livre=false;
 cout << "Continuar? [0 - Nao / 1 - Sim] ";
 cin >> op;
 } else {
 cout << "Houve colisao na posicao ";
 cout << pos << ".\n";
 cout << "Nome alocado: ";
 cout << a[pos].nome;
 op = 0;
 }
 }
 return 0;
}