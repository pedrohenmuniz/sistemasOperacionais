#include "myfs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Function to install new file system
int installMyFS (){
        FSInfo * fs = malloc (sizeof(FSInfo));
        fs->fsid = "idfs";
        fs->fsname = "lukinhadlc";
        fs->isidleFn = isidleFn;
        fs->formatFn = formatFn;
        fs->openFn = openFn;
        fs->readFn = readFn;
        fs->writeFn = writeFn;
        fs->closeFn = closeFn;
        fs->opendirFn = opendirFn;
        fs->readdirFn = readdirFn;
        fs->linkFn = linkFn;
        fs->unlinkFn = unlinkFn;
        fs->closedirFn = closedirFn;
        vfsRegisterFS(fs);
}

//Funcao para verificacao se o sistema de arquivos está ocioso, ou seja,
//se nao ha quisquer descritores de arquivos em uso atualmente. Retorna
//um positivo se ocioso ou, caso contrario, 0.
int isidleFn (Disk *d){
        return 0;
}

//Funcao para formatacao de um disco com o novo sistema de arquivos
//com tamanho de blocos igual a blockSize. Retorna o numero total de
//blocos disponiveis no disco, se formatado com sucesso. Caso contrario,
//retorna -1.
int formatFn (Disk *d, unsigned int blockSize){
        return -1;
}

//Funcao para abertura de um arquivo, a partir do caminho especificado
//em path, no disco montado especificado em d, no modo Read/Write,
//criando o arquivo se nao existir. Retorna um descritor de arquivo,
//em caso de sucesso. Retorna -1, caso contrario.
int openFn (Disk *d, const char *path){
        return -1;
}

//Funcao para a leitura de um arquivo, a partir de um descritor de
//arquivo existente. Os dados lidos sao copiados para buf e terao
//tamanho maximo de nbytes. Retorna o numero de bytes efetivamente
//lidos em caso de sucesso ou -1, caso contrario.
int readFn (int fd, char *buf, unsigned int nbytes){
        return -1;
}

//Funcao para a escrita de um arquivo, a partir de um descritor de
//arquivo existente. Os dados de buf serao copiados para o disco e
//terao tamanho maximo de nbytes. Retorna o numero de bytes
//efetivamente escritos em caso de sucesso ou -1, caso contrario
int writeFn (int fd, const char *buf, unsigned int nbytes){
        return -1;
}

//Funcao para fechar um arquivo, a partir de um descritor de arquivo
//existente. Retorna 0 caso bem sucedido, ou -1 caso contrario
int closeFn (int fd){
        return -1;
}

//Funcao para abertura de um diretorio, a partir do caminho
//especificado em path, no disco indicado por d, no modo Read/Write,
//criando o diretorio se nao existir. Retorna um descritor de arquivo,
//em caso de sucesso. Retorna -1, caso contrario.
int opendirFn (Disk *d, const char *path){
        return -1;
}

//Funcao para a leitura de um diretorio, identificado por um descritor
//de arquivo existente. Os dados lidos correspondem a uma entrada de
//diretorio na posicao atual do cursor no diretorio. O nome da entrada
//e' copiado para filename, como uma string terminada em \0 (max 255+1).
//O numero do inode correspondente 'a entrada e' copiado para inumber.
//Retorna 1 se uma entrada foi lida, 0 se fim do diretorio ou -1 caso
//mal sucedido.
int readdirFn (int fd, char *filename, unsigned int *inumber){
        return -1;
}

//Funcao para adicionar uma entrada a um diretorio, identificado por um
//descritor de arquivo existente. A nova entrada tera' o nome indicado
//por filename e apontara' para o numero de i-node indicado por inumber.
//Retorna 0 caso bem sucedido, ou -1 caso contrario.
int linkFn (int fd, const char *filename, unsigned int inumber){
        return -1;
}

//Funcao para remover uma entrada existente em um diretorio,
//identificado por um descritor de arquivo existente. A entrada e'
//identificada pelo nome indicado em filename. Retorna 0 caso bem
//sucedido, ou -1 caso contrario.
int unlinkFn (int fd, const char *filename){
        return -1;
}

//Funcao para fechar um diretorio, identificado por um descritor de
//arquivo existente. Retorna 0 caso bem sucedido, ou -1 caso contrario.
int closedirFn (int fd){
        return -1;
}
