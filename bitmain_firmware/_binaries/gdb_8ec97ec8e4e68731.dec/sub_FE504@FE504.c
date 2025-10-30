int __fastcall sub_FE504(int a1, int a2, _DWORD *a3)
{
  int v6; // r2
  int v7; // r1
  int v8; // r3

  if ( !*(_BYTE *)(a2 + 88) )
  {
    sub_21C928(a2 + 64, a2, 4);
    *(_BYTE *)(a2 + 88) = 1;
  }
  v6 = *(_DWORD *)(a2 + 68);
  v7 = *(_DWORD *)(a2 + 64);
  v8 = *(unsigned __int8 *)(a2 + 4) ^ 1;
  if ( a3 )
  {
    if ( !sub_25B6D0(a1, v7, v6, v8, 4, a3 + 7) )
    {
      *a3 = a1;
      a3[7] = a1;
      return 1;
    }
  }
  else if ( !sub_25B6D0(a1, v7, v6, v8, 4, 0) )
  {
    return 1;
  }
  return 0;
}
