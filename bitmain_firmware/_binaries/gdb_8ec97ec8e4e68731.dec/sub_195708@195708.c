int __fastcall sub_195708(const char *a1, const char *a2)
{
  const char *v2; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r2

  v2 = a1;
  if ( !a1 )
  {
    v5 = sub_1B7B9C(0);
    if ( !v5 )
      goto LABEL_14;
    goto LABEL_12;
  }
  v4 = sub_1B7B9C(a1);
  if ( !v4 )
    goto LABEL_8;
  while ( 1 )
  {
    if ( *v2 != 36 )
    {
      while ( !a2 )
      {
        v5 = sub_92F64(2, "Function \"%s\" not defined.", v2);
LABEL_14:
        if ( !sub_1B7B24(v5) && !sub_1B7C38() )
          goto LABEL_16;
LABEL_12:
        v2 = "";
      }
      sub_92F64(2, "Function \"%s\" not defined in \"%s\".", v2, a2);
    }
    if ( !a2 )
      break;
    v4 = sub_92F64(2, "Undefined convenience variable or function \"%s\" not defined in \"%s\".", v2, a2);
LABEL_8:
    if ( !sub_1B7B24(v4) && !sub_1B7C38() )
    {
LABEL_16:
      sub_92F64(2, "No symbol table is loaded.  Use the \"file\" command.");
      break;
    }
  }
  v6 = sub_92F64(2, "Undefined convenience variable or function \"%s\" not defined.", v2);
  return sub_1957F4(v6, v7, v8);
}
