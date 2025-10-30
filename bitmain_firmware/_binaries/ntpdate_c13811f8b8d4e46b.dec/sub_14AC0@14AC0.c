int __fastcall sub_14AC0(_DWORD *a1, int a2)
{
  int v4; // r0
  size_t v5; // r2

  if ( !a1 || *a1 != 1114990113 )
    sub_1073C();
  if ( !a2 )
    sub_1073C();
  v4 = a1[3];
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 > a1[2] - v4 )
    return 19;
  memcpy((void *)(a1[1] + v4), *(const void **)a2, v5);
  a1[3] += *(_DWORD *)(a2 + 4);
  return 0;
}
