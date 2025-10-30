void __fastcall sub_25FAC(int a1, int a2, int a3)
{
  int v5; // r3

  sub_25B70(a2, a3, 0, *(_DWORD *)(a3 + 12), *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12), 4);
  v5 = *(unsigned __int8 *)(a3 + 144);
  if ( (v5 & 1) == 0 )
    sub_25B70(a2, a3, 1, v5, *(_DWORD *)(a3 + 16), *(_DWORD *)(a3 + 20), 4);
}
