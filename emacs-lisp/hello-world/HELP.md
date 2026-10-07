# Help

## Rodando os testes

Você pode rodar os testes de várias formas.

## De forma interativa, dentro do Emacs

1. Abra o arquivo de teste, `M-x eval-buffer RET`
2. De forma interativa e individual, com `M-x ert RET test-name RET`
3. De forma interativa e de uma vez só, com `M-x ert RET t RET`
   Repare que isso vai rodar todos os testes carregados no Emacs no momento!
4. Rode `M-x eval-buffer RET` de novo antes de testar sempre que você fizer alterações

Para executar apenas os testes do buffer atual, você pode adicionar isto ao seu `.emacs` ou `init.el`:

```elisp
(defun my-eval-and-run-all-tests-in-buffer ()
  "Deletes all loaded tests from the runtime, evaluates the current buffer and runs all loaded tests with ert."
  (interactive)
  (ert-delete-all-tests)
  (eval-buffer)
  (ert 't))
```

Depois de reiniciar o Emacs:

1. Abra o arquivo de teste
2. `M-x my-eval-and-run-all-tests-in-buffer RET`

## Pelo terminal

Para rodar todos os testes pelo terminal, em modo batch, execute `emacs -batch -l ert -l *-test.el -f ert-run-tests-batch-and-exit`

O comando acima é um pouco complicado, então, se você quiser:

1. Crie um arquivo no seu `$PATH` (provavelmente em `~/bin`) chamado `ert-run`
2. O conteúdo do arquivo deve ser o seguinte:
   ```sh
   #!/usr/bin/env sh
   emacs -batch -l ert -l $1 -f ert-run-tests-batch-and-exit
   ```
3. Torne o arquivo executável com `chmod +x ert-run`

Agora você deve conseguir simplesmente chamar `ert-run *-test.el` e rodar os testes em modo batch.

## Outras opções

Outras opções podem ser encontradas na documentação, `C-h i m ert RET`.

## Enviando sua solução

Você pode enviar sua solução usando o comando `exercism submit hello-world.el`.
Esse comando vai enviar sua solução para o site do Exercism e imprimir a URL da página da solução.

É possível enviar uma solução incompleta, o que permite que você:

- Veja como outras pessoas resolveram o exercício
- Peça ajuda a um mentor

## Precisa de ajuda?

Se você quiser ajuda para resolver o exercício, confira as seguintes páginas:

- A [documentação da trilha Emacs Lisp](https://exercism.org/docs/tracks/emacs-lisp)
- A [categoria de programação da trilha Emacs Lisp no fórum](https://forum.exercism.org/c/programming/emacs-lisp)
- A [categoria de programação do Exercism no fórum](https://forum.exercism.org/c/programming/5)
- As [Perguntas frequentes](https://exercism.org/docs/using/faqs)

Caso esses recursos não sejam suficientes, você pode enviar sua solução (incompleta) para pedir mentoria.

Se você estiver com dificuldades e precisar de ajuda, pode usar um dos seguintes recursos:

- [The Emacs Wiki](http://emacswiki.org/) é inestimável. Passe bastante tempo por lá.
- [The Emacs Editor](http://www.gnu.org/software/emacs/manual/html_node/emacs/index.html) é o manual oficial do GNU Emacs.
- IRC: há canais no [Libera.Chat](https://libera.chat/) para `#emacs`, `#org-mode` e muitos pacotes do Emacs, com muita gente prestativa por perto. E, com o Emacs, o IRC está tão perto quanto `M-x erc`.
- Matrix: no [Matrix](https://matrix.org/) há salas para [emacs](https://matrix.to/#/#emacs:matrix.org), [org-mode](https://matrix.to/#/#org-mode:matrix.org) e outros pacotes do Emacs.
  Você pode [entrar no espaço do Emacs no Matrix](https://matrix.to/#/#emacs-space:matrix.org) para ter uma visão geral dos canais disponíveis.
  Para entrar no Matrix de dentro do Emacs, você pode usar o pacote [Ement.el](https://github.com/alphapapa/ement.el).
- [StackOverflow](http://stackoverflow.com/questions/tagged/elisp) e [Emacs StackExchange](https://emacs.stackexchange.com/questions/tagged/elisp) podem ser usados para pesquisar seu problema e ver se ele já foi respondido. Você também pode fazer e responder perguntas.