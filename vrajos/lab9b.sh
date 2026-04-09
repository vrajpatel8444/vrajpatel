echo "enter gender m/f"
read gender

case $gender in
	M|m) echo "male";;
	F|f) echo "female";;
	*) echo "invalid"
esac