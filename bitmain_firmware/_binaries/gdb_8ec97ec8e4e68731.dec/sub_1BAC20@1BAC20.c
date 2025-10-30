_DWORD *__fastcall sub_1BAC20(int a1, int a2)
{
  _DWORD *result; // r0
  __int64 v4; // r2

  result = (_DWORD *)((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_487C28);
  LODWORD(v4) = *result;
  HIDWORD(v4) = "int";
  *(_DWORD *)a2 = result;
  *(_QWORD *)(a2 + 8) = v4;
  *(_DWORD *)(a2 + 16) = result[24];
  return result;
}
