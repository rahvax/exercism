;;; acronym.el --- Acronym (exercism)  -*- lexical-binding: t; -*-

;;; Commentary:

;;; Code:

(defun separar (palavra)
  "Separar a primeira letra de PALAVRA."
  (substring (upcase palavra) 0 1)
  )


(defun acronym (phrase)
  "Função que recebe PHRASE."
  (let (
	(resultados
	 (split-string phrase "[-_ ]+")))
    (mapconcat 'separar resultados))
  )

(provide 'acronym)
;;; acronym.el ends here
