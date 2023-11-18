//Recursividade

function fatorial(n1) {
    if(n1 == 1){
        return 1;
    }else{
        return n1 * fatorial(n1 - 1);
    }
    
}