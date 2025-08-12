🃏 Jogo de Cartas - Comparação de Atributos
📋 Descrição
Este projeto em C é um joguinho simples que cadastra duas cartas com dados de estados brasileiros 🏞️ e compara vários atributos, tipo população, PIB, pontos turísticos, e mais!

Ele calcula também umas informações extras como:

🌍 Densidade populacional

💰 PIB per capita

⚡ Super poder (uma soma dos atributos pra medir a força da carta)

Depois, mostra qual carta venceu em cada categoria! 🎉

🚀 Como usar
1°Compile o programa:
gcc -o jogo_cartas jogo_cartas.c

2°Rode o programa:
./jogo_cartas

3°Digite os dados quando pedir no terminal, seguindo a ordem certinha:

Estado

Código (número inteiro)

Cidade

População

Área

PIB

Pontos turísticos

📝 Exemplo de entrada:

Estado: São Paulo,
Codigo: 1,
Cidade: São Paulo,
Populacao: 12345678,
Area: 1521.11,
PIB: 700000.50,
Pontos turisticos: 15

⚠️ Dicas importantes:

Sempre aperte ENTER depois de digitar os números.

O programa já limpa o buffer para evitar que a entrada pule campos.

Digite os dados corretos para não dar erro!

🔍 Como o código funciona:

Usa uma struct chamada Carta para guardar os dados.

Tem funções para calcular densidade, PIB per capita e super poder.

Compara os valores das duas cartas e mostra quem ganhou em cada categoria.

