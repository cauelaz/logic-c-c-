# 🃏 Super Trunfo - Países  

Um jogo de cartas no terminal feito em **C**, onde você compara atributos de países e descobre qual vence na rodada.  

## 🎮 Modos de Jogo  

O jogo possui **três níveis de dificuldade**, cada um com regras diferentes:  

1. **Novato** 🟢  
   - Dois países são sorteados.  
   - O jogador escolhe um atributo no menu interativo.  
   - O programa compara e mostra o vencedor.  

2. **Aventureiro** 🟡  
   - Jogador e computador recebem cartas.  
   - O jogador escolhe o atributo a ser comparado.  
   - O computador joga automaticamente contra você.  

3. **Mestre** 🔴  
   - Versão mais completa.  
   - Inclui comparação de **dois atributos**, menus dinâmicos e soma de pontos.  
   - Possibilidade de armazenar placar e ranking.  

## 🛠️ Atributos Comparáveis  

Cada carta de país possui os seguintes atributos:  

- Nome do país (informativo, não usado em comparação)  
- População (int)  
- Área (float)  
- PIB (float)  
- Número de pontos turísticos (int)  
- Densidade demográfica (float)  

📌 **Regra especial:**  
- Para todos os atributos, vence o **maior valor**.  
- **Exceto na Densidade Demográfica**, onde vence o **menor valor**.  

## 🚀 Como Compilar e Rodar  

1. Certifique-se de ter o **GCC** (ou outro compilador C) instalado.  
2. Clone ou baixe este repositório.  
3. No terminal, navegue até a pasta do projeto.  
4. Compile e execute de acordo com o modo desejado:  

```bash
# Para o modo Novato
gcc super_trunfo_novato.c -o novato
./novato  

# Para o modo Aventureiro
gcc super_trunfo_aventureiro.c -o aventureiro
./aventureiro  

# Para o modo Mestre
gcc super_trunfo_mestre.c -o mestre
./mestre  
```

## 🏆 Resultado da Rodada  

Após a escolha do(s) atributo(s), o jogo exibe:  
- O nome dos dois países.  
- O(s) atributo(s) comparado(s).  
- Os valores de cada carta.  
- A soma dos atributos (modo Mestre).  
- O vencedor da rodada ou **Empate!**  
