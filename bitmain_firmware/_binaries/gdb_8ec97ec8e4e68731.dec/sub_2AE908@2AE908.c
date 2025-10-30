char *__fastcall sub_2AE908(const char **a1, const char *a2)
{
  size_t v4; // r4
  size_t v5; // r0
  char *v6; // r0
  char *v7; // r4
  int v8; // r3
  char *v9; // r2
  int v10; // t1

  v4 = strlen(*a1);
  v5 = strlen(a2);
  v6 = (char *)sub_2ACBF4((int)a1, v4 + v5 + 10);
  v7 = v6;
  if ( !v6 )
    return "";
  sprintf(v6, "_binary_%s_%s", *a1, a2);
  v8 = (unsigned __int8)*v7;
  if ( *v7 )
  {
    v9 = v7;
    do
    {
      if ( (word_438898[v8] & 0x8C) == 0 )
        *v9 = 95;
      v10 = (unsigned __int8)*++v9;
      v8 = v10;
    }
    while ( v10 );
  }
  return v7;
}
