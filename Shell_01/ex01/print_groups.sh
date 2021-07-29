#!/bin/sh
groups $FT_USERS | tr ' ' ',' | tr -d '\n'
