#!/bin/bash

sfdk="$HOME/AuroraOS/bin/sfdk"
target='AuroraOS-4.0.2.209-base-i486'
engine='AuroraOS-4.0.2.209-base-i486.default'
path="$HOME/.config/AuroraOS-SDK/libsfdk/build-target-tools/aurora-os-build-engine/$engine"
folder='build-terminal'

cd "vocalis" || exit

# find root file *.pro
filePro=$(find "$PWD" -maxdepth 1 -type f -name '*.pro')

cd ../

if [ -d $folder ] ; then
   rm -rf $folder
fi

mkdir $folder
cd $folder || exit

eval "$sfdk config --push target $target"
eval "$path/qmake $filePro -spec linux-g++-32 CONFIG+=debug CONFIG+=qml_debug && $path/make qmake_all"
eval "$sfdk package"
