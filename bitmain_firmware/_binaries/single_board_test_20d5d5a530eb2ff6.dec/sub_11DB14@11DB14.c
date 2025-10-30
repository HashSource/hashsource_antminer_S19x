void **__fastcall sub_11DB14(int a1, _DWORD *a2, int a3)
{
  int v4; // r8
  signed int v5; // r5
  _DWORD *v6; // r4
  _DWORD *v7; // r0
  _DWORD *v8; // r11
  int v9; // r6
  size_t v10; // r4
  void *v11; // r4
  void *v12; // r0
  bool v13; // zf
  void **result; // r0
  _BOOL4 v15; // r3
  void *v16; // [sp+Ch] [bp-14h]
  char v19[84]; // [sp+20h] [bp+0h] BYREF

  v4 = a3;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= sub_10C010((int)a2) )
    {
      v13 = a3 == 0;
      if ( !a3 )
        v13 = v4 == 0;
      if ( v13 )
        return sub_10BFCC();
      else
        return (void **)v4;
    }
    v6 = (_DWORD *)sub_10C01C(a2, v5);
    v7 = (_DWORD *)sub_16FB84(a1, v6[1], v4);
    v8 = v7;
    if ( !v7 )
      break;
    v4 = (int)v7;
    v9 = sub_10C01C(v7, v5);
    sub_127D0C(v19, 80, *v6);
    ++v5;
    v10 = strlen(v19);
    v11 = (void *)(strlen(*(const char **)(v9 + 4)) + v10 + 4);
    v12 = CRYPTO_malloc(v11);
    v16 = v12;
    if ( !v12 )
    {
      v4 = (int)v8;
      break;
    }
    sub_B5560(v12, (unsigned int)v11, "%s - %s", v19, *(_DWORD *)(v9 + 4));
    CRYPTO_free(*(void **)(v9 + 4));
    *(_DWORD *)(v9 + 4) = v16;
  }
  sub_D0048(34, 138, 65, (int)"crypto/x509v3/v3_info.c", 94);
  v15 = a3 == 0;
  if ( !v4 )
    v15 = 0;
  result = (void **)v15;
  if ( v15 )
  {
    sub_10BFDC(v4, (void (__fastcall *)(int))X509V3_conf_free);
    return 0;
  }
  return result;
}
