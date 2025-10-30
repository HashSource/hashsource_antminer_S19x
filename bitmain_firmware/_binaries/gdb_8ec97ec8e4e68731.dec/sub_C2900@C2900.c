int __fastcall sub_C2900(_DWORD *a1, int a2, _DWORD *a3)
{
  sub_C2084(a1, a3);
  if ( a3[2] != 2 )
    JUMPOUT(0xC2248);
  return sub_10B52C(a1[4], a2, a3 + 3);
}
