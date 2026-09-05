#!/bin/bash
if [ "$#" -eq 0 ]; then
    exit 9
fi

echo "$1"

for FRUIT in apple orange fig cherry
do
    if [ "$FRUIT" != "fig" ]; then
        echo "== $FRUIT"
    fi
done

exit 4

