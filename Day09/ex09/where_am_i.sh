if [[ -z $( ifconfig | grep -w "inet" | cut -d ' ' -f2) ]];
then	echo "I am lost!"
else  ifconfig | grep -w "inet" | cut -d ' ' -f2
fi
