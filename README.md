# Jogo da Forca

Este é um simples jogo da forca implementado em C. O objetivo do jogo é adivinhar uma palavra secreta, letra por letra, antes de atingir o limite de tentativas erradas.

## Funcionalidades

-   O jogador tenta adivinhar as letras de uma palavra secreta.
-   O jogo exibe a palavra com as letras corretas já descobertas e com os espaços das letras erradas.
-   O jogador tem um número limitado de tentativas para errar antes de perder o jogo.
-   O jogador vence quando adivinha todas as letras da palavra secreta.

## Como Jogar

1.  O programa vai exibir uma palavra com as letras escondidas.
2.  O jogador deve digitar uma letra e pressionar Enter.
3.  Se a letra estiver na palavra, ela será revelada.
4.  Se a letra não estiver na palavra, o número de tentativas erradas será incrementado.
5.  O jogo termina quando o jogador adivinha toda a palavra ou quando atinge o limite de tentativas erradas.

## Como Rodar o Código

1.  Clone o repositório ou baixe o código.
2.  Compile o código com um compilador C. Exemplo usando o GCC:
    
    bash
    
    CopiarEditar
    
    `gcc -o forca forca.c` 
    
3.  Execute o programa compilado:
    
    bash
    
    CopiarEditar
    
    `./forca` 
    

## Exemplo de Execução

bash

CopiarEditar

`Bem-vindo ao jogo da Forca!

Tentativa 1 de 6
_ _ _ _ _ _ _ _ _ _ 
Digite uma letra: p
Boa! A letra 'p' está na palavra.

Tentativa 2 de 6
p _ _ _ _ _ _ _ _ _ 
Digite uma letra: o
Boa! A letra 'o' está na palavra.

Tentativa 3 de 6
p o _ _ _ _ _ _ _ _ 
Digite uma letra: a
Boa! A letra 'a' está na palavra.

Tentativa 4 de 6
p o a _ _ _ _ _ _ _ 
Digite uma letra: r
Boa! A letra 'r' está na palavra.

Tentativa 5 de 6
p o a r _ _ _ _ _ 
Digite uma letra: g
Boa! A letra 'g' está na palavra.

Tentativa 6 de 6
p o a r g _ _ _ _ 
Digite uma letra: m
Boa! A letra 'm' está na palavra.

Parabéns! Você acertou a palavra: programacao` 

## Estrutura do Código

-   **Função `exibirPalavra`**: Exibe a palavra com as letras já adivinhadas e espaços para as letras ainda não descobertas.
-   **Função `verificarAcerto`**: Verifica se a letra informada pelo jogador está presente na palavra secreta.
-   **Função `main`**: Controla o fluxo do jogo, processando as tentativas do jogador, atualizando o estado do jogo e verificando se o jogador venceu ou perdeu.

## Limitações

-   O jogo possui um número fixo de tentativas erradas (`MAX_TENTATIVAS`), que é 6 no código atual.
-   A palavra secreta é predefinida no código (neste caso, "programacao"). Isso pode ser modificado para aceitar palavras aleatórias ou entradas do usuário, se desejado.

## Licença

Este código está disponível para fins educacionais e pode ser modificado ou distribuído conforme necessário.

----------

Esse README pode ser expandido de acordo com novos recursos ou melhorias que você desejar adicionar ao código!
