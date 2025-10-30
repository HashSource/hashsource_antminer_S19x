_DWORD *__fastcall sub_1CAE50(_DWORD *a1, int a2, int a3, int a4, int (***a5)())
{
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int *v12; // r4
  int *v13; // r7
  int v14; // r0
  int v15; // t1
  _DWORD *v16; // r1
  int v17; // r3
  const char *v19; // r0
  const char *v20; // r4
  const char *v21; // r4
  int *v22; // [sp+Ch] [bp-78h] BYREF
  int v23; // [sp+10h] [bp-74h] BYREF
  _BYTE s[36]; // [sp+14h] [bp-70h] BYREF
  _BYTE v25[36]; // [sp+38h] [bp-4Ch] BYREF
  _BYTE preg[36]; // [sp+5Ch] [bp-28h] BYREF

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  memset(s, 0, sizeof(s));
  memset(v25, 0, sizeof(v25));
  memset(preg, 0, sizeof(preg));
  if ( *(_DWORD *)(a3 + 4) )
  {
    sub_1636B8((regex_t *)v25, *(const char **)a3, 8, "Invalid provider regexp");
    v25[32] = 1;
  }
  if ( *(_DWORD *)(a4 + 4) )
  {
    v21 = *(const char **)a4;
    if ( preg[32] )
    {
      preg[32] = 0;
      sub_16373C((regex_t *)preg);
    }
    sub_1636B8((regex_t *)preg, v21, 8, "Invalid probe regexp");
    preg[32] = 1;
  }
  if ( *(_DWORD *)(a2 + 4) )
  {
    v20 = *(const char **)a2;
    if ( s[32] )
    {
      s[32] = 0;
      sub_16373C((regex_t *)s);
    }
    sub_1636B8((regex_t *)s, v20, 8, "Invalid object file regexp");
    s[32] = 1;
  }
  v22 = *(int **)(dword_487D2C + 36);
  v9 = (int)v22;
  if ( v22 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 132);
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 + 36) )
        {
          if ( !s[32] || (v19 = (const char *)sub_1B87A8(v9), !j_regexec((const regex_t *)s, v19, 0, 0, 0)) )
          {
            v11 = (**(int (***)(void))(v22[33] + 36))();
            v12 = *(int **)v11;
            v13 = *(int **)(v11 + 4);
            if ( *(int **)v11 != v13 )
              break;
          }
        }
      }
LABEL_21:
      v9 = *v22;
      v22 = (int *)*v22;
      if ( !v22 )
        goto LABEL_22;
    }
    while ( 1 )
    {
      v15 = *v12++;
      v14 = v15;
      v23 = v15;
      if ( a5 != &off_3CD45C && a5 != (int (***)())(*(int (__fastcall **)(int))(*(_DWORD *)v14 + 36))(v14)
        || v25[32] && j_regexec((const regex_t *)v25, *(const char **)(v23 + 28), 0, 0, 0)
        || preg[32] && j_regexec((const regex_t *)preg, *(const char **)(v23 + 4), 0, 0, 0) )
      {
        goto LABEL_12;
      }
      v16 = (_DWORD *)a1[1];
      if ( v16 == (_DWORD *)a1[2] )
      {
        sub_1CC1DC(a1, v16, &v23, &v22);
LABEL_12:
        if ( v13 == v12 )
          goto LABEL_21;
      }
      else
      {
        if ( v16 )
        {
          v17 = v23;
          v16[1] = v22;
          *v16 = v17;
        }
        a1[1] = v16 + 2;
        if ( v13 == v12 )
          goto LABEL_21;
      }
    }
  }
LABEL_22:
  if ( preg[32] )
  {
    preg[32] = 0;
    sub_16373C((regex_t *)preg);
  }
  if ( v25[32] )
  {
    v25[32] = 0;
    sub_16373C((regex_t *)v25);
  }
  if ( s[32] )
  {
    s[32] = 0;
    sub_16373C((regex_t *)s);
  }
  return a1;
}
