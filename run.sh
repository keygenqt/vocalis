#!/bin/bash

app="com.keygenqt.vocalis"
sfdk="$HOME/AuroraOS/bin/sfdk"
folder='build-terminal'

cd $folder || exit

eval "$sfdk config --push device 'Aurora OS Emulator 4.0.2.209-base'"
eval "$sfdk deploy --sdk --silent"
eval "$sfdk device exec /usr/bin/$app"
