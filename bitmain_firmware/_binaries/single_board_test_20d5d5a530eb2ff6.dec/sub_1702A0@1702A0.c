int *__fastcall sub_1702A0(int a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // r7
  int *v7; // r5
  unsigned int i; // r4
  _DWORD *v9; // r0
  int v10; // r11
  const char *v11; // r0
  int v12; // r0
  int v13; // r0
  char *v14; // r0
  int v15; // r11
  unsigned int j; // r4
  int v17; // r0
  int v18; // r0
  void **v20; // [sp+10h] [bp-14h]
  unsigned int v21; // [sp+1Ch] [bp-8h]

  v6 = sub_10C010((int)a3);
  v7 = (int *)sub_10BF44(0, v6);
  if ( !v7 )
  {
    sub_D0048(34, 153, 65, (int)"crypto/x509v3/v3_alt.c", 230);
    sub_10BDB4(0);
    return v7;
  }
  if ( v6 > 0 )
  {
    for ( i = 0; v6 != i; ++i )
    {
      v10 = sub_10C01C(a3, i);
      if ( !sub_122A8C(*(const char **)(v10 + 4), "issuer")
        && (v11 = *(const char **)(v10 + 8)) != 0
        && !strcmp(v11, "copy") )
      {
        if ( !a2 )
          goto LABEL_22;
        if ( *a2 != 1 )
        {
          v12 = a2[1];
          if ( !v12 )
          {
LABEL_22:
            sub_D0048(34, 123, 127, (int)"crypto/x509v3/v3_alt.c", 267);
            goto LABEL_23;
          }
          if ( sub_10ED70(v12) >= 0 )
          {
            v13 = sub_10ED88(a2[1]);
            if ( !v13 || (v14 = sub_11E00C(v13), (v20 = (void **)v14) == 0) )
            {
              sub_D0048(34, 123, 126, (int)"crypto/x509v3/v3_alt.c", 275);
              goto LABEL_23;
            }
            v15 = sub_10C010((int)v14);
            if ( !sub_10BA00(v7, v15) )
            {
              sub_D0048(34, 123, 65, (int)"crypto/x509v3/v3_alt.c", 281);
              sub_10BDB4(v20);
LABEL_23:
              v18 = (int)v7;
              v7 = 0;
              sub_10BFDC(v18, (void (__fastcall *)(int))GENERAL_NAME_free);
              return v7;
            }
            if ( v15 > 0 )
            {
              v21 = i;
              for ( j = 0; j != v15; ++j )
              {
                v17 = sub_10C01C(v20, j);
                sub_10BD3C(v7, v17);
              }
              i = v21;
            }
            sub_10BDB4(v20);
          }
        }
      }
      else
      {
        v9 = sub_170288(a1, (int)a2, v10);
        if ( !v9 )
          goto LABEL_23;
        sub_10BD3C(v7, (int)v9);
      }
    }
  }
  return v7;
}
