bool __fastcall sub_15A168(_DWORD *a1, unsigned int a2)
{
  signed int v2; // r0

  v2 = sub_159F00(a1, 18, a2, 0, 0);
  if ( v2 >= 0 )
    return (v2 & 7) != 0;
  sub_D0048(38, 170, 138, (int)"crypto/engine/eng_ctrl.c", 183);
  return 0;
}
