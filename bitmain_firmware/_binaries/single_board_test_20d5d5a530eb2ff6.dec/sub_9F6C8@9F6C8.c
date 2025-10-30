int __fastcall sub_9F6C8(_DWORD *a1)
{
  int v1; // r2
  int v2; // r3
  int *v3; // r3
  int result; // r0
  int v5; // r1
  int v6; // r3

  v1 = a1[299];
  v2 = v1 & 1;
  if ( (v1 & 1) == 0 )
    return v2;
  v3 = (int *)a1[1];
  if ( (*(_DWORD *)(v3[25] + 48) & 8) == 0 )
  {
    v5 = *v3;
    v2 = *v3 == 0x10000;
    if ( v5 < 772 )
      v2 |= 1u;
    if ( !v2 && (v1 & 8) != 0 && a1[381] != 3 )
      return v2;
  }
  if ( (int)a1[385] > 0 && (v1 & 4) != 0 )
    return 0;
  v6 = *(_DWORD *)(a1[31] + 528);
  if ( (*(_DWORD *)(v6 + 20) & 4) == 0 )
    return (*(_DWORD *)(v6 + 20) & 0x50) == 0;
  result = v1 & 2;
  if ( (v1 & 2) != 0 )
    return (*(_DWORD *)(v6 + 20) & 0x50) == 0;
  return result;
}
