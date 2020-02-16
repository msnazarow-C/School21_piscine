if(!(ifconfig | grep -w "ether" | cut -d ' ' -f2))
then
echo "I am lost!\n"
fi

