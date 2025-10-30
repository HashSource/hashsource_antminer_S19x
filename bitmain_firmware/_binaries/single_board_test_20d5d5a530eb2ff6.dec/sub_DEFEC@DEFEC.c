int __fastcall sub_DEFEC(int a1, int a2, int a3, void *src)
{
  _DWORD *v6; // r4
  bool v8; // zf
  int v9; // r3
  int v10; // r0
  int v11; // r0

  v6 = *(_DWORD **)(a1 + 20);
  if ( a2 == 4097 )
  {
    if ( a3 >= 0 )
    {
      v10 = v6[1];
      if ( v10 )
        sub_E0758(v10, v6[2], (size_t)"crypto/kdf/tls1_prf.c");
      sub_E07F8((int)(v6 + 3), v6[259]);
      v6[259] = 0;
      v11 = sub_E9E68(src, a3, "crypto/kdf/tls1_prf.c", 72);
      v6[1] = v11;
      if ( v11 )
      {
        v6[2] = a3;
        return 1;
      }
    }
    return 0;
  }
  if ( a2 == 4098 )
  {
    v8 = src == 0;
    if ( src )
      v8 = a3 == 0;
    if ( v8 )
      return 1;
    if ( a3 >= 0 )
    {
      v9 = v6[259];
      if ( a3 <= 1024 - v9 )
      {
        memcpy((char *)v6 + v9 + 12, src, a3);
        v6[259] += a3;
        return 1;
      }
    }
    return 0;
  }
  if ( a2 != 4096 )
    return -2;
  *v6 = src;
  return 1;
}
