int __fastcall sub_98E40(_DWORD *a1, int a2)
{
  int v2; // r3
  unsigned __int8 *v5; // r1
  int v6; // r5
  int v8; // r7
  int v9; // r3
  int v10; // r0
  int v11; // r2
  size_t v12; // r7
  void *v13; // r0
  size_t v14; // r2
  size_t v15; // r7

  v2 = *(_DWORD *)(a2 + 4);
  if ( !v2 || (v5 = *(unsigned __int8 **)a2, v6 = *v5, *(_DWORD *)(a2 + 4) = v2 - 1, *(_DWORD *)a2 = v5 + 1, v6 != 1) )
  {
    sub_95494(a1, 50, 495, 329, (int)"ssl/statem/statem_clnt.c", 2770);
    return 0;
  }
  if ( (unsigned int)(v2 - 1) <= 2
    || (v8 = v5[2],
        v9 = v2 - 4,
        v10 = v5[1],
        v11 = v5[3],
        *(_DWORD *)(a2 + 4) = v9,
        *(_DWORD *)a2 = v5 + 4,
        v12 = (v8 << 8) | (v10 << 16) | v11,
        v12 != v9) )
  {
    sub_95494(a1, 50, 495, 159, (int)"ssl/statem/statem_clnt.c", 2776);
    return 0;
  }
  v13 = (void *)CRYPTO_malloc(v12, "ssl/statem/statem_clnt.c", 2779);
  a1[341] = v13;
  if ( v13 )
  {
    a1[342] = v12;
    if ( v12 <= *(_DWORD *)(a2 + 4) )
    {
      memcpy(v13, *(const void **)a2, v12);
      v14 = *(_DWORD *)a2 + v12;
      v15 = *(_DWORD *)(a2 + 4) - v12;
      *(_DWORD *)a2 = v14;
      *(_DWORD *)(a2 + 4) = v15;
      return 1;
    }
    else
    {
      sub_95494(a1, 50, 495, 159, (int)"ssl/statem/statem_clnt.c", 2789);
      return 0;
    }
  }
  else
  {
    a1[342] = 0;
    sub_95494(a1, 80, 495, 65, (int)"ssl/statem/statem_clnt.c", 2783);
    return 0;
  }
}
