#!/bin/sh
ls
GIT_HASH=
args=$1;shift
GIT_HASH=$1;
echo $GIT_HASH

echo $build.vcs.number
