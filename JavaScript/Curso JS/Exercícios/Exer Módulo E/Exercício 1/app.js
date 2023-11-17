function contar(){
    document.getElementById('resu').innerText = 'Contando: \n'; 
    var ini = Number.parseInt(document.getElementById('inic').value);
    var fim = Number.parseInt(document.getElementById('fim').value);
    var passo = Number.parseInt(document.getElementById('passo').value);
    if(ini < 0 || fim < 0 || passo <= 0){
        window.alert('[ERRO] Motivo: Nenhum número pode ser negativo ou o passo não pode ser 0!');
    }else{
        for(var c = ini; c <= fim; c = c+passo){
        document.getElementById('resu').innerHTML += ` ${c} &#128073`;
        }
        document.getElementById('resu').innerHTML += '&#127988'
    }
}