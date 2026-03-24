#!/bin/bash
cd ..
echo "usuarios_regitrados:$(wc -l datos/usuarios.txt)"
echo "Errores_en_acceso:$(grep error datos/accesos.log | wc -l)"
echo "Warnings_en_accesos:$(grep warning datos/accesos.log | wc -l)"
echo "Errores_en_eventos:$(grep error datos/eventos.log | wc -l)"

