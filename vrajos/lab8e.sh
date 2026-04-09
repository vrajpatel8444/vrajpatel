echo "enter n"
read a

for((i=1;i<=a;i++))
do
	if [ $((a % i)) -eq 0 ]
	then
		echo -n " $i " 
	fi	
done	
