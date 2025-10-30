int __fastcall sub_206724(int a1, int a2)
{
  int v4; // r0
  int v5; // r3

  v4 = sub_1B7250(a1);
  v5 = ((int (__fastcall *)(int, _DWORD, int))loc_16652C)(v4, 0, a2);
  if ( !v5 )
    JUMPOUT(0x1734E0);
  return sub_1735E8(a1, a2, 0, v5);
}
