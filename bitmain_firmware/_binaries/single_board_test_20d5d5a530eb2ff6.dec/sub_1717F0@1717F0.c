int __fastcall sub_1717F0(int **a1, char *a2, char *a3)
{
  char *v5; // r0
  char *v6; // r5
  unsigned int v7; // r0
  char *v8; // r4
  unsigned int v9; // t1
  char *v10; // r4
  _DWORD *v11; // r0
  void *v12; // r6

  if ( !a2 )
  {
    v6 = 0;
    if ( a3 )
      goto LABEL_7;
LABEL_13:
    v10 = a3;
    goto LABEL_8;
  }
  v5 = sub_E9E3C(a2);
  v6 = v5;
  if ( !v5 )
  {
    v12 = 0;
    v10 = 0;
    goto LABEL_10;
  }
  v7 = (unsigned __int8)*v5;
  if ( v7 )
  {
    v8 = v6;
    do
    {
      *v8 = sub_BDB30(v7);
      v9 = (unsigned __int8)*++v8;
      v7 = v9;
    }
    while ( v9 );
  }
  if ( !a3 )
    goto LABEL_13;
LABEL_7:
  v10 = sub_E9E3C(a3);
  if ( !v10 )
  {
    v12 = 0;
LABEL_10:
    CRYPTO_free(v6);
    CRYPTO_free(v10);
    CRYPTO_free(v12);
    return 0;
  }
LABEL_8:
  v11 = CRYPTO_malloc((void *)8);
  v12 = v11;
  if ( !v11 )
    goto LABEL_10;
  *v11 = v6;
  v11[1] = v10;
  if ( !sub_10BD3C(*a1, (int)v11) )
    goto LABEL_10;
  return 1;
}
