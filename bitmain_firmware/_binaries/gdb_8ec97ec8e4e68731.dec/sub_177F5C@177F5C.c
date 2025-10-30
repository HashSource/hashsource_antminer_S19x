_DWORD *__fastcall sub_177F5C(int a1, int a2, int a3)
{
  int v4; // r4
  void *v7; // r0
  int v8; // r3
  void *v9; // r0
  int v10; // r3
  _DWORD *v11; // r3

  v4 = *(_DWORD *)(a1 + 24);
  v7 = *(void **)(v4 + 24);
  v8 = (__int16)(*(_WORD *)(v4 + 4) + 1);
  *(_WORD *)(v4 + 4) = v8;
  v9 = sub_93050(v7, 24 * v8);
  v10 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v4 + 24) = v9;
  v11 = (_DWORD *)(*(_DWORD *)(v10 + 24) + 24 * *(__int16 *)(v10 + 4) - 24);
  *v11 = 0;
  v11[3] = a3;
  v11[1] = 0;
  v11[2] = 0;
  v11[5] = 0;
  v11[4] = a2;
  return v11;
}
