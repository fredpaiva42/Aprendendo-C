# Aprendendo-C

Em C para usarmos as funções de entrada e saída é necessário importar a biblioteca
**stdio**, com ela importada, nós podemos usar a função **printf** e a função **scanf**, com elas respectivamente, nós podemos ter entrada e saída de dados.

## Observações
- Obs 1: Caso tenha algum erro de sintaxe o programa não compila e o compilador apresenta o erro.
- 
- Obs 2: A diferença entre a **linguagem tipada** e não **tipada** é em uma nós precisamos fazer a declaração do tipo.
- 
- Obs 3: Numa **linguagem estática** o tipo é inferido na declaração da variável e checado pelo compilador, já numa **linguagem dinâmica** o tipo é inferido pelo valor que for atribuído àquela variável e checado no tempo de execução.
- 
- Obs 4: **Linguagens fortemente tipadas**, apresentam erros ou exceções quando tentamos fazer operações entre valores de tipos diferentes, só é possível fazer essas operações através de conversão de valores. Já as **linguagens de tipagem fraca** não é necessário fazer conversões e se pode cambiar entre os tipos livremente.
- 
- Obs 5: Em C o **0** é equivalente a **Falso** e **1** a **Verdadeiro**.

## Importação
Importações em C devem ser feitas da seguinte maneira:
```C
    #include <stdio.h>
```
- O **include** é o equivalente ao **import** em Python.
- **stdio.h** é a biblioteca de entrada e saída do C.

## Função Main
Todo programa em C deve possuir uma função principal chamada **main**, ela é uma função do tipo inteiro, então ela vai ser sempre retornar um número, e ela não tem parâmetros.

A função **main** é declarada da seguinte maneira:
```C
    # include <stdio.h>
    
    int main(void) {
        
        return 0;
    }
```
- Quando a função **main** retorna 0 quer dizer que o programa está funcionando perfeitamente.
- Em C ao final de cada linha é necessário ser finalizada com **;**.

## Quebra de linha
Quebra de linha em C é `\n`:
```C
    printf("Hello, world!\n");
```

## Comentários
- Quando quisermos fazer comentários em apenas uma linha, nós devemos usar o **//**.
- Para comentar um bloco de código, nós usamos o **/*** para abrir e ***/** para fechar.
````C
    // Com isso comento uma linha
    /* Assim eu consigo comentar
     * um bloco de código */
````

## Declaração de variáveis
C é uma linguagem de tipagem estática, então nós precisamos dizer o seu tipo durante a declaração.
````C
    int idade = 10;
````
- Variáveis devem ter nomes **únicos** no escopo que estão, caso contrário será apresentado erro pelo compilador.

- Para que uma variável seja impressa pelo `printf()` é preciso fazer o uso de máscara (`%d - int`, `%f - float`, `%c - char`,...) indicando o tipo da variável e em seguida apos uma **,** passar o nome da variável, ficando assim: `printf("Você tem %d anos!", idade);`.

## Função scanf
Assim como o **printf** a função **scanf** recebe dois parâmetros, a máscara indicando o tipo do dado que vai ser recebido e `&nomeVariavel` que atribui o dado recebido pelo teclado a variável que vem logo após o **&**.
```C
    int num;

    printf("Digite um número de 1 a 10: ");
    scanf("%d",&num);
```
## Compilador
<img align="center" src="https://slideplayer.com.br/slide/17025453/98/images/10/Processo+de+compila%C3%A7%C3%A3o.jpg" alt="imagem processo de compilação">

**Explicação de forma resumida:**
    O compilador faz o processo de tradução do nosso programa.c que é escrito numa **linguagem de alto nível** (capaz de seres humanos compreenderem) e passa esse programa para **linguagem de máquina** (linguagem de baixo nível) que é a linguagem que o computador é capaz de entender, logo após esse processo de compilação é gerado um **executável** que é o que nos permite rodar nosso programa.

## Operadores Lógicos
- Operador And: `&&`
- Operador Or: `||`
- Operador de comparação: `==`
- Operador de atribuição: `=`

## Escopo
Uma variável só é visível no escopo em que foi declarada, ou nos escopos interno ao escopo no qual ela foi declarada.

## Laços de repetição em C

for:
```C
    for (i=0; i < 10; i++){
        //bloco de código a ser repetido    
    }
```