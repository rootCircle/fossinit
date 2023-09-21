string_var="5"
int_var=5

if [ "$string_var" -eq "$int_var" ]; then # string and variable are different, isn't it ?
    echo "Equal"
else
    echo "Not Equal"
fi
