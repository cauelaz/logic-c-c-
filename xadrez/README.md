# 🧠 Projeto Jogo Xadrez — Níveis em C

> Um pequeno jogo em **C**, dividido em níveis independentes: **novato**, **aventureiro** e **mestre**.  
> Cada nível possui sua própria lógica e pode ser compilado e executado separadamente.

---

## 🗂️ Estrutura do Projeto

```
/src
├── nivel_novato.c
├── nivel_aventureiro.c
└── nivel_mestre.c
```

Cada arquivo representa um **nível do jogo**, podendo ser compilado individualmente para gerar seu próprio executável.

---

## ⚙️ Compilação

Você pode compilar manualmente cada nível com o `gcc`:

```bash
# Compilar o nível novato
gcc src/nivel_novato.c -o nivel_novato

# Compilar o nível aventureiro
gcc src/nivel_aventureiro.c -o nivel_aventureiro

# Compilar o nível mestre
gcc src/nivel_mestre.c -o nivel_mestre
```

Ou compilar todos de uma vez usando um Makefile (opcional):

```bash
make
```

---

## ▶️ Execução

Após compilar, execute o nível desejado:

```bash
./nivel_novato
# ou
./nivel_aventureiro
# ou
./nivel_mestre
```

Cada nível possui desafios diferentes e pode ser jogado individualmente.

---

## 💡 Exemplo Simples (`nivel_novato.c`)

```c
#include <stdio.h>

int main() {
    printf("Bem-vindo ao nível Novato!\n");
    printf("Aqui você começa sua jornada no mundo do C.\n");
    return 0;
}
```

---

## 🧰 Requisitos

- Compilador C (ex: `gcc` ou `clang`)
- Sistema operacional compatível: Linux, macOS ou Windows (com MinGW)
- Nenhuma dependência externa é necessária

---

## 🧠 Objetivo do Projeto

Este projeto tem como foco o **aprendizado prático de C**, abordando conceitos como:
- Estrutura básica de um programa em C  
- Entrada e saída padrão  
- Compilação modular  
- Organização de código simples  

---

## 📜 Licença

Distribuído sob a licença **MIT** — livre para estudar, modificar e distribuir.

---

## 👨‍💻 Autor

Desenvolvido por **Cauê**  
🌐 GitHub: [@cauelaz](https://github.com/cauelaz)

---
'