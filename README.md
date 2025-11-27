# Super Trunfo — Desafio Final (Linguagem C)

Este projeto é a versão final do Super Trunfo desenvolvido para o curso de programação em C.  
Ele reúne todos os conceitos aprendidos:

- Estruturas condicionais (`if`, `else`, `switch`)
- Menus dinâmicos
- Operador ternário
- Funções auxiliares
- Comparação de múltiplos atributos
- Tratamento de entradas inválidas
- Lógica completa do jogo

---

## 🎮 Como o jogo funciona

O jogador:

1. Cadastra duas cartas de cidades.
2. Escolhe **dois atributos diferentes** para comparação:
   - População  
   - Área  
   - PIB  
   - Pontos turísticos  
   - Densidade demográfica (onde menor vence!)
3. O sistema:
   - Compara cada atributo separadamente
   - Soma os dois atributos
   - Declara a carta vencedora
   - Trata empate adequadamente

---

## 🔧 Como compilar

Usando GCC:

```
gcc super_trunfo_final.c -o supertrunfo
```

Executando:

```
./supertrunfo
```

---

## 🧭 Exemplo de menu dinâmico

```
===== ESCOLHA O PRIMEIRO ATRIBUTO =====
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica
Opção: 3

===== ESCOLHA O SEGUNDO ATRIBUTO =====
1 - População
2 - Área
4 - Pontos Turísticos
5 - Densidade Demográfica
Opção: 1
```

---

## 📁 Arquivos incluídos

- `super_trunfo_final.c`
- `README.md`

---

## 🚀 Bom estudo e boa sorte no SAVA!
