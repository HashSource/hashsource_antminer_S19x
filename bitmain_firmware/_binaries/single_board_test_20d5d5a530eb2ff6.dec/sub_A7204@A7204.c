int __fastcall sub_A7204(_DWORD *a1)
{
  int v1; // r2
  unsigned int v2; // r3
  unsigned int v5; // r3
  int v6; // r0
  unsigned int v7; // r0
  int v8; // r2

  v1 = a1[32];
  v2 = *(_DWORD *)(v1 + 384) + 1;
  *(_DWORD *)(v1 + 384) = v2;
  if ( v2 <= 2 )
    return 0;
  if ( (sub_8B860((int)a1) & 0x1000) != 0 )
  {
    v5 = *(_DWORD *)(a1[32] + 384);
  }
  else
  {
    v6 = sub_882E4((int)a1);
    v7 = sub_B6ECC(v6, 47, 0, 0);
    v8 = a1[32];
    v5 = *(_DWORD *)(v8 + 384);
    if ( v7 < *(_DWORD *)(v8 + 284) )
      *(_DWORD *)(v8 + 284) = v7;
  }
  if ( v5 <= 0xC )
    return 0;
  sub_95494(a1, -1, 318, 312, (int)"ssl/d1_lib.c", 382);
  return -1;
}
