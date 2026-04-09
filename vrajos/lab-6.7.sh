echo "Enter a:"
read a

echo "Enter b:"
read b

if [ $a -eq $b ]
then
	echo "Both are equal"
elif [ $a -gt $b ]
	then
		echo "a is greater"
else
	echo "b is greater"
fi