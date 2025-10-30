int __fastcall sub_21A210(int a1, int a2)
{
  int result; // r0
  int v5; // r0
  int v6; // r1

  result = sub_15A078(*(_DWORD **)a2, a1);
  if ( !result )
  {
    if ( !*(_DWORD *)(a2 + 4) )
      sub_259F10(", ");
    *(_DWORD *)(a2 + 4) = 0;
    v5 = sub_259B58("");
    v6 = *(_DWORD *)sub_242F8C(v5);
    return sub_25A6BC(a1, v6);
  }
  return result;
}
