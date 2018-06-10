SOURCES := $(shell find notes/ -type f -name '*.md')
OBJECTS := $(SOURCES:%.md=%.pdf)

all: $(OBJECTS)

%.pdf: %.md
	pandoc $< -V lang=ru -V geometry="top=1cm, bottom=1.5cm, left=1cm, right=1cm" -o $@ --template=template/template.latex

