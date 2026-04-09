echo "enter num a"
read  a

echo "enter num b"
read  b

echo "enter op"
read  op

case $op in
	+) echo "r = $((a + b))";;
	-)echo "r = $((a - b))";;
	\*)echo "r = $((a * b))";;
	/)echo "r = $((a / b))";;
	*)echo "invalid op";;
esac