<!DOCTYPE html><html lang="en"><head><meta charset="UTF-8"><meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>EXERC - 18</title><!-- CONFIGS TAILWIND!!! --><script src="https://cdn.tailwindcss.com"></script>
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
    <h1 class="text-6xl mb-3 text-white">FAVORÁVEL</h1>
    <img src="img/logo.png" class="w-48 h-48 mx-auto" alt="UNIVAP">
    <form method="get" class="mt-5">
        <label for="peso" class="block mb-2 text-sm font-medium text-gray-900 dark:text-white">Peso (em kg):</label>
        <input type="number" step="0.01" name="peso" id="peso" aria-describedby="helper-text-explanation" class="bg-gray-50 border border-gray-300 text-gray-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-gray-700 dark:border-gray-600 dark:placeholder-gray-400 dark:text-white dark:focus:ring-blue-500 dark:focus:border-blue-500" placeholder="Peso" required><br>
        <label for="altura" class="block mb-2 mt-3 text-sm font-medium text-gray-900 dark:text-white">Altura (em metros):</label>
        <input type="number" step="0.01" name="altura" id="altura" aria-describedby="helper-text-explanation" class="bg-gray-50 border border-gray-300 text-gray-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-gray-700 dark:border-gray-600 dark:placeholder-gray-400 dark:text-white dark:focus:ring-blue-500 dark:focus:border-blue-500" placeholder="Altura" required><br>
        <button type="submit" class="border text-white bg-gradient-to-br from-purple-600 to-blue-500 hover:bg-gradient-to-bl focus:ring-4 focus:outline-none focus:ring-blue-300 dark:focus:ring-blue-800 font-medium rounded-lg text-sm px-5 py-2.5 text-center me-2 mt-5">Verificar Peso Favorável</button>
    </form><div class="mt-5"><?php
        if ($_GET) {
            $peso = $_GET["peso"];
            $altura = $_GET["altura"];
            $imc = $peso / ($altura * $altura);
            if ($imc < 20)
                $situacao = "Abaixo do peso";
            else if ($imc >= 20 && $imc < 25)
                $situacao = "Peso Normal";
            else if ($imc >= 25 && $imc < 30)
                $situacao = "Sobrepeso";
            else if ($imc >= 30 && $imc < 40)
                $situacao = "Obeso";
            else
                $situacao = "Obeso Mórbido";
            echo "<p class='text-white'>Sua situação de peso é: $situacao</p>";
        }
        ?></div></main></body></html>