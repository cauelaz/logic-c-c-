# ⚓ Batalha Naval — Desafios em C

Implementação progressiva do jogo **Batalha Naval** em linguagem C, com três níveis de dificuldade que exploram desde manipulação básica de matrizes até lógica geométrica aplicada.

## 📁 Estrutura

```
BatalhaNaval/
├── src/
│   ├── novato.c       # Nível 1 — Fundamentos
│   ├── aventureiro.c  # Nível 2 — Intermediário
│   └── mestre.c       # Nível 3 — Avançado
└── Exemplos/          # Códigos de apoio e estudo
```

---

## 🎯 Desafios

### 🧩 Nível 1 — Novato
**Arquivo:** `src/novato.c`  
Criação do tabuleiro e posicionamento inicial de navios.

**Detalhes:**
- Matriz 10x10 preenchida com água (`0`)
- Dois navios (tamanho 3): um horizontal e um vertical  
- Exibição com coordenadas A–J e 1–10  
- Legenda: `0 = água`, `3 = navio`

**Conceitos:** inicialização de matrizes, loops aninhados e estruturação de dados.

---

### ⚙️ Nível 2 — Aventureiro
**Arquivo:** `src/aventureiro.c`  
Expansão do jogo com novos tipos de navios e validações.

**Detalhes:**
- Quatro navios (tamanho 3): horizontal, vertical e dois diagonais  
- Verificação de limites e sobreposição  
- Impressão detalhada do tabuleiro e navios

**Conceitos:** validação lógica, diagonais em matrizes e controle de colisão.

---

### 🧠 Nível 3 — Mestre
**Arquivo:** `src/mestre.c`  
Adição de habilidades com efeitos em área (matrizes 5x5).

**Detalhes:**
- Habilidades: **Cone**, **Cruz** e **Octaedro**  
- Sobreposição entre matrizes de efeito e tabuleiro  
- Representação: `0 = água`, `3 = navio`, `5 = área de habilidade`

**Conceitos:** geração dinâmica de padrões geométricos e sobreposição de dados.

---

## ⚙️ Compilação e Execução

```bash
# Compilar
gcc src/novato.c -o novato.exe
gcc src/aventureiro.c -o aventureiro.exe
gcc src/mestre.c -o mestre.exe

# Executar
./novato.exe
./aventureiro.exe
./mestre.exe
```

---

## 📊 Saída Esperada

Cada nível exibe:
- Tabuleiro formatado com coordenadas
- Estados numéricos (`0`, `3`, `5`)
- Informações sobre navios e habilidades

---


## 🎓 Conceitos-Chave

- Controle de matrizes 2D  
- Algoritmos de posicionamento e validação  
- Construção de padrões geométricos  
- Estrutura e organização de código C

## 📜 Licença

Distribuído sob a licença **MIT** — livre para estudar, modificar e distribuir.

---

## 👨‍💻 Autor

Desenvolvido por **Cauê**  
🌐 GitHub: [@cauelaz](https://github.com/cauelaz)

---
