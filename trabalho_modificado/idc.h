#ifndef IDC_H_
#define IDC_H_

#include "stdlib.h"
#include "stdio.h"
#include <string.h>
#include "booktag.h"
#include "debug.h"

/*
   Trabalho de Organizacao de Arquivos - Trabalho 2

   Integrantes:

   Marcos Vinicius Barros L. Andrade Junqueira     numero USP: 8922393
   Rita Raad                                       numero USP: 8061452
   Henrique Fernandes de Mattos Freitas             numero USP: 8937225
   Gustavo Santiago                                numero USP: 8937416

   Descricao do arquivo idc.h: possui a definicao das estruturas e assinatura das funções (implementadas na idc.c).

*/

typedef struct IDX_SEC{
	char *field; //author ou publisher
	int listPos; //primeira ocorrência na lista invertida
}IDXSEC_T;

typedef struct IDX_LIST{
	int offset;	//offset no arquivo de dados
	int next;	//pseudo-ponteiro para o próximo
}IDXLIST_T;

typedef struct INDICES_T{
	FILE *author;
	FILE *publisher;
	FILE *list_aut;
	FILE *list_pub;
}INDICES_T;

int get_offset(FILE *stream);

void free_list(IDXLIST_T *list);
void free_idxsec(IDXSEC_T *idx);
void print_list(IDXLIST_T *idx);
void print_idxsec(IDXSEC_T *idx);

IDXLIST_T *read_list(FILE *file, int pos);
IDXSEC_T *read_idxsec(FILE *file);

void index_show_lists();
void index_show_index();
void index_search_publisher(char *publisher);
void index_search_author(char *author);
void index_remove_author(char *author);

int insert_to_index(INDICES_T *idx, BOOKTAG_T *booktag, int offset);
int verify_index(char *filename);
void create_index(char *source);

#endif
