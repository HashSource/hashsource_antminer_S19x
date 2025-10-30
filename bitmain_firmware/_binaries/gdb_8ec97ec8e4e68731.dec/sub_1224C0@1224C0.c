int __fastcall sub_1224C0(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r3

  v8 = sub_1B7250(a1);
  v9 = ((int (__fastcall *)(int, int, int))loc_16652C)(v8, a4, a2);
  if ( !v9 )
    JUMPOUT(0x1734E0);
  return sub_1735E8(a1, a2, a3, v9);
}
