#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado, nome_cidade[30];
  int num_cod, populacao, pnt_turisticos;
  float area, pib, dens_pop, pib_pessoa;

  // Área para entrada de dados
  printf("------  Inicializando Sistema: Cadastro de Cartas   ------\n\n");
  printf("Bem-vindo ao Jogo Super Trunfo Cidades.\nO mesmo consiste em uma batalha de atributos entre cidades registradas em cartas.\n");
  printf("Os atributos definidos analisados são:\n- População\n- Área\n- PIB\n- Número de pontos turísticos\n\nEntendida às regras, vamos ao Cadastro de Cartas.\n\n");
  printf("Vamos começar pelo código do estado. Os códigos são compostos por uma letra e um inteiro.\nOs estados se dividem em 8, listados alfabeticamente de A a H.\n Digite a letra do Estado: ");
  scanf("%c", &estado);
  printf("Perfeito! Agora digite o inteiro. Escolha um número de 1 a 4: ");
  scanf("%d", &num_cod);
  printf("Perfeito!\nO código da carta será: %c0%d.\nAgora precisamos do nome da cidade. Para escolher o nome da cidade peço que se atente a algumas regras:\n1- Não utilize espaços, prefira underlines\n2- Não pode passar de 20 caracteres\nQual o nome da cidade? ", estado, num_cod);
  scanf("%s", nome_cidade);
  printf("Muito bem, estamos finalizando o cadastro. Agora preciso que me passe as informações solicitadas sobre %s. Segundo dados governamentais, qual a população registrada na cidade? ", nome_cidade);
  scanf("%d", &populacao);
  printf("E sua área em Km²? ");
  scanf("%f", &area);
  printf("Qual o PIB de %s em Milhões de R$? ");
  scanf("%f", &pib);
  printf("Qual a quantidade de pontos turísticos? ");
  scanf("%d", &pnt_turisticos);

  dens_pop = populacao / area;
  pib_pessoa = pib * 1000000 / populacao;

  // Área para exibição dos dados da cidade
  printf("Agora que possuimos todos os dados da carta, segue apresentação :-)\n\n");
  printf("------         %c0%d : %s         ------\n\n", estado, num_cod, nome_cidade);
  printf("\tPopulação: %d\n\tPontos Turísticos: %d\n\tÁrea: %.2f km²\n\tPIB: R$ %.2f Milhões de Reais\n\tDensidade Populacional: %.2f Pessoas por Km²\n\tPIB per Capita: %.2f Reais por Pessoa\n\n", populacao, pnt_turisticos, area, pib, dens_pop, pib_pessoa);
  printf("------         %c0%d : %s         ------\n\n", estado, num_cod, nome_cidade);
  return 0;
  }
