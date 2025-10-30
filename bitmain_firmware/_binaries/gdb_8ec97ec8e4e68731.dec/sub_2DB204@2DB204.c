int __fastcall sub_2DB204(int a1, int a2, int *a3, int a4)
{
  int v4; // r5
  int v5; // r4
  int v9; // r0
  int v10; // r2

  v4 = *a3;
  v5 = *(_DWORD *)a2 + *(_DWORD *)(*a3 + 56) + *(_DWORD *)(*(_DWORD *)(*a3 + 60) + 28);
  if ( (*(_DWORD *)(*a3 + 20) & 0x800000) != 0
    && (*(_BYTE *)(a2 + 12) & 0xF) == 3
    && (*(_WORD *)(v4 + 24) & 0x380) == 0x100 )
  {
    v9 = sub_30061C(a1, a3, *(_DWORD *)(*(_DWORD *)(v4 + 140) + 136), *(_DWORD *)a2 + *(_DWORD *)(a4 + 8));
    v10 = *a3;
    *(_DWORD *)(a4 + 8) = v9;
    if ( v10 != v4 && (*(_DWORD *)(v4 + 20) & 0x8000) != 0 )
    {
      *(_DWORD *)(v4 + 124) = v10;
      v10 = *a3;
    }
    *(_DWORD *)(a4 + 8) = v9 - v5 + *(_DWORD *)(v10 + 56) + *(_DWORD *)(*(_DWORD *)(v10 + 60) + 28);
  }
  return v5;
}
