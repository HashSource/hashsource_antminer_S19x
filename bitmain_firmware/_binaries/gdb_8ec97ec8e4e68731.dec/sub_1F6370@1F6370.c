_DWORD *sub_1F6370()
{
  _DWORD *result; // r0
  _DWORD *v1; // r3

  result = sub_93028(0x28u);
  *result = -2;
  result[1] = -3;
  dword_48934C = (int)result;
  result[2] = -3;
  v1 = result + 2;
  dword_489350 = 10;
  do
  {
    v1[1] = -1;
    ++v1;
  }
  while ( v1 != result + 9 );
  return result;
}
