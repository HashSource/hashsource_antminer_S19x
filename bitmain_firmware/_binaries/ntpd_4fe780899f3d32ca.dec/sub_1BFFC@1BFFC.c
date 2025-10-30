int sub_1BFFC()
{
  int v0; // r4
  const unsigned __int16 **v1; // r0
  char *v2; // r2
  int v3; // t1
  int v4; // r0
  int v5; // r2

  v0 = (unsigned __int8)yytext;
  if ( yytext )
  {
    v1 = _ctype_b_loc();
    v2 = &yytext;
    while ( ((*v1)[v0] & 0x2000) != 0 )
    {
      v3 = (unsigned __int8)*++v2;
      v0 = v3;
      if ( !v3 )
        goto LABEL_6;
    }
    v4 = sub_63D08(&yytext);
    v5 = 419;
    LODWORD(yylval) = v4;
  }
  else
  {
LABEL_6:
    v5 = 447;
    LODWORD(yylval) = 447;
  }
  return v5;
}
