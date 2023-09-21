filename="non_existent_file.txt"
if [ -e$filename ]; then # -e: It returns True if any type of file exists.
    echo "File exists" 
else
    echo "File does not exist"
fi

# run command to verify if file exists in your terminal - ls 