int __fastcall sub_14DB3C(int *a1, _DWORD *a2, int a3)
{
  int *v6; // r4
  int v7; // r9
  int v8; // r8
  int v10; // r4
  int v11; // r0

  v6 = &a1[4 * *a2];
  if ( v6[4] != 40 )
    return sub_14C9EC(0, a1, a2, a3);
  v7 = v6[12];
  v8 = sub_171258(*(_DWORD *)(v7 + 24));
  if ( (**(_DWORD **)(v8 + 24) & 0x100FF) != 2 || (unsigned int)(*(_DWORD *)(*a1 + 8) - 2) > 2 )
    return sub_14C9EC(0, a1, a2, a3);
  *a2 += 4;
  v10 = sub_26138C(v7, v6[8]);
  v11 = sub_1700C0(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 20));
  return sub_2647C8(v11, v10);
}
