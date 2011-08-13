JARS = /usr/share/java/swt.jar:trove-2.0.4.jar:pathjson.jar:icu4j-localespi-4_0_1.jar:icu4j-charsets-4_0_1.jar:icu4j-4_0_1.jar
OPTS = -g:none -target 1.5 -nowarn

../ubuntu32/gemxlib.jar: ../ubuntu32/GemXMain.class
	javac $(OPTS) -classpath $(JARS):. ccfinderx/*.java
	javac $(OPTS) -classpath $(JARS):. gemx/*.java
	javac $(OPTS) -classpath $(JARS):. gemx/dialogs/*.java
	javac $(OPTS) -classpath $(JARS):. gemx/scatterplothelper/*.java
	javac $(OPTS) -classpath $(JARS):. model/*.java
	javac $(OPTS) -classpath $(JARS):. utility/*.java
	javac $(OPTS) -classpath $(JARS):. res/*.java
	javac $(OPTS) -classpath $(JARS):. constants/*.java
	javac $(OPTS) -classpath $(JARS):. customwidgets/*.java
	javac $(OPTS) -classpath $(JARS):. resources/*.java
	jar cvf ../ubuntu32/gemxlib.jar ccfinderx/*.class gemx/*.class gemx/*.png gemx/dialogs/*.class gemx/dialogs/*.png gemx/scatterplothelper/*.class model/*.class utility/*.class res/*.class res/messages.properties constants/*.class customwidgets/*.class resources/*.class

../ubuntu32/GemXMain.class: GemXMain.java
	javac $(OPTS) -classpath $(JARS):. $<
	@mv GemXMain.class ../ubuntu32/GemXMain.class

clean:
	@rm -f ccfinderx/*.class gemx/*.class gemx/dialogs/*.class gemx/scatterplothelper/*.class model/*.class utility/*.class res/*.class constants/*.class customwidgets/*.class resources/*.class

clean-all:
	@rm -f ccfinderx/*.class gemx/*.class gemx/dialogs/*.class gemx/scatterplothelper/*.class model/*.class utility/*.class res/*.class constants/*.class customwidgets/*.class resources/*.class
	@rm -f ../ubuntu32/gemxlib.jar
	@rm -f ../ubuntu32/GemXMain.class
