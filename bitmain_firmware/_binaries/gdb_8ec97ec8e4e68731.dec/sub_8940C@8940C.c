int *sub_8940C()
{
  int *result; // r0
  int v1; // r12
  int v2; // r1

  result = (int *)sub_93028(8);
  v1 = dword_475158;
  v2 = dword_47515C;
  dword_475158 = (int)result;
  dword_47515C = 0;
  *result = v2;
  result[1] = v1;
  return result;
}
