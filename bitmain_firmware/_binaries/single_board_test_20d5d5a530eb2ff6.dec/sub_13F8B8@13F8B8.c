int __fastcall sub_13F8B8(_DWORD *a1, char *a2, int *a3)
{
  int v3; // r3
  int v4; // r6
  int v6; // r2
  int v7; // r4
  int v9; // r3
  int v10; // r10
  int v12; // r0
  void *v13; // r8
  char *v14; // r0
  char *v15; // r9
  int v16; // [sp+14h] [bp-4h]

  v3 = a1[2];
  v4 = a1[5];
  if ( v3 && (v6 = a1[3]) != 0 )
  {
    v7 = *(unsigned __int8 *)(v4 + 40);
    v9 = *(_DWORD *)(v3 + 24);
    v10 = *(_DWORD *)(*(_DWORD *)(v6 + 24) + 20);
    if ( v7 != 1 )
    {
      if ( v7 != 2 )
        return 0;
      v7 = *(_DWORD *)(v4 + 60);
      if ( !v7 )
        return v7;
      v12 = *(_DWORD *)(v4 + 44);
      if ( v12 )
      {
        if ( !a2 )
        {
          *a3 = v7;
          return 1;
        }
        if ( v7 == *a3 )
        {
          v16 = v9;
          v13 = (void *)sub_BFD5C(v9);
          v14 = (char *)CRYPTO_malloc(v13);
          v15 = v14;
          if ( v14
            && sub_BFAFC(v14, v10, v16) > 0
            && sub_17B2F8(
                 a2,
                 *a3,
                 v15,
                 v13,
                 *(_DWORD *)(v4 + 44),
                 *(_DWORD *)(v4 + 52),
                 *(_DWORD *)(v4 + 56),
                 *(_DWORD *)(v4 + 48)) )
          {
            v7 = 1;
            *a3 = *(_DWORD *)(v4 + 60);
          }
          else
          {
            v7 = 0;
          }
          sub_E0758(v15, (size_t)v13, (size_t)"crypto/dh/dh_pmeth.c");
          return v7;
        }
        return 0;
      }
      return v12;
    }
    if ( !a2 )
    {
      *a3 = sub_BFD5C(v9);
      return v7;
    }
    if ( *(_DWORD *)(v4 + 16) )
      v12 = sub_BFAFC(a2, v10, v9);
    else
      v12 = sub_BFA9C((unsigned __int8 *)a2, v10, v9);
    if ( v12 < 0 )
      return v12;
    *a3 = v12;
    return 1;
  }
  else
  {
    sub_D0048(5, 112, 108, (int)"crypto/dh/dh_pmeth.c", 428);
    return 0;
  }
}
