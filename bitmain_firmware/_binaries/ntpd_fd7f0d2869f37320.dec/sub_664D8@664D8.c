unsigned int __fastcall sub_664D8(_DWORD *a1, int a2)
{
  unsigned int v3; // r2
  int v4; // r0
  __int64 v5; // r6
  unsigned int v6; // r2
  unsigned int result; // r0

  v3 = ((a2 >> 31) ^ (unsigned int)a2) / 0x3C;
  v4 = v3 ^ (a2 >> 31);
  v5 = 2290649225LL * v3;
  a1[2] = a2 - 60 * v4;
  v6 = (v3 / 0x3C) ^ (a2 >> 31);
  a1[1] = v4 - 60 * v6;
  result = (a2 >> 31) ^ ((unsigned int)((2863311531u * (unsigned __int64)(HIDWORD(v5) >> 5)) >> 32) >> 4);
  *a1 = v6 - 24 * result;
  return result;
}
