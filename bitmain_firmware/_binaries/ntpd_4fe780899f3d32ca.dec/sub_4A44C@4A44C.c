int __fastcall sub_4A44C(__int16 *a1, int a2, _WORD *a3)
{
  int v6; // r4
  int v7; // r2

  v6 = (__int16)(a3[253] + 1);
  v7 = (__int16)a3[256];
  a3[253] = v6;
  if ( v6 >= sub_8B908((__int16)word_97BA0[v7], (__int16)word_97B94[v7]) )
    return sub_4A2E0(a1, a2);
  sub_4A3BC(a1, a2);
  a3[254] = 0;
  return 0;
}
