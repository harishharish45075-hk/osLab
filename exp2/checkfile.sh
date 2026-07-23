#!/bin/bash
echo "number of arguments supplied:$#"
for item in "$@"
do
  if[-f"$item"]
  then
  echo "$item is a file"
  lines=$(wc-1<"$item")
  echo"Number of lines:$lines"
elif[ -d"$item"]
then
  echo"$item is a directory"
else 
  echo"$item does not exist"
fi
done
