int __fastcall sub_57270(_WORD *a1, int a2, int a3, int a4)
{
  int v6; // r3
  int v7; // r1

  if ( a3 > 2 )
  {
    sub_56A98(a1, a3);
    v7 = a2;
    if ( a2 )
      v7 = *(_DWORD *)(a2 + 24);
    return sub_56D64((int)a1, v7);
  }
  else
  {
    v6 = a4 == 0;
    if ( a2 )
      v6 |= 1u;
    if ( v6 && (sub_4C158(a1), a2) )
      return sub_4C238((int)a1, *(_DWORD *)(a2 + 20));
    else
      return sub_4C238((int)a1, 0);
  }
}
