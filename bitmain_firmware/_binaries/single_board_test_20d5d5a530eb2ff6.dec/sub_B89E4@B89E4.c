int __fastcall sub_B89E4(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int result; // r0
  int v7; // r3
  int v8; // r2

  v4 = sub_B87C0(a2, 4);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v4 )
    v5 = *(_DWORD *)(a2 + 8);
  if ( a2 == a1 )
    return a2;
  result = sub_B89D8(a1, v5);
  if ( result )
  {
    v7 = *(_DWORD *)(a2 + 4);
    if ( v7 > 0 )
    {
      memcpy(*(void **)a1, *(const void **)a2, 4 * v5);
      v7 = *(_DWORD *)(a2 + 4);
    }
    v8 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a1 + 4) = v7;
    *(_DWORD *)(a1 + 12) = v8;
    return a1;
  }
  return result;
}
