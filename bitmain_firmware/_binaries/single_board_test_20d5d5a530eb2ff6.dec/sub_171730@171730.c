_DWORD *__fastcall sub_171730(char *a1, char *a2)
{
  char *v3; // r6
  char *v4; // r0
  unsigned int v5; // r0
  char *v6; // r4
  unsigned int v7; // t1
  char *v8; // r0
  unsigned int v9; // r0
  char *v10; // r4
  unsigned int v11; // t1
  _DWORD *v12; // r0
  _DWORD *v13; // r4
  void **v14; // r0

  v3 = a1;
  if ( !a1 )
    goto LABEL_6;
  v4 = sub_E9E3C(a1);
  v3 = v4;
  if ( v4 )
  {
    v5 = (unsigned __int8)*v4;
    if ( v5 )
    {
      v6 = v3;
      do
      {
        *v6 = sub_BDB30(v5);
        v7 = (unsigned __int8)*++v6;
        v5 = v7;
      }
      while ( v7 );
    }
LABEL_6:
    if ( a2 )
    {
      v8 = sub_E9E3C(a2);
      a2 = v8;
      if ( !v8 )
      {
        v13 = 0;
LABEL_15:
        CRYPTO_free(v3);
        CRYPTO_free(a2);
        CRYPTO_free(v13);
        return 0;
      }
      v9 = (unsigned __int8)*v8;
      if ( v9 )
      {
        v10 = a2;
        do
        {
          *v10 = sub_BDB30(v9);
          v11 = (unsigned __int8)*++v10;
          v9 = v11;
        }
        while ( v11 );
      }
    }
    v12 = CRYPTO_malloc((void *)0xC);
    v13 = v12;
    if ( v12 )
    {
      *v12 = v3;
      v12[1] = a2;
      v14 = sub_10BFD4(sub_17154C);
      v13[2] = v14;
      if ( v14 )
        return v13;
    }
    goto LABEL_15;
  }
  return 0;
}
