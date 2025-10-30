_DWORD *sub_2928D4()
{
  _DWORD *result; // r0
  int v1; // r2
  int v2; // r12

  result = sub_93028(0xCu);
  v1 = dword_48B6F4;
  v2 = dword_48B6EC;
  dword_48B6EC = (int)result;
  result[2] = dword_48B6F0;
  *result = v2;
  result[1] = v1;
  return result;
}
