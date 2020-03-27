
# execute o comando: chmod u+r+x run.sh 
# em seguida: ./run.sh

gcc -pipe -std=c99 -Wall src/* -o main && mv main build/ 
./build/main
