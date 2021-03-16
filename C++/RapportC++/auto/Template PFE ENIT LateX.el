(TeX-add-style-hook "Template PFE ENIT LateX"
 (lambda ()
    (LaTeX-add-bibliographies
     "biblio")
    (LaTeX-add-labels
     "fig:exemple"
     "tab:exemple")
    (TeX-run-style-hooks
     "epstopdf"
     "aecompl"
     "ae"
     "fontenc"
     "T1"
     "amssymb"
     "amsmath"
     "amsfonts"
     "slashbox"
     "latexsym"
     "array"
     "mathrsfs"
     "inputenc"
     "latin1"
     "fancyhdr"
     "graphicx"
     "babel"
     "francais"
     "latex2e"
     "bk12"
     "book"
     "a4paper"
     "12pt"
     "openany")))

