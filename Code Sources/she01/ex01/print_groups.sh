#!/bin/bash

printf "%s" "$(id -nG "$FT_USER" | tr ' ' ',')"
