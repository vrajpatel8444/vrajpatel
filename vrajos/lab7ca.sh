echo "Enter num:"
read num
temp=$num
rev=0 
while [ $temp -ne 0 ]
do
	rem=$((temp % 10))
	rev=$((rev * 10 + rem))
	temp=$((temp / 10))
done

if [ $num -eq $rev ]
then
	echo "$num is palidrom."
else
	echo "$num is not palidrom."
fi