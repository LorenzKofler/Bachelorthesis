default: build

build:
	pdflatex main.tex
	biber main
	pdflatex main.tex
	pdflatex main.tex

clean:
	-rm *.aux 
	-rm ./front/*.aux 
	-rm ./chapters/*.aux 
	-rm ./back/*.aux 
	-rm *.log 
	-rm *.lof 
	-rm *.bbl 
	-rm *.blg 
	-rm *.lot 
	-rm *.out 
	-rm *.toc 
	-rm *.bcf 
	-rm *.run.xml 
	-rm *.blx.bib 
