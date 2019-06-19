#!/bin/bash

for i in $(ls -d */);
do
    cd $i;
    make fclean;
    cd ..
done
