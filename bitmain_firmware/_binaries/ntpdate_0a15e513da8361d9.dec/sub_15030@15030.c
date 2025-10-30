int __fastcall sub_15030(_DWORD *a1, int a2)
{
  int v4; // r1
  size_t v5; // r2

  if ( !a1 || *a1 != 1114990113 )
    sub_10C38();
  if ( !a2 )
    sub_10C38();
  v4 = a1[3];
  v5 = *(_DWORD *)(a2 + 4);
  if ( a1[2] - v4 < v5 )
    return 19;
  memcpy((void *)(a1[1] + v4), *(const void **)a2, v5);
  a1[3] += *(_DWORD *)(a2 + 4);
  return 0;
}
