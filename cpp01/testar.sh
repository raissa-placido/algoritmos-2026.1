#!/bin/bash
# Nomes dos arquivos
PROGRAMA="./cpp01"
INPUT="entradas.txt"
OUTPUT="resultados.txt"

# Limpa o arquivo de resultados antes de começar
> "$OUTPUT"


# Lê o arquivo linha por linha e executa o programa
while read -r linha; do
    echo "Testando entrada: $linha"

# Executa o programa e joga a saída para o arquivo
    echo "Entrada: $linha" >> "$OUTPUT"
    echo "$linha" | $PROGRAMA >> "$OUTPUT"
    echo "-------------------" >> "$OUTPUT"
    
done < "$INPUT"

echo "Testes concluídos! Confira os resultados em: $OUTPUT"
