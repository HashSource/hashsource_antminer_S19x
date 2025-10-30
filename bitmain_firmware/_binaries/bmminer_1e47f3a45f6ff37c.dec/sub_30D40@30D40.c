// positive sp value has been detected, the output may be wrong!
void __fastcall sub_30D40(
        int a1,
        int a2,
        int a3,
        int a4,
        double a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char s)
{
  unsigned int *v14; // r6
  unsigned int v15; // r7
  _DWORD *v16; // r10
  __int64 *v17; // r11
  int v18; // s16
  int v19; // s17
  double v20; // d9
  int v21; // r5
  unsigned int v22; // r4
  __int64 v23; // r0
  int v24; // r0
  int v25; // r1
  double v26; // r0
  int v27; // r3
  __int64 v28; // [sp-82Ch] [bp-82Ch]
  int v29; // [sp-818h] [bp-818h]
  char v30[2068]; // [sp-814h] [bp-814h] BYREF

  HIWORD(v15) = -21846;
  HIWORD(v17) = 156;
  v21 = 0;
  v29 = (a1 >> 5) - a2;
  while ( 1 )
  {
    if ( sub_26C0C(v21) )
    {
      v22 = *v14;
      v28 = *v17;
      v23 = ((__int64 (__fastcall *)(int, _DWORD, int, int))sub_8FE20)(
              *v16 - *(_DWORD *)v17,
              *(_DWORD *)v17 - *v16 - (((unsigned __int64)(*v17 - *(_QWORD *)v16) >> 32) + (*(_DWORD *)v17 != *v16)),
              v18,
              v19);
      v24 = sub_8FE20(v23, HIDWORD(v23), 1000000000, 0);
      v26 = COERCE_DOUBLE(((__int64 (__fastcall *)(int, int))sub_8FDB4)(v24, v25));
      *(_QWORD *)v16 = v28;
      *(double *)&dword_5BF9E0[48 * v21 + 2 * (v22 - 24 * ((unsigned int)((v22 * (unsigned __int64)v15) >> 32) >> 4))] = v26;
      if ( v22 > 1
        && v26 < *(double *)&dword_5BF9E0[48 * v21
                                        + 2
                                        * (v22
                                         - 1
                                         - 24 * ((unsigned int)(((v22 - 1) * (unsigned __int64)v15) >> 32) >> 4))]
               * v20
        && (unsigned int)dword_B308C > 3 )
      {
        snprintf(v30, 0x800u, "chain %d hash rate %.2f low in %ld mins", v21, v26, v29);
        sub_3B6AC(3, v30, 0, v27);
      }
    }
    ++v21;
    ++v17;
    v16 += 2;
    if ( v21 == 4 )
    {
      ++*v14;
      __asm { POP             {R4-R11,PC} }
    }
  }
}
