#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  int num_cod;
  char codigo_estado[4];

  printf("------  Inicializando Sistema: Cadastro de Cartas   ------\n\n");
  printf("Bem-vindo ao Jogo Super Trunfo Cidades.\nO mesmo consiste em uma batalha de atributos entre cidades registrados em uma carta.\n");
  printf("Os atributos definidos analisados são:\n- População\n- Área\n- PIB\n- Número de pontos turísticos\n\nEntendida às regras, vamos ao Cadastro de Cartas.\n\n");
  printf("Vamos começar pelo código do estado. Os códigos são compostos por uma letra e um inteiro.\nOs estados se dividem em 8, listados alfabeticamente de A a H.\n Digite a letra do Estado: ");
  scanf("%c", &estado);
  printf("Perfeito! Agora digite o inteiro. Escolha um número de 1 a 4: ");
  scanf("%d", &num_cod);
  codigo_estado = "estado + num_cod;";
  printf("Resposta: %ls", codigo_estado);
  // Área para entrada de dados
  // Área para exibição dos dados da cidade

  return 0;
  } 
