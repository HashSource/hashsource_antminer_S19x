char *__fastcall sub_135904(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  void *v4; // r5
  int v5; // r4
  int *v6; // r9
  char *v7; // r0
  bool v8; // zf
  char *v9; // r8
  void **v10; // r6
  int v12; // r0
  char *v13; // r11
  int *v14; // r7
  int v15; // r0
  int v16; // r0
  int *v17; // r7
  char *v18; // r11
  int v19; // t1
  int v20; // r0

  v2 = sub_B85BC(a1);
  v3 = 3 * v2 / 10 + 3 * v2 / 1000;
  v4 = (void *)(v3 + 5);
  v5 = (v3 + 2) / 19 + 1;
  v6 = (int *)CRYPTO_malloc((void *)(4 * v5));
  v7 = (char *)CRYPTO_malloc(v4);
  v8 = v6 == 0;
  if ( v6 )
    v8 = v7 == 0;
  v9 = v7;
  if ( v8 )
  {
    v10 = 0;
    sub_D0048(3, 104, 65, (int)"crypto/bn/bn_print.c", 75);
LABEL_6:
    CRYPTO_free(v6);
    sub_B895C((int)v10);
    CRYPTO_free(v9);
    return 0;
  }
  v12 = sub_B8A2C((int)a1);
  v10 = (void **)v12;
  if ( !v12 )
    goto LABEL_6;
  if ( sub_B85B0(v12) )
  {
    v9[1] = 0;
    *v9 = 48;
  }
  else
  {
    v13 = v9;
    if ( sub_B8720((int)v10) )
    {
      v13 = v9 + 1;
      *v9 = 45;
    }
    v14 = v6;
    while ( !sub_B85B0((int)v10) )
    {
      if ( v5 > v14 - v6 )
      {
        v15 = sub_BABE0(v10, -1981284352);
        *v14++ = v15;
        if ( v15 != -1 )
          continue;
      }
      goto LABEL_6;
    }
    v16 = sub_B5560(v13, (unsigned int)v4 - (v13 - v9), "%lu", *(v14 - 1));
    if ( v16 < 0 )
      goto LABEL_6;
    v17 = v14 - 1;
    v18 = &v13[v16];
    while ( v6 != v17 )
    {
      v19 = *--v17;
      v20 = sub_B5560(v18, (unsigned int)v4 - (v18 - v9), "%019lu", v19);
      v18 += v20;
      if ( v20 < 0 )
        goto LABEL_6;
    }
  }
  CRYPTO_free(v6);
  sub_B895C((int)v10);
  return v9;
}
