function tabuada(){
    var nun = Number.parseInt(document.getElementById('tabu').value);
    var tab = document.getElementById('Tabud'); 
    tab.innerHTML = '';
    for(c = 1; c <= 10; c++){
        var opt = document.createElement('option');
        opt.text = `${nun} X ${c} = ${c*nun}`;
        tab.appendChild(opt);
    }
}