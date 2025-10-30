int __fastcall sub_12BD8(int a1, int a2)
{
  int v3; // r4

  v3 = *(_DWORD *)(a1 + 20);
  if ( !v3 )
    v3 = sub_12AB8(a1, a2);
  if ( (unsigned int)(v3 + 2) > 1 )
    sub_1398C(a1 + 40, (unsigned __int8)v3);
  return v3;
}
