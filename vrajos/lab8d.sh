echo "enter n"
read n

f=1

for((i=1;i<=n;i++))
do
	f=$((i * f))
done
echo "$f"	