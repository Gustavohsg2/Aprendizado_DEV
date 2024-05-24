<!DOCTYPE html><html lang="en"><head><meta charset="UTF-8"><meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>EXERC - 15</title><!-- CONFIGS TAILWIND!!! --><script src="https://cdn.tailwindcss.com"></script>
    <script src="https://cdn.tailwindcss.com?plugins=forms,typography,aspect-ratio,line-clamp"></script>
    <script>
        tailwind.config = {
            theme: {
                extend: {
                    colors: {
                        purple: '#7e5bef',
                    }
                }
            }
        }
    </script>
    <style type="text/tailwindcss">
        @layer utilities {
            .content-auto {
                content-visibility: auto;
            }
        }
    </style>
</head>
<body class="bg-gradient-to-r from-indigo-500 from-10% via-sky-500 via-30% to-emerald-500 to-90%">
<main class="mx-auto my-36 w-96 h-auto text-center py-5 border bg-gray-900 px-5">
    <h1 class="text-6xl mb-3 text-white">CALCULADORA DE SALÁRIO</h1>
    <img src="img/logo.png" class="w-48 h-48 mx-auto" alt="UNIVAP">
    <form method="get" class="mt-5">
        <label for="nome" class="block mb-2 text-sm font-medium text-gray-900 dark:text-white">Nome do Funcionário:</label>
        <input type="text" name="nome" id="nome" aria-describedby="helper-text-explanation" class="bg-gray-50 border border-gray-300 text-gray-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-gray-700 dark:border-gray-600 dark:placeholder-gray-400 dark:text-white dark:focus:ring-blue-500 dark:focus:border-blue-500" placeholder="Nome" required><br>
        <label for="horas" class="block mb-2 mt-3 text-sm font-medium text-gray-900 dark:text-white">Número de Horas Trabalhadas:</label>
        <input type="number" name="horas" id="horas" aria-describedby="helper-text-explanation" class="bg-gray-50 border border-gray-300 text-gray-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-gray-700 dark:border-gray-600 dark:placeholder-gray-400 dark:text-white dark:focus:ring-blue-500 dark:focus:border-blue-500" placeholder="Horas Trabalhadas" required><br>
        <label for="valor_hora" class="block mb-2 mt-3 text-sm font-medium text-gray-900 dark:text-white">Valor por Hora Trabalhada:</label>
        <input type="number" name="valor_hora" id="valor_hora" aria-describedby="helper-text-explanation" class="bg-gray-50 border border-gray-300 text-gray-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-gray-700 dark:border-gray-600 dark:placeholder-gray-400 dark:text-white dark:focus:ring-blue-500 dark:focus:border-blue-500" placeholder="Valor por Hora" required><br>
        <label for="filhos" class="block mb-2 mt-3 text-sm font-medium text-gray-900 dark:text-white">Número de Filhos:</label>
        <input type="number" name="filhos" id="filhos" aria-describedby="helper-text-explanation" class="bg-gray-50 border border-gray-300 text-gray-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-gray-700 dark:border-gray-600 dark:placeholder-gray-400 dark:text-white dark:focus:ring-blue-500 dark:focus:border-blue-500" placeholder="Número de Filhos" required><br>
        <button type="submit" class="border text-white bg-gradient-to-br from-purple-600 to-blue-500 hover:bg-gradient-to-bl focus:ring-4 focus:outline-none focus:ring-blue-300 dark:focus:ring-blue-800 font-medium rounded-lg text-sm px-5 py-2.5 text-center me-2 mt-5">Calcular Salário</button>
    </form><div class="mt-5">
        <?php
            if ($_GET) {
                $nome = $_GET["nome"];
                $horas_trabalhadas = $_GET["horas"];
                $valor_hora = $_GET["valor_hora"];
                $numero_filhos = $_GET["filhos"];
                $salario_bruto = $horas_trabalhadas * $valor_hora;
                $gratificacao = 0;
                if ($numero_filhos > 3)
                    $gratificacao = $salario_bruto * 0.03 * ($numero_filhos - 3);
                $salario_liquido = $salario_bruto + $gratificacao;
                echo "<p class='text-white'>Nome do Funcionário: $nome</p><br><p class='text-white'>Salário Bruto: R$ $salario_bruto</p><br><p class='text-white'>Acréscimo de Salário por Gratificação: R$ $gratificacao</p><br><p class='text-white'>Salário Líquido: R$ $salario_liquido</p>";
            }
        ?>
    </div></main></body></html>