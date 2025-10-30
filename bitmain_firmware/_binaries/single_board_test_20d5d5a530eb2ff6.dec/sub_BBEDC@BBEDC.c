int __fastcall sub_BBEDC(char *s, int c, int a3, int (__fastcall *a4)(const char *, int, int), int a5)
{
  const char *v5; // r4
  int v9; // r5
  const unsigned __int16 *v10; // r2
  int v11; // t1
  char *v12; // r0
  char *v13; // r5
  char *v14; // r10
  const unsigned __int16 **v15; // r0
  char *v16; // r3
  int v17; // t1
  int result; // r0

  v5 = s;
  if ( s )
  {
    while ( 1 )
    {
      if ( a3 )
      {
        v9 = *(unsigned __int8 *)v5;
        if ( !*v5 )
        {
LABEL_17:
          v13 = strchr(v5, c);
LABEL_18:
          result = a4(0, 0, a5);
          if ( result <= 0 )
            return result;
          goto LABEL_15;
        }
        v10 = *_ctype_b_loc();
        while ( (v10[v9] & 0x2000) != 0 )
        {
          v11 = *(unsigned __int8 *)++v5;
          v9 = v11;
          if ( !v11 )
            goto LABEL_17;
        }
      }
      v12 = strchr(v5, c);
      v13 = v12;
      if ( v5 == v12 || !*v5 )
        goto LABEL_18;
      v14 = v12 - 1;
      if ( !v12 )
        v14 = (char *)&v5[strlen(v5) - 1];
      if ( a3 )
      {
        v15 = _ctype_b_loc();
        v16 = v14;
        do
        {
          v14 = v16;
          v17 = (unsigned __int8)*v16--;
        }
        while ( ((*v15)[v17] & 0x2000) != 0 );
      }
      result = a4(v5, v14 - v5 + 1, a5);
      if ( result <= 0 )
        return result;
LABEL_15:
      if ( !v13 )
        return 1;
      v5 = v13 + 1;
    }
  }
  sub_D0048(14, 119, 115, "crypto/conf/conf_mod.c", 521);
  return 0;
}
