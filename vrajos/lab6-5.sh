echo "enter salary"
read bs
if[ $bs -ge 30000 ]
then
	DA=`expr ($bs \* 95) / 100`
	HRA=`expr (( $bc \* 30) / 100) + DA`
	echo "salary = $bs , DA=$DA , HRA=$HRA"
elif [ $bs -ge 20000 ]    
then
	DA=`expr ($bs \* 95) / 100`
	HRA=`expr (( $bc \* 25) / 100) + DA`
	echo "salary = $bs , DA=$DA , HRA=$HRA"
elif [ $bs -ge 10000 ]    
then
    DA=`expr ($bs \* 20) / 100`
	HRA=`expr (( $bc \* 80) / 100) + DA`
	echo "salary = $bs , DA=$DA , HRA=$HRA"
    
fi		