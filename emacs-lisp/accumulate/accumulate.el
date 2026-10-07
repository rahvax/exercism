;;; accumulate.el --- Accumulate (exercism)  -*- lexical-binding: t; -*-

;;; Commentary:
;;; Code:

(defun accumulate (lst op)
  "Uma função que recebe LST OP."
  (mapcar op lst))
(provide 'accumulate)
;;; accumulate.el ends here
