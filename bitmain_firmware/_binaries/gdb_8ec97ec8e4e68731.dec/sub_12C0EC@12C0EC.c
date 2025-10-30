int __fastcall sub_12C0EC(int a1, char a2)
{
  unsigned __int8 *v3; // r6
  unsigned __int8 v4; // r5
  unsigned __int8 v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r6
  int v9; // r8
  int v10; // r7
  unsigned __int8 v11; // r0
  char v12; // r1
  int v13; // r1
  int result; // r0

  v3 = *(unsigned __int8 **)(a1 + 8);
  v4 = a2 - v3[29];
  v5 = sub_347418(v4, v3[28]);
  v6 = sub_347690(v5 + *(unsigned __int8 *)(a1 + 12));
  v7 = ((int (__fastcall *)(_DWORD, int, int))loc_16A9F0)(*(_DWORD *)a1, v3[20] * v6, 1);
  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(unsigned __int8 *)(a1 + 12);
  *(_DWORD *)(a1 + 24) += v7;
  v10 = *(unsigned __int8 *)(v8 + 28);
  v11 = sub_347418(v4, v10);
  sub_347924(v9 + v11, *(unsigned __int8 *)(v8 + 21));
  *(_BYTE *)(a1 + 12) = v12;
  v13 = (unsigned __int8)((unsigned __int64)sub_347674(v4, v10) >> 32) + *(_DWORD *)(v8 + 24);
  *(_DWORD *)(a1 + 20) += v13;
  if ( v13 )
    *(_BYTE *)(a1 + 52) = *(_DWORD *)(a1 + 32) != 0;
  result = sub_12BEC8(a1, 0);
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
