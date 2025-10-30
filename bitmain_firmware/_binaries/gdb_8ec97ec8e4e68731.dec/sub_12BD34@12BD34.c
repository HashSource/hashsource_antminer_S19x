__int64 __fastcall sub_12BD34(int a1, int a2)
{
  int v3; // r6
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r2
  __int64 result; // r0

  v3 = *(_DWORD *)(a1 + 8);
  v5 = sub_347418(*(unsigned __int8 *)(a1 + 12) + a2, *(unsigned __int8 *)(v3 + 21));
  v6 = ((int (__fastcall *)(_DWORD, int, int))loc_16A9F0)(*(_DWORD *)a1, *(unsigned __int8 *)(v3 + 20) * v5, 1);
  v7 = *(unsigned __int8 *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 24) += v6;
  result = sub_347674(v7 + a2, *(unsigned __int8 *)(v8 + 21));
  *(_BYTE *)(a1 + 12) = BYTE4(result);
  return result;
}
