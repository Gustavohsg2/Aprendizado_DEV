var nome = 'Olavo'; // Definir a tipagem!
// let nome = 'Gustavo' ele deduz a tipagem
nome = 'Gustavo';
var lista; // Para arrays
// let lista: Array<string> 
lista = ['Gustavo', 'Henrique'];
// Tipando uma tupla
var aluno;
aluno = ['Gustavo', 16, true];
// Objetos
//let objeto: object;
var objeto;
//let objeto: Record<string, string>
objeto = { nome: 'Gustavo', idade: 16, ehLegal: true };
// Funções
function soma(a, b) {
    return a + b;
}
var soma2 = function (a, b) {
    return a + b;
};
var id; // Union, o tipo pode ser um ou outro
var user;
var medico;
var aluno2; // Não especificado então é um aluno como padrão
var programador;
var lista2; // Ou Lista apenas para ser string como padrão
