int __fastcall sub_16AA14(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  char *v7; // r5
  int v8; // r4
  _DWORD *v9; // r0
  int v10; // r7
  int result; // r0
  _DWORD *v12; // r5
  int v13; // r4
  int (__fastcall *v14)(_DWORD *, int *, int); // r3
  int v15; // r0
  int (__fastcall *v16)(int, int *, int); // r3
  int v17; // [sp+Ch] [bp-10h] BYREF
  int v18; // [sp+14h] [bp-8h] BYREF

  v17 = a3;
  if ( !a1 )
    goto LABEL_8;
  v7 = (char *)a1;
  a1 = sub_EE81C((const char *)a1, "PARAMETERS");
  v8 = a1;
  if ( !a1 )
    return 0;
  *a6 = 1;
  if ( a1 > 0 )
  {
    v9 = EVP_PKEY_new();
    v10 = (int)v9;
    if ( !v9 )
    {
      sub_D0048(44, 121, 6, (int)"crypto/store/loader_file.c", 568);
      return 0;
    }
    if ( !sub_D9E20(v9, v7, v8) )
      goto LABEL_6;
    v15 = sub_ADB2C(v10);
    if ( !v15 )
      goto LABEL_6;
    v16 = *(int (__fastcall **)(int, int *, int))(v15 + 60);
    if ( !v16 || !v16(v10, &v17, a4) )
      goto LABEL_6;
  }
  else
  {
LABEL_8:
    v12 = 0;
    v13 = 0;
    v10 = 0;
    while ( v13 < sub_AD8E0(a1, a2, a3) )
    {
      v18 = v17;
      if ( !v12 )
      {
        v12 = EVP_PKEY_new();
        if ( !v12 )
        {
          sub_D0048(44, 121, 6, (int)"crypto/store/loader_file.c", 586);
          break;
        }
      }
      a1 = sub_AD8FC(v13);
      if ( (*(_DWORD *)(a1 + 8) & 1) == 0 )
      {
        a1 = sub_D9CD4(v12, *(_DWORD *)a1);
        if ( a1 )
        {
          a1 = sub_ADB2C((int)v12);
          if ( a1 )
          {
            v14 = *(int (__fastcall **)(_DWORD *, int *, int))(a1 + 60);
            if ( v14 )
            {
              a1 = v14(v12, &v18, a4);
              if ( a1 )
              {
                if ( v10 )
                  a1 = sub_DA240((int)v12);
                else
                  v10 = (int)v12;
                v12 = 0;
                ++*a6;
              }
            }
          }
        }
      }
      ++v13;
    }
    sub_DA240((int)v12);
    if ( *a6 != 1 )
      goto LABEL_6;
  }
  result = sub_16BF5C(v10);
  if ( !result )
  {
LABEL_6:
    sub_DA240(v10);
    return 0;
  }
  return result;
}
