# 🧮 Calculadora Científica Completa em C

Uma calculadora em terminal desenvolvida na linguagem **C**, com suporte a **20 operações matemáticas**, desde a aritmética básica até funções trigonométricas, exponenciais e estatísticas simples.

---

## 🚀 Funcionalidades

A calculadora possui um menu interativo com as seguintes operações:

| Código | Operação | Descrição |
| :---: | :--- | :--- |
| **1** | Adição (`+`) | Soma dois números |
| **2** | Subtração (`-`) | Subtrai dois números |
| **3** | Multiplicação (`*`) | Multiplica dois números |
| **4** | Divisão (`/`) | Divide dois números (com verificação de divisão por zero) |
| **5** | Módulo (`%`) | Resto da divisão inteira |
| **6** | Potência (`x^y`) | Eleva a base $x$ ao expoente $y$ |
| **7** | Raiz Quadrada (`√x`) | Calcula a raiz quadrada de $x$ |
| **8** | Raiz Cúbica (`∛x`) | Calcula a raiz cúbica de $x$ |
| **9** | Fatorial (`x!`) | Calcula o fatorial de $x$ |
| **10** | Porcentagem (`x% y`) | Calcula $x\%$ de $y$ |
| **11** | Seno (`sen(x)`) | Calcula o seno em radianos |
| **12** | Cosseno (`cos(x)`) | Calcula o cosseno em radianos |
| **13** | Tangente (`tan(x)`) | Calcula a tangente em radianos |
| **14** | Logaritmo Base 10 (`log10`) | Calcula o logaritmo na base 10 |
| **15** | Logaritmo Natural (`ln(x)`) | Calcula o logaritmo natural (base $e$) |
| **16** | Exponencial (`e^x`) | Eleva o número de Euler $e$ ao expoente $x$ |
| **17** | Módulo / Valor Absoluto (`|x|`) | Retorna o valor absoluto de $x$ |
| **18** | Inverso (`1/x`) | Retorna o inverso multiplicativo de $x$ |
| **19** | Máximo (`max`) | Compara dois valores e retorna o maior |
| **20** | Mínimo (`min`) | Compara dois valores e retorna o menor |
| **0** | **Sair** | Encerra a execução do programa |

---

## 🛠️ Requisitos e Compilação

Para compilar e executar o código, você precisará de um compilador C (como o `gcc` ou `clang`).

### 📦 Bibliotecas Utilizadas
* `<stdio.h>`: Entrada e saída padrão.
* `<math.h>`: Funções matemáticas avançadas.

### ⚙️ Como Compilar

No terminal, execute o seguinte comando no diretório do arquivo:

```bash
gcc -o calculadora main.c -lm
