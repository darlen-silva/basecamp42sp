#include <stdlib.h>
#include <stdio.h>
char *ft_strjoin(int size, char **strs, char *sep);
int main ()
{
	//Para testar eu comecei criando uma cadeia de caracteres de duas dimensões.
	//Ou seja, um ponteiro que aponta para um ponteiro. 
	char **abcd;
	char abc[] = " "; //Aqui eu criei a cadeia de caracteres do separador.
	abcd = malloc(4 * sizeof(char *)); //Aqui eu instanciei quantas cadeias de caracteres
	//eu quero usando o malloc. Eu liberei na memória 4 espaços do tamanho de um ponteiro de
	//caracteres. Pq abcd é um ponteiro de ponteiro. Ou seja, é um ponteiro que armazena
	//variaveis do tipo ponteiro de char. 	
	abcd[0] = "Teste"; //Aqui eu atribui a segunda dimensão do meu array (o ponteiro de ponteiro);
	//Eu fiz isso usando esse tipo de conotação, mas eu poderia ter atribuido memória usando o malloc;
	//Eu escreveria abcd[0] = (6 * sizeof(char)) - pq meu array abcd[0] (Ponteiro apontado pelo ponteiro)
	// tem 6 posições incluindo o caracter nulo;
	abcd[1] = "Baleia";
	abcd[2] = "Jabuticaba";
	abcd[3] = "Melancia";
	printf("Teste no caso normal (Size 4): \n");
	printf("%s", ft_strjoin(4, abcd , abc));
	free(ft_strjoin(4, abcd , abc));
	printf("|Acaba aqui");
	printf("\n");
	printf("\n");
	printf("Teste no caso normal (Size 1): \n");
	printf("%s", ft_strjoin(1, abcd , abc));
	free(ft_strjoin(4, abcd , abc));

	printf("|Acaba aqui");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("Teste nos caso de size ser 0 (Não deve retornar nada): ");
	printf("%s", ft_strjoin(0, abcd , abc));
	free(ft_strjoin(0, abcd , abc));
	printf("\n");

	printf ("FAKE MULINETTE --------------------- \n");

	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 3)
	{
		strs[offset] = "abc";
		offset++;
	}
	res_str = ft_strjoin(3, strs, ", ");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);

	return (0);
}