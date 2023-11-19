let array = [];
p_tot = document.getElementById('total');
p_mai = document.getElementById('maior');
p_men = document.getElementById('menor');
p_som = document.getElementById('soma');
p_med = document.getElementById('media');
sec = document.getElementById('sec');

let tab = document.getElementById('tabud');

function adicionar() {
    let num = Number(document.getElementById('num').value);
    var pos = array.indexOf(num);
    if(num > 100 || num < 1 || pos != -1){
        window.alert('[ERROR] Não pode escrever números menores que 1 ou maiores que 100, ou número repetido!!!')
    }else{
        apagar();
        array.push(num);

        let item = document.createElement('option');
        item.text = `Valor ${num} adicionado.`;
        tab.appendChild(item);
    }
}

function finali() {
    let tama = array.length;
    p_tot.innerText = `Foram cadastrados ${tama} números.`;
    array.sort();
    p_mai.innerText = `O maior número é o ${array[tama - 1]}.`;
    p_men.innerText = `O menor número é o ${array[0]}.`;
    var soma = 0;
    for (var c = 0; c <= tama - 1; c++) {
        soma = soma + array[c];
    }
    p_som.innerText = `A soma de todos os números é ${soma}.`;
    p_med.innerText = `A média de todos os números é ${soma/tama}.`;
    sec.style.height = '450px';
}
function apagar() {
    p_tot.innerText = '';
    p_mai.innerText = '';
    p_men.innerText = '';
    p_som.innerText = '';
    p_med.innerText = '';
    sec.style.height = '300px';
}

// 1 - Fazer Curso de HTML e CSS
// 2 - Estudar funções
// 3 - Estudar objetos
// 4 - Modularização
// 5 - Estudar RegEx
// 6 - Estudar JSON
// 7 - Estudar AJAX
// 8 - Estudar NodeJS/frameworks