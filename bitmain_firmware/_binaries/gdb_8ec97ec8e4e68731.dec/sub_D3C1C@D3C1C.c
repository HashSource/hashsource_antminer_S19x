int __fastcall sub_D3C1C(int a1, int a2)
{
  __int64 v2; // r2
  int v4; // r12
  int v5; // r0
  int v6; // r0
  int v7; // r0

  v2 = *(_QWORD *)(a2 + 12);
  v4 = *(_DWORD *)(a2 + 4);
  v5 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = v4;
  *(_DWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 12) = v2;
  if ( HIDWORD(v2) )
    ++*(_DWORD *)(HIDWORD(v2) + 4);
  v6 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 20) = v6;
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  *(_BYTE *)(a1 + 25) = *(_BYTE *)(a2 + 25);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  if ( v6 )
  {
    v7 = sub_26C4E0(v6, a2);
    *(_DWORD *)(a1 + 20) = v7;
    sub_26C3B8(v7);
  }
  ++*(_DWORD *)(*(_DWORD *)(a1 + 4) + 8);
  return a1;
}
