int __fastcall sub_265A0(
        unsigned int a1,
        int a2,
        int a3,
        void (__fastcall *a4)(int a1, int a2, int a3),
        int a5,
        int a6)
{
  int v6; // lr
  int v7; // r12
  int v13; // r9
  int v14; // r11
  int v15; // r6
  char v16; // r9
  char v17; // r3
  int v18; // r12
  unsigned int v19; // r3
  __int64 v20; // r0
  unsigned int v21; // r3
  void (__fastcall *v22)(int, int, int); // r8
  int *v23; // r0
  int v24; // r3
  int v25; // r2
  char *v26; // r3
  int v27; // r0
  int v28; // [sp+8h] [bp-14h]

  v6 = 1044495;
  v7 = 1;
  while ( 1 )
  {
    while ( (v6 & v7) == 0 )
    {
      v7 *= 2;
      if ( !v7 )
        return sub_1F6AC(a1, "load/store", (int *)(a3 + 168));
    }
    if ( ((15 * v7) & ~a1) == 0 )
      break;
    v6 &= ~(15 * v7);
    if ( !v6 )
      return sub_1F6AC(a1, "load/store", (int *)(a3 + 168));
  }
  v13 = (unsigned __int16)a1 >> 12;
  v14 = HIWORD(a1) & 0xF;
  if ( dword_487978 )
  {
    v23 = (int *)sub_242FC8(a1);
    if ( a4 )
    {
      LOWORD(v24) = -21716;
      LOWORD(v25) = -21724;
    }
    else
    {
      LOWORD(v24) = -20112;
      LOWORD(v25) = -21712;
    }
    HIWORD(v24) = 52;
    HIWORD(v25) = 52;
    if ( a5 != 1 )
      v25 = v24;
    v26 = "";
    v27 = *v23;
    if ( a6 )
      v26 = "t";
    sub_2594B0(v27, "displaced: copying %s%s r%d [r%d] insn %.8lx\n", v25, v26, v13, v14, a1);
  }
  v15 = a1 & 0x2000000;
  v28 = v13;
  if ( v13 == 15 )
    v16 = (char)a4;
  else
    v16 = (unsigned __int8)a4 | 1;
  sub_262C8(a2, a3, a4, (a1 & 0x2000000) == 0, (a1 & 0x1200000) != 0x1000000, a5, v28, a1 & 0xF, v14);
  v17 = *(_BYTE *)(a3 + 152);
  if ( (v16 & 1) != 0 )
  {
    *(_BYTE *)(a3 + 152) = v17 & 0xFB;
    if ( v15 )
      v21 = a1 & 0xFFF00FF0;
    else
      v21 = a1 & 0xFFF00FFF | 0x20000;
    if ( v15 )
      v21 |= 0x20003u;
    *(_DWORD *)(a3 + 168) = v21;
    if ( a4 )
      v22 = sub_26148;
    else
      v22 = (void (__fastcall *)(int, int, int))sub_267A8;
    *(_DWORD *)(a3 + 212) = v22;
    return 0;
  }
  else
  {
    *(_BYTE *)(a3 + 152) = v17 | 4;
    *(_QWORD *)(a3 + 180) = 0xE0800004E2844008LL;
    LOWORD(v18) = 0x8000;
    if ( v15 )
      v19 = a1 & 0xFFF00FF0;
    else
      v19 = a1 & 0xFFF00FFF | 0x20000;
    if ( v15 )
      v19 |= 0x20000u;
    LOWORD(v20) = 16;
    if ( v15 )
      v19 |= 3u;
    HIDWORD(v20) = -532398065;
    HIWORD(v18) = -5843;
    WORD1(v20) = -5955;
    *(_DWORD *)(a3 + 188) = v19;
    *(_QWORD *)(a3 + 172) = v20;
    *(_DWORD *)(a3 + 168) = v18;
    *(_DWORD *)(a3 + 200) = 6;
    *(_DWORD *)(a3 + 212) = sub_267A8;
    return 0;
  }
}
