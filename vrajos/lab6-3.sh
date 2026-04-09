echo "enter mark of three sub"
read a
read b
read c

sum=`expr $a + $b + $c`
per=`expr $sum / 3`

if [ $per -lt 75 ]
then 
	echo "grade b"
elif [ $per -lt 90 ]
then
	echo "grade a"
else
	echo "fail"
fi
echo "sum = $sum"
echo "percantage = $per"				