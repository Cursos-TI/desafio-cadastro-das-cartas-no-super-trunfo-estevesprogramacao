# Super Trunfo - Cidades Brasileiras 🌆🇧🇷

Este projeto é um jogo simples de Super Trunfo em linguagem C, onde duas cartas de cidades brasileiras são comparadas com base em atributos como população, área, PIB e densidade demográfica.

## 🎮 Como jogar

O programa permite ao jogador:

- Cadastrar os dados de duas cidades (cartas)
- Escolher o atributo a ser comparado
- Ver qual carta vence ou se há empate, com base nas regras do jogo

## 📋 Atributos disponíveis para comparação

1. **População** (vence quem tiver maior)
2. **Área (km²)** (vence quem tiver maior)
3. **PIB per capita** (vence quem tiver maior)
4. **Número de pontos turísticos** (vence quem tiver maior)
5. **Densidade populacional** (vence quem tiver **menor**)
6. **Super Poder** (valor calculado com base em todos os outros atributos)

## 🧮 Regras de comparação

- Em geral, vence a carta com o maior valor.
- **Exceção:** Na densidade populacional, vence a carta com o menor valor.
- Em caso de valores iguais, o jogo declara **empate**.

## 🛠️ Como compilar e executar

### Compilar:
```bash
gcc mestretema2.c -o supertrunfo
