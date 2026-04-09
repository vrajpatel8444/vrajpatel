echo "enter num"
read n

count=0

for((i=1;i<=n;i++))
do
	if((n%2==0))
	then
			count=1
			break
		fi
done

if((n<=1))
then
	echo "$num is not prime"
elif((count==0))
then
	echo "$num is prime"
else
	echo "$num is prime"
fi				