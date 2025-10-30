int __fastcall sub_43DA8(_DWORD *a1)
{
  double v1; // d19
  int result; // r0
  int v4; // lr
  int v5; // r4
  unsigned int v6; // r12
  int v7; // r1
  int v8; // r1
  unsigned int v9; // r3
  char v10; // t1
  _BOOL4 v11; // r2
  _BOOL4 v12; // r2
  unsigned int v13; // r0
  int v14; // r8
  unsigned int v15; // r7
  int v16; // r3
  unsigned int v17; // r6
  int v18; // r0
  unsigned int v19; // lr
  int v20; // r0
  int v21; // r3
  int v22; // r1
  int v23; // r2
  __int64 v24; // d17
  unsigned int v25; // r12
  int v26; // r0
  int v27; // r1
  __int64 v28; // r6
  int32x2_t v29; // d16
  double v30; // d16
  double v31; // d17
  bool v32; // nf
  double v33; // d18
  bool v34; // nf
  double v35; // d18
  double v36; // d16

  result = *(_DWORD *)(a1[1] + 84);
  v4 = a1[21];
  v5 = *(_DWORD *)result;
  v6 = *(unsigned __int8 *)(*(_DWORD *)result + 73);
  if ( *(_BYTE *)(*(_DWORD *)result + 73) )
  {
    v12 = v6 <= 7;
    if ( v4 <= 0 )
      v12 = 0;
    if ( !v12 )
    {
      *(_BYTE *)(v5 + 73) = v6;
      if ( v6 <= 6 )
        return result;
      goto LABEL_13;
    }
  }
  else
  {
    result = a1[18];
    v7 = a1[19];
    *(_DWORD *)(v5 + 16) = result;
    *(_DWORD *)(v5 + 20) = v7;
    if ( v4 <= 0 )
    {
      *(_BYTE *)(v5 + 73) = v6;
      return result;
    }
  }
  result = (int)a1 + 87;
  v8 = v5 + v6 + 64;
  v9 = v6;
  do
  {
    ++v9;
    v10 = *(_BYTE *)++result;
    *(_BYTE *)++v8 = v10;
    v11 = v4 > (int)(v9 - v6);
    if ( v9 > 7 )
      v11 = 0;
  }
  while ( v11 );
  *(_BYTE *)(v5 + 73) = v9;
  if ( v9 > 6 )
  {
LABEL_13:
    v13 = *(unsigned __int8 *)(v5 + 66);
    v14 = v13 & 0xF;
    v15 = *(unsigned __int8 *)(v5 + 67);
    v16 = 100 * (*(unsigned __int8 *)(v5 + 70) >> 4)
        + 10 * (*(_BYTE *)(v5 + 70) & 0xF)
        + (*(unsigned __int8 *)(v5 + 71) >> 4);
    v17 = *(unsigned __int8 *)(v5 + 68);
    v18 = 100 * (*(_BYTE *)(v5 + 65) & 0xF) + 10 * (v13 >> 4);
    v19 = *(unsigned __int8 *)(v5 + 69);
    *(_DWORD *)(v5 + 56) = v16;
    *(_DWORD *)(v5 + 60) = 1000 * v16;
    v20 = v18 + v14;
    v21 = 10 * ((v19 >> 4) & 7) + (v19 & 0xF);
    *(_DWORD *)(v5 + 40) = v20;
    *(_DWORD *)(v5 + 52) = v21;
    v22 = 10 * ((v15 >> 4) & 3) + (v15 & 0xF);
    v23 = 10 * ((v17 >> 4) & 7) + (v17 & 0xF);
    *(_DWORD *)(v5 + 44) = v22;
    *(_DWORD *)(v5 + 48) = v23;
    if ( sub_64318(v20, v22, v23, v21, 0, *(_DWORD *)(v5 + 16), v5 + 32, v5 + 24) )
    {
      v24 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(*(_DWORD *)(v5 + 60)).n64_i64[0], 0x20u), 0x20u);
      v25 = sub_8D518((char *)sub_7A120 + v24, (v24 + (unsigned __int64)(unsigned int)sub_7A120) >> 32, &unk_F4240, 0);
      v26 = *(_DWORD *)(v5 + 16);
      v27 = *(_DWORD *)(v5 + 20);
      LODWORD(v28) = v25 - v27;
      if ( v25 < v25 - v27 )
        HIDWORD(v28) = *(_DWORD *)(v5 + 24) - v26 - 1;
      else
        HIDWORD(v28) = *(_DWORD *)(v5 + 24) - v26;
      ++*(_DWORD *)(v5 + 36);
      *(_DWORD *)(v5 + 24) = v26;
      *(_DWORD *)(v5 + 28) = v27;
      result = sub_3A534(*(_DWORD *)v5);
      v29.n64_u32[0] = v28 >> 12;
      v29.n64_u32[1] = v29.n64_u32[0];
      v30 = vcvt_n_f64_s32(v29, 0x14u);
      v31 = *(double *)(v5 + 80);
      if ( v30 < 0.0 )
        v30 = -v30;
      if ( v31 == 0.0 )
      {
        v32 = v30 < 0.1;
        if ( v30 >= 0.1 )
          *(_QWORD *)(v5 + 80) = 0x3F847AE147AE147CLL;
        else
          v30 = v30 * v30;
        if ( v32 )
          *(double *)(v5 + 80) = v30;
      }
      else
      {
        v33 = 0.1;
        v34 = v30 < 0.1;
        if ( v30 >= 0.1 )
          v30 = 0.0005;
        else
          v33 = 0.05;
        if ( v34 )
        {
          v35 = v30 * v33;
          v1 = 0.95;
        }
        else
        {
          v35 = 0.95;
        }
        if ( v34 )
          v36 = v35 * v30;
        else
          v36 = v30 + v31 * v35;
        if ( v34 )
          v36 = v36 + v31 * v1;
        *(double *)(v5 + 80) = v36;
      }
    }
    else
    {
      return sub_65D40(3, "Datum_PTS: Bad clocktime");
    }
  }
  return result;
}
