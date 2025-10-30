int __fastcall sub_16AC30(const char *a1, int a2, void *a3, int a4, int a5, _DWORD *a6, int a7, int a8)
{
  _DWORD *v9; // r4
  _DWORD *v10; // r5
  const char *v11; // r9
  size_t v12; // r0
  int v13; // r3
  int result; // r0
  void *v15; // [sp+14h] [bp-8h] BYREF
  int *v16; // [sp+18h] [bp-4h] BYREF
  int v17; // [sp+1Ch] [bp+0h] BYREF
  int v18; // [sp+20h] [bp+4h] BYREF
  int v19; // [sp+24h] [bp+8h] BYREF
  _BYTE v20[1024]; // [sp+28h] [bp+Ch] BYREF

  v15 = a3;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( a1 )
  {
    if ( strcmp(a1, "ENCRYPTED PRIVATE KEY") )
      return 0;
    *a6 = 1;
  }
  v9 = (_DWORD *)d2i_X509_SIG(0, &v15, a4);
  if ( v9 )
  {
    *a6 = 1;
    v10 = (_DWORD *)sub_BADF8();
    if ( v10 )
    {
      v11 = (const char *)sub_16A738(a7, (int)v20, 1024, (int)"PKCS8 decrypt password", a8);
      if ( v11 )
      {
        sub_12EF40(v9, &v16, &v17);
        v12 = strlen(v11);
        if ( sub_161E68(v16, v11, v12, *(char **)(v17 + 8), *(_DWORD *)v17, &v18, &v19, 0) )
        {
          v13 = v19;
          v10[1] = v18;
          *v10 = v13;
          v10[2] = v13;
          sub_12EF2C((int)v9);
          result = sub_16C514("PRIVATE KEY", v10);
          if ( result )
            return result;
          v9 = 0;
          sub_D0048(44, 125, 65, (int)"crypto/store/loader_file.c", 378);
        }
      }
      else
      {
        sub_D0048(44, 125, 115, (int)"crypto/store/loader_file.c", 361);
      }
    }
    else
    {
      sub_D0048(44, 125, 65, (int)"crypto/store/loader_file.c", 354);
    }
    sub_12EF2C((int)v9);
    sub_BAE3C((int)v10);
  }
  return 0;
}
