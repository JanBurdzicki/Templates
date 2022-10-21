for((i = 1; ; ++i)); do
	echo $i
	./gen $i > int
	# ./a < int > out1
	# ./brute < int > out2
	# diff -w out1 out2 || break

	# TODO: mozna zmienic, zeby miec jakies zmienne, ktore sie wpisuje i jest nazwa + cos

	diff -w <(./a < int) <(./brute < int) || break
done
