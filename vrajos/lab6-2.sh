echo "enter a year"
read a

if [ $((a % 400)) -eq 0 ]
then
	echo"year is leep year"
elif [ $((a % 100)) -eq 0 ]
 then
		echo"year is not leep year"	
elif [ $((a % 4)) -eq 0 ]
 then
 	echo"year is leep year"
 		
 else
 	echo"year is not leep year"			
fi