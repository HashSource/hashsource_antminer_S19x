int __fastcall sub_B6834(int a1, int a2, int a3)
{
  int v7; // r5
  int i; // r7
  const char *v9; // r2
  _BYTE *v10; // r3
  int v11; // r1
  int v12; // r0
  _BYTE *v13; // [sp+1Ch] [bp-28h]
  int v14; // [sp+20h] [bp-24h] BYREF
  int v15; // [sp+24h] [bp-20h] BYREF
  void *s1; // [sp+28h] [bp-1Ch] BYREF
  size_t n; // [sp+2Ch] [bp-18h]
  _BYTE v18[20]; // [sp+30h] [bp-14h] BYREF

  v14 = -1;
  v15 = -1;
  if ( *(_DWORD *)(a1 + 84) != sub_B59C8(a2, a3) )
    return 1;
  sub_26FD10(a1 + 92, &v14, &v15);
  v7 = v14;
  if ( v14 >= v15 )
    return 0;
  for ( i = 4 * v14; ; i += 4 )
  {
    v9 = *(const char **)a1;
    s1 = v18;
    n = 0;
    v18[0] = 0;
    sub_B5F80(a2, a3, v9, 0, v7, (int)&s1, 0, 0, 0);
    v10 = s1;
    v11 = *(_DWORD *)(*(_DWORD *)(a1 + 92) + i);
    if ( n != *(_DWORD *)(v11 + 4) )
      break;
    if ( n )
    {
      v13 = s1;
      v12 = memcmp(s1, *(const void **)v11, n);
      v10 = v13;
      if ( v12 )
        break;
    }
    if ( v10 != v18 )
      sub_339E64(v10);
    if ( v15 <= ++v7 )
      return 0;
  }
  if ( v10 == v18 )
    return 1;
  sub_339E64(v10);
  return 1;
}
