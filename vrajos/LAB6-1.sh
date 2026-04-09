echo "enetr num"
read a
echo "enetr num"
read b
echo "enetr num"
read c

if [ $a -gt $b ] 
then 
	if [ $a -gt $c ]
then 
	echo "a is largest"
else 	
	echo "c is largest"
fi
else
	if [ $b -gt $c ] 
then
	echo "b is largest"
else 	
	echo "c is largest"
fi	

fi