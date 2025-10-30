int __fastcall sub_11A218(int a1, int a2, int a3)
{
  signed int v4; // r4
  int v7; // r0
  unsigned int v8; // r1
  _DWORD *v9; // r5
  const char *v10; // r0
  char *v11; // r9
  const char *v12; // r0
  char *v13; // r5
  int v14; // r0
  int v16; // r0
  void *v17; // r5

  v4 = 0;
  v7 = sub_10C010(*(_DWORD *)(a2 + 4));
  v8 = 0;
  if ( v7 <= 0 )
    return 1;
  while ( 1 )
  {
    v9 = (_DWORD *)sub_10C01C(*(_DWORD **)(a2 + 4), v8);
    if ( *v9 )
      break;
    v16 = sub_122434(0, v9[1]);
    v17 = (void *)v16;
    if ( !v16 )
      return 0;
    sub_B550C(a1, "%*s%s\n", a3 + 2, &byte_1A4198, v16);
    CRYPTO_free(v17);
LABEL_7:
    ++v4;
    v14 = sub_10C010(*(_DWORD *)(a2 + 4));
    v8 = v4;
    if ( v4 >= v14 )
      return 1;
  }
  if ( *v9 == 1 )
  {
    v10 = (const char *)sub_122434(0, *(_DWORD *)v9[1]);
    v11 = (char *)v10;
    if ( v10 )
    {
      sub_B550C(a1, "%*s%s-", a3 + 2, &byte_1A4198, v10);
      CRYPTO_free(v11);
      v12 = (const char *)sub_122434(0, *(_DWORD *)(v9[1] + 4));
      v13 = (char *)v12;
      if ( v12 )
      {
        sub_B550C(a1, (unsigned __int8 *)"%s\n", v12);
        CRYPTO_free(v13);
        goto LABEL_7;
      }
    }
  }
  return 0;
}
