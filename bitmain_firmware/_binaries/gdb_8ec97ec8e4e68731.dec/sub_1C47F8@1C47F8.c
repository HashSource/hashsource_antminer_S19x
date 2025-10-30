_DWORD *sub_1C47F8()
{
  _DWORD *result; // r0
  int v1; // r1
  int v2; // r2

  result = sub_93028(0xCu);
  v1 = dword_487C9C;
  v2 = dword_487CA0;
  dword_487C9C = 0;
  dword_487CA0 = 0;
  *result = dword_487C98;
  result[1] = v1;
  result[2] = v2;
  dword_487C98 = 0;
  return result;
}
