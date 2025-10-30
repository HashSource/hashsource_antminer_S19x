int __fastcall sub_1225E0(int a1, _DWORD *a2)
{
  const char *v3; // r4
  int v5; // r7
  int v6; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r7
  int v11; // r3

  v3 = *(const char **)(a1 + 8);
  if ( !v3 )
    goto LABEL_26;
  if ( !strcmp(*(const char **)(a1 + 8), "TRUE") )
    goto LABEL_6;
  if ( !strcmp(v3, "true") )
    goto LABEL_6;
  v5 = *(unsigned __int8 *)v3;
  v6 = 89 - v5;
  if ( v5 == 89 && !v3[1] )
    goto LABEL_6;
  if ( v5 == 121 )
  {
    v8 = *((unsigned __int8 *)v3 + 1);
    if ( !v3[1] )
      goto LABEL_6;
    if ( v6 )
      goto LABEL_28;
  }
  else
  {
    if ( v6 )
      goto LABEL_13;
    v8 = *((unsigned __int8 *)v3 + 1);
  }
  if ( v8 == 69 )
  {
    if ( v3[2] == 83 )
      goto LABEL_12;
    goto LABEL_13;
  }
  if ( 121 != v5 )
    goto LABEL_13;
LABEL_28:
  if ( v8 == 101 && v3[2] == 115 )
  {
LABEL_12:
    if ( v3[3] )
      goto LABEL_13;
LABEL_6:
    *a2 = 255;
    return 1;
  }
LABEL_13:
  if ( !strcmp(v3, "FALSE") )
    goto LABEL_17;
  if ( !strcmp(v3, "false") )
    goto LABEL_17;
  v9 = 78 - v5;
  if ( v5 == 78 && !v3[1] )
    goto LABEL_17;
  v10 = 110 - v5;
  if ( v10 )
  {
    if ( v9 )
      goto LABEL_26;
    v11 = *((unsigned __int8 *)v3 + 1);
  }
  else
  {
    v11 = *((unsigned __int8 *)v3 + 1);
    if ( !v3[1] )
      goto LABEL_17;
    if ( v9 )
      goto LABEL_24;
  }
  if ( v11 == 79 )
  {
LABEL_25:
    if ( v3[2] )
      goto LABEL_26;
LABEL_17:
    *a2 = 0;
    return 1;
  }
  if ( v10 )
    goto LABEL_26;
LABEL_24:
  if ( v11 == 111 )
    goto LABEL_25;
LABEL_26:
  sub_D0048(34, 110, 104, (int)"crypto/x509v3/v3_utl.c", 289);
  sub_D1240(6, "section:", *(_DWORD *)a1, ",name:", *(_DWORD *)(a1 + 4), ",value:", *(_DWORD *)(a1 + 8));
  return 0;
}
