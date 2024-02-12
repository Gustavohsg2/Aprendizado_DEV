let nome: string = 'Olavo'; // Definir a tipagem!
// let nome = 'Gustavo' ele deduz a tipagem

nome = 'Gustavo';

let lista: string[]; // Para arrays
// let lista: Array<string> 

lista = ['Gustavo', 'Henrique'];

// Tipando uma tupla
let aluno: [string, number, boolean];

aluno = ['Gustavo', 16, true];


// Objetos
//let objeto: object;
let objeto: { nome: string; idade: number; ehLegal: boolean }
//let objeto: Record<string, string>

objeto = {nome: 'Gustavo', idade: 16, ehLegal: true}

// Funções
function soma(a: number, b: number): number //u  Tipage do retorno 
{    
    return a + b;
}

const soma2 = (a: number, b:number) => { //
    return a + b
}

let id: string | string // Union, o tipo pode ser um ou outro

//  let id1
//  let id2
//  let id3
//  let id4

type Id = number | string 

//type Usuario = { nome: string; idade: number }


interface Usuario { // Para objetos.
    nome: string,
    idade:  number
}

let user: Usuario

// type Pessoa = {}
interface Pessoa<T = Aluno>{ // <T> é um argumento
    nome: string
    idade: number
    carro?: string // Propriedade opcional
    profissao: T
}

// type Aluno = Pessoa & { } 
interface Aluno /*extends Pessoa*/{ // Extendendo interfaces
    rm: number
}

/*
let aluno2: Aluno = {
    idade: 16,
    rm: 520817,
    nome: 'Gustavo',
    //carro: 'Volvo' | Opcional
}
*/
interface Programador {
    crea: string
}

interface Medico{
    crm: string
}

let medico: Pessoa<Medico>
let aluno2: Pessoa // Não especificado então é um aluno como padrão
let programador: Pessoa<Programador>


type Lista<T = string> = T[]

let lista2: Lista<Number> // Ou Lista apenas para ser string como padrão