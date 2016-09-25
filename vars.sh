#!/bin/sh
ls
GIT_HASH=
args=$1;shift
GIT_HASH=$1;
echo $GIT_HASH


### TEST @2

## Test @3

GITHUB_TOKEN="c04f75a2016bd1d8f11da49a1840ff1c2582bdf9";

curl -s -u ${GITHUB_TOKEN}:x-oauth-basic https://api.github.com/repos/mali-bmc/blink/commits/${GIT_HASH}/statuses
