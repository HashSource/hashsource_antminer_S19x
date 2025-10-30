int __fastcall sub_2E2D14(int a1, int a2, _DWORD *a3)
{
  int v3; // lr
  unsigned int v4; // r12
  unsigned int i; // r3
  char v6; // lr
  int v7; // r12
  bool v8; // cf
  int v9; // r12
  int v10; // r12
  int v11; // r3

  v3 = *(_DWORD *)(a2 + 24);
  v4 = *(_DWORD *)(*(_DWORD *)(a2 + 20) + 64);
  for ( i = ~(-1 << v4); (i & v3) != 0; --v4 )
    i >>= 1;
  v6 = *(_BYTE *)(a2 + 53);
  if ( a3[16] < v4 )
    a3[16] = v4;
  v7 = a3[9];
  *(_DWORD *)(a2 + 20) = a3;
  v8 = __CFADD__(v7, i);
  v9 = v7 + i;
  if ( !v8 )
    i = v9 & ~i;
  v10 = *(_DWORD *)(a2 + 44);
  if ( v8 )
    i = -1;
  *(_DWORD *)(a2 + 24) = i;
  a3[9] = v10 + i;
  if ( (v6 & 8) != 0 )
  {
    v11 = *(_DWORD *)(a1 + 92);
    if ( !v11 || v11 < 0 && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a3[37] + 4) + 444) + 467) & 4) == 0 )
      (*(void (__fastcall **)(const char *, _DWORD))(*(_DWORD *)(a1 + 24) + 44))(
        "%P: copy reloc against protected `%T' is dangerous\n",
        *(_DWORD *)(a2 + 4));
  }
  return 1;
}
