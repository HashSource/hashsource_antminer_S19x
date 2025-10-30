_DWORD *sub_27F3F8()
{
  _DWORD *result; // r0
  int v1; // r1

  result = sub_93028(0x20u);
  v1 = dword_48AAD8;
  result[7] = 42;
  result[2] = 0;
  result[6] = v1;
  result[1] = 0;
  *result = 0;
  result[5] = 0;
  return result;
}
