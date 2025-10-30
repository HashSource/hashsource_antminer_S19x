_BYTE *sub_1B55EC()
{
  _DWORD *v0; // r0
  int v1; // r2
  int v2; // r3
  int v3; // r5
  _BYTE *result; // r0

  v0 = sub_93028(0xCu);
  v1 = dword_487B48;
  v2 = dword_487B4C;
  v3 = (int)v0;
  dword_487B48 = 0;
  *v0 = dword_487B44;
  v0[2] = v1;
  v0[1] = v2;
  result = sub_93028(1u);
  dword_487B44 = v3;
  dword_487B4C = (int)result;
  *result = 0;
  return result;
}
