int __fastcall sub_5718C(
        int a1,
        const void *a2,
        size_t a3,
        int (__fastcall *a4)(int, const void *, int, size_t, size_t, int, int),
        int a5,
        int a6,
        int a7,
        int a8)
{
  void *v10; // r8
  unsigned int v12; // r0
  bool v13; // cc
  int v14; // r0
  _BYTE *v15; // r5
  unsigned int v17; // r4

  v10 = (void *)(a1 + 4);
  v12 = a4(a5, a2, a1 + 4, a3, a3 - 1, a6, a7);
  v13 = v12 != 0;
  if ( v12 )
    v13 = a3 > v12;
  if ( v13 )
  {
    *(_DWORD *)a1 = v12;
    v17 = v12;
  }
  else
  {
    *(_WORD *)a1 = a3;
    *(_BYTE *)(a1 + 2) = (a3 | 0x80000000) >> 16;
    *(_BYTE *)(a1 + 3) = (a3 | 0x80000000) >> 24;
    v17 = a3;
    memcpy(v10, a2, a3);
  }
  if ( a8 )
  {
    v14 = sub_5A430(v10, v17, 0);
    *(_BYTE *)(a1 + v17 + 4) = v14;
    v15 = (_BYTE *)(a1 + v17 + 4);
    v15[1] = BYTE1(v14);
    v15[2] = BYTE2(v14);
    v15[3] = HIBYTE(v14);
  }
  return v17 + 4 * a8 + 4;
}
