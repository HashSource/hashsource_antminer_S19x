int *__fastcall sub_332244(unsigned int *a1, int *a2)
{
  int *v2; // r12
  unsigned int v3; // r5
  unsigned int v4; // r6
  int v5; // r3
  int v6; // r7
  int v7; // r10
  int v8; // r0
  int v9; // r4
  int v10; // r3
  int v11; // r2
  int v12; // r5
  int v13; // r4
  int v14; // r3
  int v15; // r2
  int v16; // r0
  unsigned __int8 *v17; // r11
  unsigned __int8 *v18; // r9
  unsigned __int8 *v19; // r8
  unsigned __int8 *v20; // r7
  _DWORD *v21; // r3
  int *v22; // r3
  int *v23; // r3
  int *v24; // r3
  int v25; // r0
  int *v26; // r3
  bool v27; // cc
  int v28; // r2
  int *v29; // r5
  int *v30; // r12
  int v31; // r2
  int *v32; // r0
  bool v33; // nf
  char v34; // r12
  int v35; // r12
  int v36; // r3
  int v37; // r4
  int v38; // r4
  int v39; // r4
  int v40; // r4
  _BYTE *v41; // r0
  char v42; // t1
  _BYTE *v43; // r3
  _BYTE *v44; // r2
  int v46; // r0
  int v47; // r4
  unsigned __int8 *v48; // [sp+0h] [bp-Ch]
  int v49; // [sp+4h] [bp-8h]

  v3 = a1[1];
  v4 = *a1;
  if ( (v3 & 0x80000000) != 0 )
  {
    v2 = (int *)((char *)a2 + 1);
    *(_BYTE *)a2 = 45;
  }
  v5 = 4 * ((v3 >> 26) & 0x1F);
  if ( (v3 & 0x80000000) == 0 )
    v2 = a2;
  v6 = *(_DWORD *)((char *)&unk_43ADE8 + v5 - 4052);
  v7 = *(_DWORD *)&byte_438DF0[v5 + 4004];
  if ( v6 != 3 )
  {
    v8 = v4 & 0x3FF;
    v9 = (unsigned __int16)word_439E94[(4 * (_WORD)v3) & 0x3FC | (v4 >> 30)];
    v10 = (unsigned __int16)word_439E94[(v3 >> 8) & 0x3FF];
    v11 = (unsigned __int8)(v3 >> 18) - 396;
    v12 = 4 * (unsigned __int16)word_439E94[(v4 >> 20) & 0x3FF];
    v13 = 4 * v9;
    v14 = 4 * v10;
    v15 = v11 - 2 + (v6 << 8);
    v4 = 4 * (unsigned __int16)word_439E94[(v4 >> 10) & 0x3FF];
    v16 = 4 * (unsigned __int16)word_439E94[v8];
    v48 = &byte_438DF0[v12];
    v17 = &byte_438DF0[v13];
    v18 = &byte_438DF0[v14];
    v19 = &byte_438DF0[v4];
    v20 = &byte_438DF0[v16];
    if ( v7 )
    {
      v21 = v2 + 1;
      *(_BYTE *)v2 = v7 + 48;
      *(int *)((char *)v2 + 1) = *(_DWORD *)(v18 + 1);
      goto LABEL_8;
    }
LABEL_39:
    v49 = byte_438DF0[v14];
    if ( !byte_438DF0[v14]
      || (*v2 = *(_DWORD *)&v18[4 - v49], v21 = (int *)((char *)v2 + v49), (int *)((char *)v2 + v49) == v2) )
    {
      v38 = byte_438DF0[v13];
      if ( v38 )
      {
        *v2 = *(_DWORD *)&v17[4 - v38];
        v22 = (int *)((char *)v2 + v38);
        if ( (int *)((char *)v2 + v38) != v2 )
        {
LABEL_9:
          *v22 = *(_DWORD *)(v48 + 1);
          v23 = (int *)((char *)v22 + 3);
          if ( v23 != v2 )
            goto LABEL_10;
          goto LABEL_45;
        }
      }
LABEL_43:
      v39 = byte_438DF0[v12];
      if ( byte_438DF0[v12] )
      {
        *v2 = *(_DWORD *)&v48[4 - v39];
        v23 = (int *)((char *)v2 + v39);
        if ( (int *)((char *)v2 + v39) != v2 )
        {
LABEL_10:
          *v23 = *(_DWORD *)(v19 + 1);
          v24 = (int *)((char *)v23 + 3);
          if ( v24 != v2 )
            goto LABEL_11;
          goto LABEL_47;
        }
      }
LABEL_45:
      v40 = byte_438DF0[v4];
      if ( byte_438DF0[v4] )
      {
        *v2 = *(_DWORD *)&v19[4 - v40];
        v24 = (int *)((char *)v2 + v40);
        if ( (int *)((char *)v2 + v40) != v2 )
        {
LABEL_11:
          v25 = *(_DWORD *)(v20 + 1);
          *v24 = v25;
          v26 = (int *)((char *)v24 + 3);
          if ( v26 != v2 )
            goto LABEL_12;
          goto LABEL_49;
        }
      }
LABEL_47:
      v25 = byte_438DF0[v16];
      if ( v25 )
      {
        *v2 = *(_DWORD *)&v20[4 - v25];
        v26 = (int *)((char *)v2 + v25);
        if ( (int *)((char *)v2 + v25) != v2 )
        {
LABEL_12:
          v27 = v15 <= 0;
          if ( !v15 )
          {
LABEL_31:
            *(_BYTE *)v26 = v15;
            return a2;
          }
          if ( v15 > 0 )
            v25 = 1;
          v28 = (char *)v26 - (char *)v2 + v15;
          if ( v27 )
            v25 = 0;
          v29 = (int *)((char *)v26 - 1);
          if ( v25 | (v28 < -5) )
          {
            v30 = (int *)((char *)v2 + 1);
            v31 = v28 - 1;
            if ( v26 <= v30 )
              goto LABEL_23;
            if ( v30 > v29 )
            {
              v32 = v26;
LABEL_22:
              v26 = (int *)((char *)v26 + 1);
              *(_BYTE *)v32 = 46;
LABEL_23:
              v33 = v31 < 0;
              if ( v31 )
              {
                v34 = 69;
                *(_BYTE *)v26 = 69;
                if ( v31 >= 0 )
                  v34 = 43;
                else
                  v31 = -v31;
                if ( v33 )
                  v34 = 45;
                *((_BYTE *)v26 + 1) = v34;
                v35 = byte_438DF0[4 * v31];
                *(int *)((char *)v26 + 2) = *(_DWORD *)&byte_438DF0[4 * v31 + 4 - v35];
                v26 = (int *)((char *)v26 + v35 + 2);
              }
              goto LABEL_30;
            }
          }
          else
          {
            if ( v28 <= 0 )
            {
              v41 = (char *)v26 + 1 - v28;
              v41[1] = 0;
              if ( v29 >= v2 )
              {
                do
                {
                  v42 = *((_BYTE *)v26 - 1);
                  v26 = (int *)((char *)v26 - 1);
                  *v41-- = v42;
                }
                while ( v41 != (char *)v2 + 1 - v28 );
              }
              *(_BYTE *)v2 = 48;
              v43 = (char *)v2 + 2;
              *((_BYTE *)v2 + 1) = 46;
              if ( v28 )
              {
                v44 = &v43[-v28];
                do
                  *v43++ = 48;
                while ( v44 != v43 );
              }
              return a2;
            }
            v30 = (int *)((char *)v2 + v28);
            if ( v26 <= v30 )
              goto LABEL_30;
            if ( v30 > v29 )
            {
              *(_BYTE *)v26 = 46;
              v26 = (int *)((char *)v26 + 1);
LABEL_30:
              LOBYTE(v15) = 0;
              goto LABEL_31;
            }
            v31 = v25 | (v28 < -5);
          }
          v32 = v26;
          do
          {
            *(_BYTE *)v32 = *((_BYTE *)v32 - 1);
            v32 = (int *)((char *)v32 - 1);
          }
          while ( v32 != v30 );
          goto LABEL_22;
        }
      }
LABEL_49:
      v25 = 48;
      v26 = (int *)((char *)v2 + 1);
      *(_BYTE *)v2 = 48;
      goto LABEL_12;
    }
LABEL_8:
    *v21 = *(_DWORD *)(v17 + 1);
    v22 = (_DWORD *)((char *)v21 + 3);
    if ( v22 != v2 )
      goto LABEL_9;
    goto LABEL_43;
  }
  if ( v7 )
  {
    if ( (v3 & 0x2000000) != 0 )
    {
      *(_BYTE *)v2 = 115;
      v2 = (int *)((char *)v2 + 1);
    }
    strcpy((char *)v2, "NaN");
    v2 = (int *)((char *)v2 + 3);
    if ( v4 )
    {
      v46 = v4 & 0x3FF;
      v47 = (unsigned __int16)word_439E94[(4 * (_WORD)v3) & 0x3FC | (v4 >> 30)];
      v15 = 0;
      v14 = 4 * (unsigned __int16)word_439E94[(v3 >> 8) & 0x3FF];
      v12 = 4 * (unsigned __int16)word_439E94[(v4 >> 20) & 0x3FF];
      v13 = 4 * v47;
      v18 = &byte_438DF0[v14];
      v4 = 4 * (unsigned __int16)word_439E94[(v4 >> 10) & 0x3FF];
      v16 = 4 * (unsigned __int16)word_439E94[v46];
      v48 = &byte_438DF0[v12];
      v17 = &byte_438DF0[v13];
      v19 = &byte_438DF0[v4];
      v20 = &byte_438DF0[v16];
    }
    else
    {
      if ( (v3 & 0x3FFFF) == 0 )
        return a2;
      v20 = byte_438DF0;
      v36 = (unsigned __int16)word_439E94[(v3 >> 8) & 0x3FF];
      v37 = (unsigned __int16)word_439E94[(4 * (_WORD)v3) & 0x3FC];
      v19 = byte_438DF0;
      v16 = 0;
      v12 = 0;
      v15 = 0;
      v48 = byte_438DF0;
      v14 = 4 * v36;
      v13 = 4 * v37;
      v18 = &byte_438DF0[v14];
      v17 = &byte_438DF0[v13];
    }
    goto LABEL_39;
  }
  strcpy((char *)v2, "Inf");
  strcpy((char *)v2 + 3, "inity");
  return a2;
}
