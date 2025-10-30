int __fastcall sub_183A3C(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r2

  if ( a1 )
  {
    for ( result = dword_487918; result && *(_DWORD *)(result + 12) != a1; result = *(_DWORD *)(result + 4) )
      ;
  }
  else
  {
    v3 = sub_15F58();
    return sub_183A88(v3, v4, v5);
  }
  return result;
}
