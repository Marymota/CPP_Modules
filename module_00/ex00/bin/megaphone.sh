#!/usr/bin/bash

./megaphone "shhhhh... I think the students are asleep..." > ./bin/output
./megaphone Damnit " ! " "Sorry students, I thought this thing was off." >> ./bin/output
./megaphone >> ./bin/output

./megaphone "shhhhh... I think the students are asleep..."
./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
./megaphone
echo  ;

cd ./bin
diff -s output solution
rm output
cd ..
