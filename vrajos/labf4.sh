echo "enter a num"
read a
echo "enter b num"
read b

sum=`expr $a + $b`
echo "sum= $sum"

sub=`expr $a - $b`
echo "sub= $sub"

mul=`expr $a \* $b`
echo "mul= $mul"

div=`expr $a / $b`
echo "div= $div"

mod=`expr $a % $b`
echo "mod= $mod"