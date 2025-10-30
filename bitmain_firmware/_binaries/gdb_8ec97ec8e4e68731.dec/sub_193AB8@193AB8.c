int __fastcall sub_193AB8(int a1, int a2, _DWORD *a3)
{
  bool v3; // zf
  int v5; // r3
  int v6; // r2

  v3 = a3 == 0;
  v5 = *(unsigned __int8 *)(a2 + 4) ^ 1;
  v6 = *(_DWORD *)(a2 + 12);
  if ( v3 )
  {
    if ( !sub_25B6D0(a1, *(_DWORD *)(a2 + 8), v6, v5, 13, a3) )
      return 1;
  }
  else if ( !sub_25B6D0(a1, *(_DWORD *)(a2 + 8), v6, v5, 13, a3 + 7) )
  {
    *a3 = a1;
    a3[7] = a1;
    return 1;
  }
  return 0;
}
