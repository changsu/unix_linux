#!/bin/bash

OLD_WORD="test"
UPPER_OLD_WORD=`echo $OLD_WORD | tr 'a-z' 'A-Z'`
NEW_WORD="$1"
UPPER_NEW_WORD=`echo $NEW_WORD | tr 'a-z' 'A-Z'`
MAKEFILE_DIR="/Users/chang/Documents/Self_Learning/unix_linux/Makefile"
FINAL_MAKEFILE="Makefile"
TEMPLATE_FILE_PATH="/Users/chang/Documents/Self_Learning/unix_linux/test.c"

if [ $# -ne 1 ]; then
    echo "Usage: ./makefile_autor.sh new_word"
    exit 1
fi

if [ ! -f "Makefile" ] ; then
    cp MAKEFILE_DIR .
fi

# replace keyword in template makefile
sed -e "s/$OLD_WORD/$NEW_WORD/g" -e "s/$UPPER_OLD_WORD/$UPPER_NEW_WORD/g" $MAKEFILE_DIR > $FINAL_MAKEFILE

# copy over template .c file and rename
cp $TEMPLATE_FILE_PATH "$1.c"


