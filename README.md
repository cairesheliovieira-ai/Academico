# Calculadora Multiuso: IMC e Área Geométrica

Projeto desenvolvido em **Flowgorithm** para a disciplina de **Algoritmos e Programação** (2º Semestre).

O programa consiste em um sistema interativo que permite ao usuário escolher entre duas funcionalidades principais: o cálculo do **Índice de Massa Corporal (IMC)** com faixa de peso ideal ou o cálculo de **Área de Figuras Geométricas**.

---

##  Funcionalidades

### 1. Calculadora de IMC
* Solicitada a **altura** (em metros) e o **peso** (em quilogramas).
* Calcula o valor do IMC:
  $$\text{IMC} = \frac{\text{peso}}{\text{altura}^2}$$
* Exibe o IMC calculado e informa a **faixa de peso ideal** (peso mínimo e peso máximo recomendados segundo a OMS):
  * $\text{Peso Mínimo} = 18.5 \times \text{altura}^2$
  * $\text{Peso Máximo} = 24.9 \times \text{altura}^2$

### 2. Calculadora de Área Geográfica
Apresenta um menu interativo com 4 formas geométricas:
1. **Quadrado:** $A = \text{lado}^2$
2. **Retângulo:** $A = \text{base} \times \text{altura}$
3. **Triângulo:** $A = \frac{\text{base} \times \text{altura}}{2}$
4. **Círculo:** $A = \pi \times \text{raio}^2$ (considerando $\pi = 3.14159$)

---

## 🛠️ Requisitos e Tecnologias

* [Flowgorithm](http://www.flowgorithm.org/) (Versão 3.0 ou superior / 4.2 recomendada).
* Compatível com **Windows**. *(Para usuários de macOS/Linux, o arquivo `.fprg` pode ser visualizado via Wine/Parallels ou lido diretamente através do código fonte).*

---

## 📂 Estrutura do Arquivo

* `Calculadora_IMC_e_Area_v2.fprg`: Arquivo do fluxograma principal do Flowgorithm.

---
