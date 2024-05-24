<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8"><meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exerc - 6</title>
    <!--                CONFIGS TAILWIND!!!                   -->
    <script src="https://cdn.tailwindcss.com"></script>
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
        <h1 class="text-6xl mb-3 text-white">GRAUS</h1>
        <img src="img/logo.png" class="w-48 h-48 mx-auto" alt="UNIVAP">
        <div class='text-white'>
            <?php
                for ($fahrenheit = 40; $fahrenheit <= 70; $fahrenheit++) {
                    $celsius = (5/9) * ($fahrenheit - 32);
                    printf("<tr><br><td>%0.2f °F</td><hr><br><td>%0.2f °C</td></tr>", $fahrenheit, $celsius);
                }
            ?>
        </div>
    </main>
</body>
</html>