# Verificação de Elegibilidade para um Cargo

Este é um programa simples em C que determina se um candidato é elegível para um cargo com base em critérios específicos.

## Questão Problema

O problema que este programa resolve é o seguinte:

### Problema

Escreva um programa em C que determine se um candidato é elegível para um cargo com base em critérios específicos. O programa deve solicitar ao usuário que insira seu gênero (M para Masculino, F para Feminino), idade, altura em centímetros e o número de idiomas que o candidato fala fluentemente. Em seguida, o programa deve verificar se o candidato atende aos seguintes critérios:

- Se o gênero for masculino (M), o programa deve imprimir "Você não está apto para o trabalho."
- Se o gênero for feminino (F), o programa deve verificar se a idade do candidato é igual ou superior a 24 anos, a altura é igual ou superior a 170 centímetros e se o candidato fala pelo menos 2 idiomas fluentemente. Se todos esses critérios forem atendidos, o programa deve imprimir "Parabéns, você está apta para o trabalho!". Caso contrário, deve imprimir "Você não pode participar do processo da empresa".

Este problema demonstra como utilizar estruturas condicionais em C para tomar decisões com base em diferentes critérios de elegibilidade.

## Execução

Para executar o programa, basta compilar o arquivo fonte `main.c` e executar o binário resultante.

Exemplo de compilação:

```bash
gcc main.c -o programa
```

Exemplo de execução:

```bash
./programa
```

### Contribuição
Se você encontrar qualquer problema ou tiver sugestões para melhorias, sinta-se à vontade para abrir uma issue ou enviar um pull request.
