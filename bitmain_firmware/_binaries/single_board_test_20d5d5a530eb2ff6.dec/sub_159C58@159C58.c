_DWORD *__fastcall sub_159C58(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r4
  int v8; // r0
  signed int v9; // r4
  void *v10; // r10

  v6 = sub_B85BC(a2);
  v7 = v6 + 14;
  v8 = v6 + 7;
  if ( v8 >= 0 )
    v7 = v8;
  v9 = v7 >> 3;
  if ( !v9 )
    v9 = 1;
  v10 = CRYPTO_malloc((void *)v9);
  if ( v10 )
  {
    if ( sub_B8CD4(a2, (int)v10, v9) )
    {
      if ( a3 )
      {
        if ( sub_C88C0(a1, a3) )
        {
LABEL_9:
          CRYPTO_free(v10);
          return a3;
        }
      }
      else
      {
        a3 = sub_C63F4(a1);
        if ( a3 )
        {
          if ( sub_C88C0(a1, a3) )
            goto LABEL_9;
          sub_C6508((int)a3);
        }
      }
    }
    CRYPTO_free(v10);
    return 0;
  }
  else
  {
    sub_D0048(16, 280, 65, (int)"crypto/ec/ec_print.c", 44);
    return 0;
  }
}
