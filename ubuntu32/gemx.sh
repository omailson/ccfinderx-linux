#!/bin/bash

pushd `dirname $0`

java -Djava.library.path=/usr/lib/:. -classpath /usr/share/java/swt.jar:icu4j-4_0_1.jar:icu4j-charsets-4_0_1.jar:icu4j-localespi-4_0_1.jar:pathjson.jar:trove-2.0.4.jar:gemxlib.jar:. GemXMain

popd
