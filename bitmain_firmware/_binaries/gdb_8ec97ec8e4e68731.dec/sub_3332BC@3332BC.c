_BYTE *__fastcall sub_3332BC(unsigned int *a1, _BYTE *a2, int a3, unsigned int *a4)
{
  _BYTE *v4; // lr
  int v5; // r2
  unsigned int v6; // r12
  int v7; // r4
  unsigned int v8; // r10
  unsigned int v9; // r1
  int v10; // r6
  int v11; // lr
  int v12; // r10
  int v13; // r9
  unsigned __int8 *v14; // lr
  int v15; // r7
  int v16; // r11
  int v17; // r8
  int v18; // r1
  unsigned __int8 *v19; // r5
  unsigned int v20; // r0
  unsigned __int8 *v21; // r4
  _DWORD *v22; // r2
  unsigned int *v23; // r2
  unsigned int *v24; // r2
  unsigned int *v25; // r2
  unsigned int *v26; // r2
  unsigned int *v27; // r2
  unsigned int *v28; // r2
  unsigned int *v29; // r2
  _DWORD *v30; // r1
  unsigned int *v31; // r1
  unsigned int *v32; // r1
  int v33; // r2
  unsigned int *v34; // lr
  unsigned int *v35; // r3
  int v36; // r2
  unsigned int *v37; // r0
  bool v38; // cc
  char v39; // r3
  int v40; // r3
  int v41; // r0
  int v42; // lr
  int v43; // r6
  int v44; // r5
  int v45; // lr
  int v46; // r1
  int v47; // r1
  int v48; // r1
  int v49; // r1
  int v50; // r1
  int v51; // r2
  int v52; // r2
  int v53; // r2
  _BYTE *v54; // r0
  char v55; // t1
  _BYTE *v56; // r3
  _BYTE *v57; // r2
  int v59; // r3
  int v61; // [sp+8h] [bp-3Ch]
  int v62; // [sp+Ch] [bp-38h]
  int v63; // [sp+10h] [bp-34h]
  int v64; // [sp+14h] [bp-30h]
  int v65; // [sp+18h] [bp-2Ch]
  int v66; // [sp+1Ch] [bp-28h]
  int v67; // [sp+20h] [bp-24h]
  unsigned __int8 *v68; // [sp+24h] [bp-20h]
  unsigned __int8 *v69; // [sp+28h] [bp-1Ch]
  unsigned __int8 *v70; // [sp+2Ch] [bp-18h]
  unsigned __int8 *v71; // [sp+30h] [bp-14h]
  unsigned __int8 *v72; // [sp+34h] [bp-10h]
  unsigned __int8 *v73; // [sp+38h] [bp-Ch]
  unsigned __int8 *v74; // [sp+3Ch] [bp-8h]

  v5 = a1[3];
  v6 = *a1;
  if ( v5 < 0 )
    v4 = a2;
  v7 = ((unsigned int)v5 >> 26) & 0x1F;
  v8 = a1[1];
  v9 = a1[2];
  if ( v5 < 0 )
  {
    *v4 = 45;
    a4 = (unsigned int *)(v4 + 1);
  }
  v10 = dword_439E14[v7];
  if ( v5 >= 0 )
    a4 = (unsigned int *)a2;
  v61 = dword_439D94[v7];
  if ( v10 != 3 )
  {
    v66 = 4 * (unsigned __int16)word_439E94[(16 * (_WORD)v9) & 0x3F0 | (v8 >> 28)];
    v62 = 4 * (unsigned __int16)word_439E94[((_WORD)v5 << 6) & 0x3C0 | (v9 >> 26)];
    v65 = 4 * (unsigned __int16)word_439E94[(4 * (_WORD)v8) & 0x3FC | (v6 >> 30)];
    v11 = (unsigned __int16)word_439E94[(v8 >> 8) & 0x3FF];
    v12 = 4 * (unsigned __int16)word_439E94[(v8 >> 18) & 0x3FF];
    v67 = 4 * v11;
    v13 = 4 * (unsigned __int16)word_439E94[((unsigned int)v5 >> 4) & 0x3FF];
    v64 = 4 * (unsigned __int16)word_439E94[(v6 >> 20) & 0x3FF];
    v14 = &byte_438DF0[v62];
    v15 = (((unsigned int)v5 >> 14) & 0xFFF) - 6176 + (v10 << 12);
    v16 = 4 * (unsigned __int16)word_439E94[v6 & 0x3FF];
    v17 = 4 * (unsigned __int16)word_439E94[HIWORD(v9) & 0x3FF];
    v73 = &byte_438DF0[v12];
    v63 = 4 * (unsigned __int16)word_439E94[(v6 >> 10) & 0x3FF];
    v72 = &byte_438DF0[v67];
    v18 = 4 * (unsigned __int16)word_439E94[(unsigned __int16)v9 >> 6];
    v74 = &byte_438DF0[v66];
    v71 = &byte_438DF0[v65];
    v19 = &byte_438DF0[v13];
    v70 = &byte_438DF0[v64];
    v20 = (unsigned int)&byte_438DF0[v17];
    v21 = &byte_438DF0[v18];
    v69 = &byte_438DF0[v63];
    v68 = &byte_438DF0[v16];
    if ( v61 )
    {
      v22 = a4 + 1;
      *(_BYTE *)a4 = v61 + 48;
      *(unsigned int *)((char *)a4 + 1) = *(_DWORD *)(v19 + 1);
      goto LABEL_10;
    }
LABEL_47:
    v43 = byte_438DF0[v13];
    if ( !byte_438DF0[v13]
      || (*a4 = *(_DWORD *)&v19[4 - v43],
          v22 = (unsigned int *)((char *)a4 + v43),
          (unsigned int *)((char *)a4 + v43) == a4) )
    {
      v44 = byte_438DF0[v62];
      if ( byte_438DF0[v62] )
      {
        *a4 = *(_DWORD *)&v14[4 - v44];
        v23 = (unsigned int *)((char *)a4 + v44);
        if ( (unsigned int *)((char *)a4 + v44) != a4 )
        {
LABEL_11:
          v20 = *(_DWORD *)(v20 + 1);
          *v23 = v20;
          v24 = (unsigned int *)((char *)v23 + 3);
          if ( v24 != a4 )
            goto LABEL_12;
          goto LABEL_53;
        }
      }
LABEL_51:
      v45 = byte_438DF0[v17];
      if ( byte_438DF0[v17] )
      {
        v20 = *(_DWORD *)(v20 + 4 - v45);
        *a4 = v20;
        v24 = (unsigned int *)((char *)a4 + v45);
        if ( (unsigned int *)((char *)a4 + v45) != a4 )
        {
LABEL_12:
          *v24 = *(_DWORD *)(v21 + 1);
          v25 = (unsigned int *)((char *)v24 + 3);
          if ( v25 != a4 )
            goto LABEL_13;
          goto LABEL_55;
        }
      }
LABEL_53:
      v46 = byte_438DF0[v18];
      if ( v46 )
      {
        v20 = *(_DWORD *)&v21[4 - v46];
        *a4 = v20;
        v25 = (unsigned int *)((char *)a4 + v46);
        if ( (unsigned int *)((char *)a4 + v46) != a4 )
        {
LABEL_13:
          *v25 = *(_DWORD *)(v74 + 1);
          v26 = (unsigned int *)((char *)v25 + 3);
          if ( v26 != a4 )
            goto LABEL_14;
          goto LABEL_57;
        }
      }
LABEL_55:
      v47 = byte_438DF0[v66];
      if ( byte_438DF0[v66] )
      {
        v20 = *(_DWORD *)&v74[4 - v47];
        *a4 = v20;
        v26 = (unsigned int *)((char *)a4 + v47);
        if ( (unsigned int *)((char *)a4 + v47) != a4 )
        {
LABEL_14:
          *v26 = *(_DWORD *)(v73 + 1);
          v27 = (unsigned int *)((char *)v26 + 3);
          if ( v27 != a4 )
            goto LABEL_15;
          goto LABEL_59;
        }
      }
LABEL_57:
      v48 = byte_438DF0[v12];
      if ( byte_438DF0[v12] )
      {
        v20 = *(_DWORD *)&v73[4 - v48];
        *a4 = v20;
        v27 = (unsigned int *)((char *)a4 + v48);
        if ( (unsigned int *)((char *)a4 + v48) != a4 )
        {
LABEL_15:
          *v27 = *(_DWORD *)(v72 + 1);
          v28 = (unsigned int *)((char *)v27 + 3);
          if ( v28 != a4 )
            goto LABEL_16;
          goto LABEL_61;
        }
      }
LABEL_59:
      v49 = byte_438DF0[v67];
      if ( byte_438DF0[v67] )
      {
        v20 = *(_DWORD *)&v72[4 - v49];
        *a4 = v20;
        v28 = (unsigned int *)((char *)a4 + v49);
        if ( (unsigned int *)((char *)a4 + v49) != a4 )
        {
LABEL_16:
          *v28 = *(_DWORD *)(v71 + 1);
          v29 = (unsigned int *)((char *)v28 + 3);
          if ( v29 != a4 )
            goto LABEL_17;
          goto LABEL_63;
        }
      }
LABEL_61:
      v50 = byte_438DF0[v65];
      if ( byte_438DF0[v65] )
      {
        v20 = *(_DWORD *)&v71[4 - v50];
        *a4 = v20;
        v29 = (unsigned int *)((char *)a4 + v50);
        if ( (unsigned int *)((char *)a4 + v50) != a4 )
        {
LABEL_17:
          v20 = *(_DWORD *)(v70 + 1);
          *v29 = v20;
          v30 = (unsigned int *)((char *)v29 + 3);
          if ( (unsigned int *)((char *)v29 + 3) != a4 )
            goto LABEL_18;
          goto LABEL_65;
        }
      }
LABEL_63:
      v51 = byte_438DF0[v64];
      if ( byte_438DF0[v64] )
      {
        v20 = *(_DWORD *)&v70[4 - v51];
        *a4 = v20;
        v30 = (unsigned int *)((char *)a4 + v51);
        if ( (unsigned int *)((char *)a4 + v51) != a4 )
        {
LABEL_18:
          *v30 = *(_DWORD *)(v69 + 1);
          v31 = (_DWORD *)((char *)v30 + 3);
          if ( v31 != a4 )
            goto LABEL_19;
          goto LABEL_67;
        }
      }
LABEL_65:
      v52 = byte_438DF0[v63];
      if ( byte_438DF0[v63] )
      {
        v20 = *(_DWORD *)&v69[4 - v52];
        *a4 = v20;
        v31 = (unsigned int *)((char *)a4 + v52);
        if ( (unsigned int *)((char *)a4 + v52) != a4 )
        {
LABEL_19:
          *v31 = *(_DWORD *)(v68 + 1);
          v32 = (unsigned int *)((char *)v31 + 3);
          if ( v32 != a4 )
            goto LABEL_20;
          goto LABEL_69;
        }
      }
LABEL_67:
      v53 = byte_438DF0[v16];
      if ( byte_438DF0[v16] )
      {
        v20 = *(_DWORD *)&v68[4 - v53];
        *a4 = v20;
        v32 = (unsigned int *)((char *)a4 + v53);
        if ( (unsigned int *)((char *)a4 + v53) != a4 )
        {
LABEL_20:
          if ( !v15 )
          {
            *(_BYTE *)v32 = 0;
            return a2;
          }
          if ( v15 > 0 )
            v20 = 1;
          v33 = (char *)v32 - (char *)a4 + v15;
          if ( v15 <= 0 )
            v20 = 0;
          v34 = (unsigned int *)((char *)v32 - 1);
          if ( v20 | (v33 < -5) )
          {
            v35 = (unsigned int *)((char *)a4 + 1);
            v36 = v33 - 1;
            if ( v32 <= v35 )
              goto LABEL_32;
            if ( v35 > v34 )
            {
              v37 = v32;
LABEL_31:
              v32 = (unsigned int *)((char *)v32 + 1);
              *(_BYTE *)v37 = 46;
LABEL_32:
              v38 = v36 < 0;
              if ( v36 )
              {
                if ( v36 < 0 )
                  v36 = -v36;
                *(_BYTE *)v32 = 69;
                if ( v38 )
                  v39 = 45;
                else
                  v39 = 43;
                *((_BYTE *)v32 + 1) = v39;
                if ( v36 >= 1000 )
                {
                  v32 = (unsigned int *)((char *)v32 + 6);
                  v59 = (1049 * (v36 >> 3)) >> 17;
                  *((_BYTE *)v32 - 4) = v59 + 48;
                  *(unsigned int *)((char *)v32 - 3) = *(_DWORD *)&byte_438DF0[4 * (v36 - 1000 * v59) + 1];
                }
                else
                {
                  v40 = byte_438DF0[4 * v36];
                  *(unsigned int *)((char *)v32 + 2) = *(_DWORD *)&byte_438DF0[4 * v36 + 4 - v40];
                  v32 = (unsigned int *)((char *)v32 + v40 + 2);
                }
              }
              goto LABEL_40;
            }
          }
          else
          {
            if ( v33 <= 0 )
            {
              v54 = (_BYTE *)(1 - (v15 - (_DWORD)a4));
              *(_BYTE *)(2 - (v15 - (_DWORD)a4)) = 0;
              if ( a4 <= v34 )
              {
                do
                {
                  v55 = *((_BYTE *)v32 - 1);
                  v32 = (unsigned int *)((char *)v32 - 1);
                  *v54-- = v55;
                }
                while ( v54 != (char *)a4 + 1 - v33 );
              }
              *(_BYTE *)a4 = 48;
              *((_BYTE *)a4 + 1) = 46;
              if ( v33 )
              {
                v56 = (char *)a4 + 2;
                v57 = &v56[-v33];
                do
                  *v56++ = 48;
                while ( v57 != v56 );
              }
              return a2;
            }
            v35 = (unsigned int *)((char *)v32 + v15);
            if ( v32 <= (unsigned int *)((char *)v32 + v15) )
              goto LABEL_40;
            if ( v35 > v34 )
            {
              *(_BYTE *)v32 = 46;
              v32 = (unsigned int *)((char *)v32 + 1);
LABEL_40:
              *(_BYTE *)v32 = 0;
              return a2;
            }
            v36 = v20 | (v33 < -5);
          }
          v37 = v32;
          do
          {
            *(_BYTE *)v37 = *((_BYTE *)v37 - 1);
            v37 = (unsigned int *)((char *)v37 - 1);
          }
          while ( v37 != v35 );
          goto LABEL_31;
        }
      }
LABEL_69:
      v32 = (unsigned int *)((char *)a4 + 1);
      *(_BYTE *)a4 = 48;
      goto LABEL_20;
    }
LABEL_10:
    *v22 = *(_DWORD *)(v14 + 1);
    v23 = (_DWORD *)((char *)v22 + 3);
    if ( v23 != a4 )
      goto LABEL_11;
    goto LABEL_51;
  }
  if ( dword_439D94[v7] )
  {
    if ( (v5 & 0x2000000) != 0 )
    {
      *(_BYTE *)a4 = 115;
      a4 = (unsigned int *)((char *)a4 + 1);
    }
    strcpy((char *)a4, "NaN");
    a4 = (unsigned int *)((char *)a4 + 3);
    if ( v6 | v8 | v9 )
    {
      v41 = (v8 >> 8) & 0x3FF;
      v42 = (4 * (_WORD)v8) & 0x3FC | (v6 >> 30);
      v62 = 4 * (unsigned __int16)word_439E94[((_WORD)v5 << 6) & 0x3C0 | (v9 >> 26)];
      v66 = 4 * (unsigned __int16)word_439E94[(16 * (_WORD)v9) & 0x3F0 | (v8 >> 28)];
      v12 = 4 * (unsigned __int16)word_439E94[(v8 >> 18) & 0x3FF];
      v13 = 4 * (unsigned __int16)word_439E94[((unsigned int)v5 >> 4) & 0x3FF];
      v15 = 0;
      v65 = 4 * (unsigned __int16)word_439E94[v42];
      v14 = &byte_438DF0[v62];
      v17 = 4 * (unsigned __int16)word_439E94[HIWORD(v9) & 0x3FF];
      v67 = 4 * (unsigned __int16)word_439E94[v41];
      v64 = 4 * (unsigned __int16)word_439E94[(v6 >> 20) & 0x3FF];
      v74 = &byte_438DF0[v66];
      v72 = &byte_438DF0[v67];
      v63 = 4 * (unsigned __int16)word_439E94[(v6 >> 10) & 0x3FF];
      v73 = &byte_438DF0[v12];
      v18 = 4 * (unsigned __int16)word_439E94[(unsigned __int16)v9 >> 6];
      v19 = &byte_438DF0[v13];
      v71 = &byte_438DF0[v65];
      v16 = 4 * (unsigned __int16)word_439E94[v6 & 0x3FF];
      v20 = (unsigned int)&byte_438DF0[v17];
      v21 = &byte_438DF0[v18];
      v70 = &byte_438DF0[v64];
      v69 = &byte_438DF0[v63];
      v68 = &byte_438DF0[v16];
    }
    else
    {
      if ( (v5 & 0x3FFFF) == 0 )
        return a2;
      v17 = 0;
      v15 = 0;
      v13 = 4 * (unsigned __int16)word_439E94[((unsigned int)v5 >> 4) & 0x3FF];
      v20 = (unsigned int)byte_438DF0;
      v68 = byte_438DF0;
      v69 = byte_438DF0;
      v21 = byte_438DF0;
      v62 = 4 * *(unsigned __int16 *)((char *)word_439E94 + (((_WORD)v5 << 7) & 0x780));
      v16 = 0;
      v70 = byte_438DF0;
      v12 = 0;
      v71 = byte_438DF0;
      v18 = 0;
      v72 = byte_438DF0;
      v19 = &byte_438DF0[v13];
      v73 = byte_438DF0;
      v14 = &byte_438DF0[v62];
      v74 = byte_438DF0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      v67 = 0;
      v66 = 0;
    }
    goto LABEL_47;
  }
  strcpy((char *)a4, "Inf");
  strcpy((char *)a4 + 3, "inity");
  return a2;
}
