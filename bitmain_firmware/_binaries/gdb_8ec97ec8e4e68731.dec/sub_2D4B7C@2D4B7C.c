int __fastcall sub_2D4B7C(int a1, int a2)
{
  int v2; // r3
  int v3; // r3

  v2 = *(_DWORD *)(a2 + 140);
  if ( v2 && (v3 = *(_DWORD *)(v2 + 92)) != 0 )
    return v3;
  else
    return sub_2CD260(a1, a2);
}
