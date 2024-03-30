<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/css/bootstrap.min.css" rel="stylesheet">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/js/bootstrap.bundle.min.js"></script>
    <title>CPF_PHP</title>
    <link rel="stylesheet" href="style/main.css">
    <style>
        body{
            align-items:center;
            background-image: url("img/fundo.jpg");
            background-repeat: no-repeat;
            background-attachment: fixed;
            background-size: 100% 100%;
        }
    </style>
</head>
<body class="bg-primary">
    
    <div class="container">
        <div class="caixa col-sm-5 text-center text-white p-3">
            <img class="img-fluid logo" src="img/logo.png" alt="Logo" />
            <h1>TESTE DE CPF</h1>
            <br>
            <form class="row text-start" action="test_cpf.php" method="post">   
                <label for="cpf">CPF</label>             
                <div class="input-group mb-3 col-sm-9" style="margin: auto;">        
                    <input type="text" name="cpf" class="form-control" placeholder="Digite seu cpf aqui..."/>
                </div>
                <button type="submit" class="btn btn-primary" style="width: 200px; margin: auto;">VERIFICAR</button>        
            </form>
            <?php
                $cpf = $_POST['cpf'];
                if(strlen($cpf) == 11){
                    $y = 10;
                    $n10 = $n11 = 0;
                    for ($x=0; $x <= 8; $x++){
                        $n10 += $cpf[$x]*$y;
                        $n11 += $cpf[$x]*($y+1);
                        $y--;     
                    }
                    $n10 = $n10%11>=2 ? 11 - ($n10%11) : 0;
                    $n11 += 2*$n10;
                    $n11 = $n11%11>=2 ? 11 - ($n11%11) : 0;
                    echo $cpf;	
                    if($n10==$cpf[9] && $n11==$cpf[10])
                        printf('<p style="color: green;"><b>CPF VÁLIDO</b></p>'); 
                    else
                        printf('<p style="color: red;"><b>CPF INVÁLIDO</b></p>');
                } else {
                    printf('<p style="color: red;"><b>APENAS 11 DÍGITOS!</b></p>');
                }
            ?>
        </div>   
    </div>
</body>
</html>