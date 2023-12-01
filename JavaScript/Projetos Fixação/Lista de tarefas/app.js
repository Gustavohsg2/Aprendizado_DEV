box = document.getElementById('checkbox');
input = document.getElementById('input');
table = document.getElementById('tabela-corpo');
dia = new Date();


box.addEventListener('change', function() {
// Verificando se a checkbox está marcada
if (checkbox.checked) {
    document.getElementById('lb').innerHTML = 'Feito';
} else {
    document.getElementById('lb').innerHTML = 'Não-Feito';
}
});


function add_tarefa() {
    text = input.value;
    
    tr = document.createElement('tr');
    td1 = document.createElement('td');
    td2 = document.createElement('td');
    td3 = document.createElement('td');

    td1.text = `${input.value}`;
    td2.text = `${dia.getDate()}/${dia.getMouth()}/${dia.getFullYear()}`

    tr.appendChild(td1);
    tr.appendChild(td2);

    table.appendChild(tr);
}