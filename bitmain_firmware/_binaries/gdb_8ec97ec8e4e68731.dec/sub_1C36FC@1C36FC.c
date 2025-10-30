__int64 sub_1C36FC()
{
  __int64 result; // r0
  int v1; // r2
  int v2; // r12

  result = *(_QWORD *)&dword_487CA4;
  v1 = *(_DWORD *)(dword_487CA8 + 4);
  v2 = *(_DWORD *)(v1 - 4);
  *(_DWORD *)(dword_487CA8 + 4) = v1 - 4;
  dword_487CA4 = v2;
  return result;
}
