#ifndef SCREEN_H_
#define SCREEN_H_

#include "booktag.h" //arquivo de booktags

/*
   Trabalho de Organizacao de Arquivos - Trabalho 2

   Integrantes:

   Marcos Vinicius Barros L. Andrade Junqueira     numero USP: 8922393
   Rita Raad                                       numero USP: 8061452
   Henrique Fernandes de Matos Freitas             numero USP: 8937225
   Gustavo Santiago                                numero USP: 8937416

   Descricao do arquivo debug.h: possui assinatura das funcoes implementadas no arquivo debug.c
*/


/**
   Função start_screen() comeca a tela inicial do programa
 **/
void start_screen();

/**
   Função insert_screen() tela de cadastrado
 **/
void insert_screen();

/**
   Funcão remove_screen() tela de remocao
 **/
void remove_screen();

/**
   Função get_input() pega o input, e alocado a memória assim que necessário
   @return BOOKTAG_T booktag criada com as informações de input
 **/
BOOKTAG_T *screen_get_input();

/**
   Função remove_def_screen() Tela de remoção definitiva de um registro
 **/
void remove_def_screen();

/**
   Função booktag_search_screen() Tela de procura de pesquisa de booktag
 **/
void booktag_search_screen();

/**
 * Funcao bookatg_search_author() Tela de procura por Autor
 **/

void booktag_search_author();

/**
   Função booktag_search_rrn_screen() Tela de procura de pesquisa de booktag pelo RRN
 **/
void booktag_search_rrn_screen();

/**
   Função booktag_search_all_screen() Tela  de impressaõ de todas booktags
 **/
void booktag_search_all_screen();

/**
 * Funcao booktag_search_publisher() Tela de procura de editora
 **/
void booktag_search_publisher();

/**
 * Funcao booktag_search_publisher_author() Tela de procura com merging/matching
 * @param int i que ira indicar qual operacao esta sendo feita (1 para matching, 2 para merging)
 */
void booktag_search_publisher_author(int i);

/**
   Função interna string_complete() que preenche o restante da string para evitar
   problemas de diferenças nos tamanhos

   @param char string[] que será preenchida
   @param int n qual campo será preencido (1 para titulo, para autor, 3 para editora e 4 para idioma)
 **/
void string_complete(char string[], int n);
/**
 * Funcao booktag_search_list_one() que mostra um registro por vez
 **/
void booktag_search_list_one();


#endif
