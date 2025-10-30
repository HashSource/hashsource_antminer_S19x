_DWORD *__fastcall sub_42FF0(_DWORD *result)
{
  int32x2_t v1; // d7
  int *v2; // r1
  char *v3; // r6
  int v4; // r4
  int v5; // lr
  unsigned int v6; // r2
  int v7; // r1
  _DWORD *v8; // t0
  char *v9; // r1
  char v10; // t1
  _BOOL4 v11; // r3
  _BOOL4 v12; // r3
  unsigned int v13; // r0
  unsigned int v14; // r8
  int v15; // r3
  unsigned int v16; // r7
  __int16 v17; // r1
  int v18; // r12
  unsigned int v19; // r3
  int v20; // lr
  __int64 v21; // r2
  int v22; // r1
  int v23; // r0
  unsigned int v24; // r0
  unsigned int v25; // r1
  int v26; // r8
  unsigned int v27; // r7
  int v28; // r0
  int v29; // r1
  __int64 v30; // r2
  double v31; // d7
  double v32; // d6
  bool v33; // nf
  double v34; // d5
  bool v35; // nf
  double v36; // d6

  v2 = *(int **)(result[1] + 84);
  v3 = (char *)(result + 22);
  v4 = *v2;
  v5 = result[21];
  v6 = *(unsigned __int8 *)(*v2 + 73);
  if ( *(_BYTE *)(*v2 + 73) )
  {
    v12 = v5 > 0;
    if ( v6 > 7 )
      v12 = 0;
    if ( !v12 )
      goto LABEL_7;
  }
  else
  {
    v8 = result + 18;
    result = (_DWORD *)result[18];
    v7 = v8[1];
    *(_DWORD *)(v4 + 16) = result;
    *(_DWORD *)(v4 + 20) = v7;
    if ( v5 <= 0 )
    {
      *(_BYTE *)(v4 + 73) = v6;
      return result;
    }
  }
  v9 = v3;
  result = (_DWORD *)(v4 + v6 + 65);
  do
  {
    v10 = *v9++;
    ++v6;
    *(_BYTE *)result = v10;
    result = (_DWORD *)((char *)result + 1);
    v11 = v9 - v3 < v5;
    if ( v6 > 7 )
      v11 = 0;
  }
  while ( v11 );
LABEL_7:
  *(_BYTE *)(v4 + 73) = v6;
  if ( v6 > 6 )
  {
    v13 = *(unsigned __int8 *)(v4 + 66);
    v14 = *(unsigned __int8 *)(v4 + 67);
    v15 = 100 * (*(unsigned __int8 *)(v4 + 70) >> 4)
        + 10 * (*(_BYTE *)(v4 + 70) & 0xF)
        + (*(unsigned __int8 *)(v4 + 71) >> 4);
    v16 = *(unsigned __int8 *)(v4 + 68);
    v17 = *(_BYTE *)(v4 + 65) & 0xF;
    v18 = 1000 * v15;
    *(_DWORD *)(v4 + 56) = v15;
    v19 = *(unsigned __int8 *)(v4 + 69);
    v20 = 100 * v17 + 10 * (v13 >> 4);
    *(_DWORD *)(v4 + 60) = v18;
    HIDWORD(v21) = (v19 & 0xF) + 10 * ((v19 >> 4) & 7);
    v22 = (v14 & 0xF) + 10 * ((v14 >> 4) & 3);
    LODWORD(v21) = (v16 & 0xF) + 10 * ((v16 >> 4) & 7);
    v23 = v20 + (v13 & 0xF);
    *(_DWORD *)(v4 + 44) = v22;
    *(_DWORD *)(v4 + 40) = v23;
    *(_QWORD *)(v4 + 48) = v21;
    if ( sub_633D8(v23, v22, v21, HIDWORD(v21), 0, *(_DWORD *)(v4 + 16), v4 + 32, v4 + 24) )
    {
      v24 = sub_8BFD0(
              &loc_7A120,
              (unsigned int)((unsigned int)&loc_7A120 + __PAIR64__(*(_DWORD *)(v4 + 60), 0)) >> 32,
              &unk_F4240,
              0);
      v25 = *(_DWORD *)(v4 + 20);
      v26 = *(_DWORD *)(v4 + 24) - *(_DWORD *)(v4 + 16);
      v27 = v24 - v25;
      if ( v24 < v25 )
        --v26;
      v28 = *(_DWORD *)(v4 + 16);
      v29 = *(_DWORD *)(v4 + 20);
      ++*(_DWORD *)(v4 + 36);
      *(_DWORD *)(v4 + 24) = v28;
      *(_DWORD *)(v4 + 28) = v29;
      result = (_DWORD *)sub_39D44(*(_DWORD *)v4);
      v1.n64_u32[0] = (v27 >> 12) | (v26 << 20);
      v31 = vcvt_n_f64_s32(v1, 0x14u);
      v32 = *(double *)(v4 + 80);
      if ( v31 < 0.0 )
        v31 = -v31;
      if ( v32 == 0.0 )
      {
        v33 = v31 < 0.1;
        if ( v31 < 0.1 )
        {
          v31 = v31 * v31;
        }
        else
        {
          LOWORD(v30) = 5244;
          WORD2(v30) = 31457;
        }
        if ( v33 )
        {
          *(double *)(v4 + 80) = v31;
        }
        else
        {
          WORD1(v30) = 18350;
          HIWORD(v30) = 16260;
          *(_QWORD *)(v4 + 80) = v30;
        }
      }
      else
      {
        v34 = 0.95;
        v35 = v31 < 0.1;
        v36 = v32 * 0.95;
        if ( v31 >= 0.1 )
          v31 = 0.0005;
        else
          v34 = 0.05;
        if ( v35 )
          v34 = v31 * v34;
        else
          v36 = v36 + v31;
        if ( v35 )
          v36 = v36 + v34 * v31;
        *(double *)(v4 + 80) = v36;
      }
    }
    else
    {
      return (_DWORD *)sub_64E00(3, "Datum_PTS: Bad clocktime");
    }
  }
  return result;
}
