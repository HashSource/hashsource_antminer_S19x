int __fastcall sub_D8DC0(int a1, int a2)
{
  int v4; // r0

  if ( sub_D8DB8(a1, 1024) )
  {
    *(_DWORD *)(a1 + 16) = a2;
    v4 = a1;
    if ( a2 )
      return sub_D8DA4(v4, 1024);
  }
  else
  {
    sub_DB4BC(*(_DWORD *)(a1 + 16));
    *(_DWORD *)(a1 + 16) = a2;
    v4 = a1;
    if ( a2 )
      return sub_D8DA4(v4, 1024);
  }
  return sub_D8DAC(v4, 1024);
}
