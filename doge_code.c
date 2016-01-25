/* Build a parser 'Adjective' to recognize descriptions */
mpc_parser_t *Adjective = mpc_or(4,
    mpc_sym("wow"), mpc_sym("many"),
    mpc_sym("so"),  mpc_sym("such")
);

/* Build a parser 'Noun' to recognize things */
mpc_parser_t *Noun = mpc_or(5,
    mpc_sym("lisp"), mpc_sym("language"),
    mpc_sym("book"), mpc_sym("build"),
    mpc_sym("c")
);

