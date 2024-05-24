<!DOCTYPE html><html lang="en"><head><meta charset="UTF-8"><meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>EXERC - 13</title><!-- CONFIGS TAILWIND!!! --><script src="https://cdn.tailwindcss.com"></script>
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
</head><body class="bg-gradient-to-r from-indigo-500 from-10% via-sky-500 via-30% to-emerald-500 to-90%">
<main class="mx-auto my-36 w-96 h-auto text-center py-5 border bg-gray-900 px-5">
    <h1 class="text-6xl mb-3 text-white">NADADOR</h1>
    <img src="img/logo.png" class="w-48 h-48 mx-auto" alt="UNIVAP">
    <form method="get" class="mt-5">
        <label for="idade" class="block mb-2 text-sm font-medium text-gray-900 dark:text-white">Idade do Nadador:</label>
        <input type="number" name="idade" id="idade" aria-describedby="helper-text-explanation" class="bg-gray-50 border border-gray-300 text-gray-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-gray-700 dark:border-gray-600 dark:placeholder-gray-400 dark:text-white dark:focus:ring-blue-500 dark:focus:border-blue-500" placeholder="Idade" required><br>
        <button type="submit" class="border text-white bg-gradient-to-br from-purple-600 to-blue-500 hover:bg-gradient-to-bl focus:ring-4 focus:outline-none focus:ring-blue-300 dark:focus:ring-blue-800 font-medium rounded-lg text-sm px-5 py-2.5 text-center me-2 mt-5">Classificar</button>
    </form><div class="mt-5"><?php
        if ($_GET) {
            $idade = $_GET["idade"];
            if ($idade >= 5 && $idade <= 7)
                $categoria = "Infantil A";
            else if ($idade >= 8 && $idade <= 11)
                $categoria = "Infantil B";
            else if ($idade >= 12 && $idade <= 13)
                $categoria = "Juvenil A";
            else if ($idade >= 14 && $idade <= 17)
                $categoria = "Juvenil B";
            else
                $categoria = "Adultos";
            echo "<p class='text-white'>O nadador está na categoria: $categoria</p>";
        }
        ?>
    </div></main></body></html>