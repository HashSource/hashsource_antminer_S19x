int sub_30698()
{
  time_t v0; // r0
  int v1; // r2
  unsigned int *v2; // r9
  int v3; // r7
  unsigned int v4; // r10
  _DWORD *v5; // r6
  int v6; // r3
  __int64 v7; // r4
  int v8; // r12
  int v9; // r2
  int v10; // r3
  int v11; // r5
  bool v12; // zf
  int result; // r0
  unsigned int v14; // r8
  unsigned int v15; // r11
  unsigned int v16; // r4
  __int64 v17; // r0
  __int64 v18; // r0
  double v19; // d5
  int v20; // r3
  int v21; // [sp+10h] [bp-824h]
  int v22; // [sp+14h] [bp-820h]
  int v23; // [sp+2Ch] [bp-808h]
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  if ( dword_B4138 == 1 )
  {
    memset(&unk_B13D0, 0, 0x20u);
    dword_B4138 = 0;
  }
  v0 = sub_30368();
  v1 = dword_B13F0;
  LOWORD(v2) = (unsigned __int16)&dword_B12A8;
  LOWORD(v3) = (unsigned __int16)dword_9C89D8;
  LOWORD(v4) = -21845;
  dword_B13F0 = v0;
  v5 = &unk_B13D0;
  v6 = v0 - v1;
  v7 = -2004318071LL * (v0 - v1);
  v8 = (v0 - v1) >> 31;
  if ( v0 == v1 )
    v9 = 1;
  else
    v9 = v0 - v1;
  HIWORD(v2) = (unsigned int)&dword_B12A8 >> 16;
  HIWORD(v3) = (unsigned int)dword_9C89D8 >> 16;
  HIWORD(v4) = -21846;
  v10 = v6 + HIDWORD(v7);
  v11 = 0;
  v21 = v9;
  v22 = v9 >> 31;
  v23 = (v10 >> 5) - v8;
  do
  {
    while ( 1 )
    {
      v12 = sub_266F0(v11) == 0;
      result = v3 + 8 * v11;
      if ( !v12 )
      {
        v14 = *(_DWORD *)(8 * v11 + v3);
        v15 = *(_DWORD *)(result + 4);
        v16 = *v2;
        v17 = sub_8CAB8(*v5 - v14, (0xFFFFFFFEFFFFFFFFLL * (__PAIR64__(v15, v14) - *(_QWORD *)v5)) >> 32, v21, v22);
        v18 = sub_8CAB8(v17, HIDWORD(v17), 1000000000, 0);
        v19 = sub_8CA4C(v18, HIDWORD(v18));
        *v5 = v14;
        v5[1] = v15;
        *(double *)&dword_5BAB28[48 * v11 + 2 * (v16 - 24 * ((unsigned int)((v16 * (unsigned __int64)v4) >> 32) >> 4))] = v19;
        result = 24 * v11 + v16 - 1 - 24 * ((unsigned int)(((v16 - 1) * (unsigned __int64)v4) >> 32) >> 4);
        if ( v16 > 1 && v19 < *(double *)&dword_5BAB28[2 * result] * 0.75 && (unsigned int)off_AFC24 > 3 )
          break;
      }
      ++v11;
      v5 += 2;
      if ( v11 == 4 )
        goto LABEL_12;
    }
    snprintf(s, 0x800u, "chain %d hash rate %.2f low in %ld mins", v11++, v19, v23);
    result = sub_3AF5C(3, s, 0, v20);
    v5 += 2;
  }
  while ( v11 != 4 );
LABEL_12:
  ++*v2;
  return result;
}
