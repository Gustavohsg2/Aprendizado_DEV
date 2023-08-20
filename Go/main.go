package main

import "fmt"

func main() {
    // Declaração de variáveis
    numero := 10
    texto := "Olá, mundo!"
    condicao := true

    // Condicional if
    if condicao {
        fmt.Println("A condição é verdadeira!")
    } else {
        fmt.Println("A condição é falsa!")
    }

    // Imprimindo variáveis
    fmt.Println("O valor do número é:", numero)
    fmt.Println("O valor do texto é:", texto)


    // Estrutura de repetição (for)
    for i := 0; i < 5; i++ {
        fmt.Println("Contagem:", i)
    }

    // Estrutura condicional (if-else)
    idade := 18
    if idade < 18 {
        fmt.Println("Você é menor de idade.")
    } else if idade == 18 {
        fmt.Println("Você tem 18 anos.")
    } else {
        fmt.Println("Você é maior de idade.")
    }

    // Estrutura de repetição (while equivalente)
    contador := 1
    for contador <= 5 {
        fmt.Println("Contador:", contador)
        contador++
    }

    // Estrutura de repetição (loop infinito com break)
    for {
        fmt.Println("Loop infinito...")
        break
    }

}