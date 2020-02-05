for ((a = -10*$SHI; a < 10*$SHI; a += $SHI))
do
	for ((b = -10*$SHI; b < 10*$SHI; b +=$SHP))
	do
		./a.out $a $b
	done
done
