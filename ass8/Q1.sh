#!/bin/sh


awk -F"|" '{printf "%s | %s\n", $3, $1}' < $2 | sort -r -n | head -$1 | tail -1 | awk -F"|" '{print $2 }'
