int __fastcall sub_C5964(int a1, int a2)
{
  int v4; // r6

  v4 = *(_DWORD *)(a1 + 136);
  if ( *(_DWORD *)(a1 + 20) )
    sub_2594B0(a2, "catch ", "tcatch ", "catch ");
  else
    sub_2594B0(a2, "tcatch ", "tcatch ", "catch ");
  if ( v4 == 1 )
  {
    sub_2594B0(a2, "rethrow");
    return sub_D1C8C(a1, a2);
  }
  else if ( v4 )
  {
    if ( v4 == 2 )
      sub_2594B0(a2, "catch");
    return sub_D1C8C(a1, a2);
  }
  else
  {
    sub_2594B0(a2, "throw");
    return sub_D1C8C(a1, a2);
  }
}
