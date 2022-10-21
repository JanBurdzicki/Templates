L = 0
R = 999

sciezka = "Testy"

for i in {L..R}
do
	echo $i

	# zrobic tez opcje z generowaniem testow
	# ./gen > Testy/in/in1.in

	# do ponizszej linijki mozna dodac timeout 1s

	./nazwa_programu < sciezka/in/nazwa_testow$i.in > output

	timeout 0.85s ./Druk\ Opcenie < int > out1

	# UWAGA zrobic flagi, -b, -w (tak mam w glownym), --ignore-all-space -r

	# ./sprawdzarka int out1 out2 -> tez tam mozna zrobic -> gdzie ./sprawdzarka/checkerka -> to pliczek cpp

	diff output sciezka/out/nazwa_testow$i.out

	# diff output Testy/Testy\ Stasia/out_caly/$i.out > /dev/null


	if [ $? -ne 0 ]
	then
		cat sciezka/in/nazwa_testow$i.in
		cat sciezka/out/nazwa_testow$i.out
		break
	fi
done

# TODO: nauczyc sie jak sie pisze funkcje i jakos ladnie to poukladac w rozne warianty

# #!/bin/bash
# nazwa=""

# # for i in {0..999}
# do
# 	# echo $i

# 	nazwa=$i
# 	# :'
# 	# if [ $i -lt 10 ]
# 	# then
# 		# nazwa="00${i}"
# 	# else
# 		# if [ $i -lt 100 ]
# 		# then
# 			# nazwa="0${i}"
# 		# else
# 			# nazwa="${i}"
# 		# fi
# 	# fi
# 	# '

# 	# echo $nazwa








# for i in {0..9}
# do
# 	for j in {0..9}
# 	do
# 		for k in {0..9}
# 		do
# 			echo $i$j$k

# vs {000..999}




# # for i in {1..100}
# # do
# 	# ./program < plik$i.in > blablabla
# 	# diff blablabla odpowiedz$i.out
# 	# if [ $? -ne 0 ]
# 	# then
# 		# cat plik$i.in
# 		# cat blablabla
# 		# break
# 	# fi
# # done

# for i in {1..100}
# do
# 	./a < sciezka/$i.in > output
# 	diff output sciezka/$i.out
# 	if [ $? -ne 0 ]
# 	then
# 		cat sciezka/$i.in
# 		cat sciezka/$i.out
# 		break
# 	fi
# done
