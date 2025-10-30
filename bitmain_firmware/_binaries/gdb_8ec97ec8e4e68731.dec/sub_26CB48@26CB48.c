_DWORD *__fastcall sub_26CB48(int a1)
{
  _DWORD *v2; // r4
  int v3; // r2
  int v4; // r2

  v2 = sub_93028(0x20u);
  v2[1] = sub_31E27C(a1, 0, v3);
  v4 = dword_48AA0C;
  v2[2] = 0;
  dword_48AA0C = (int)v2;
  *v2 = v4;
  return v2;
}
