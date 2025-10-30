__int64 __fastcall sub_12BE5C(int a1)
{
  unsigned __int8 *v2; // r5
  int v3; // r6
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r2
  __int64 result; // r0

  v2 = *(unsigned __int8 **)(a1 + 8);
  v3 = sub_347690(255 - v2[29]);
  v4 = sub_347418(*(unsigned __int8 *)(a1 + 12) + v3, v2[21]);
  v5 = ((int (__fastcall *)(_DWORD, int, int))loc_16A9F0)(*(_DWORD *)a1, v2[20] * v4, 1);
  v6 = *(unsigned __int8 *)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 24) += v5;
  result = sub_347674(v6 + v3, *(unsigned __int8 *)(v7 + 21));
  *(_BYTE *)(a1 + 12) = BYTE4(result);
  return result;
}
