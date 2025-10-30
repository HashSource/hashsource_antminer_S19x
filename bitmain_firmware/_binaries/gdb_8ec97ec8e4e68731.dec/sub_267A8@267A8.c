void __fastcall sub_267A8(int a1, int a2, int a3)
{
  __int64 v5; // r6
  int v6; // r3
  int v7; // r3

  v5 = sub_20B88(a2, 2);
  sub_25B70(a2, a3, 0, *(_DWORD *)(a3 + 12), *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12), 4);
  v6 = *(_DWORD *)(a3 + 144);
  if ( v6 > 4 )
    sub_25B70(a2, a3, 1, v6, *(_DWORD *)(a3 + 16), *(_DWORD *)(a3 + 20), 4);
  sub_25B70(a2, a3, 2, v6, *(_DWORD *)(a3 + 24), *(_DWORD *)(a3 + 28), 4);
  v7 = *(unsigned __int8 *)(a3 + 152);
  if ( (v7 & 1) == 0 )
  {
    sub_25B70(a2, a3, 3, v7, *(_DWORD *)(a3 + 32), *(_DWORD *)(a3 + 36), 4);
    v7 = *(unsigned __int8 *)(a3 + 152);
  }
  if ( (v7 & 4) == 0 )
  {
    sub_25B70(a2, a3, 4, v7, *(_DWORD *)(a3 + 40), *(_DWORD *)(a3 + 44), 4);
    LOBYTE(v7) = *(_BYTE *)(a3 + 152);
  }
  if ( (v7 & 2) != 0 )
    sub_25B70(a2, a3, *(_DWORD *)(a3 + 148), 4, v5, SHIDWORD(v5), 4);
}
