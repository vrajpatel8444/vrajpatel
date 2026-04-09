echo "enetr num"
read a
echo "enetr num"
read b
echo "enetr num"
read c

if [ $a -gt $b ] && [ $b -gt $c ]
then 
	echo "a is largest"
fi	
if [ $b -gt $a ] && [ $b -gt $c ]
then 
	echo "b is largest"
fi
if [ $c -gt $a ] && [ $c -gt $b ]
then
	echo "c is largest"
fi