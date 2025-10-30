__int64 __fastcall sub_11C488(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r2
  __int64 result; // r0

  v5 = *(_DWORD *)(a1 + 4);
  result = *(_QWORD *)(v5 + 176);
  *(_QWORD *)a5 = result;
  *(_DWORD *)(a5 + 8) = *(unsigned __int8 *)(v5 + 14);
  return result;
}
