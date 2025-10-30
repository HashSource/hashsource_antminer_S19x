unsigned __int8 *__fastcall sub_30C6A0(unsigned int *a1, int a2)
{
  unsigned __int8 *v3; // r4
  unsigned __int8 *v4; // r7
  unsigned __int8 *v5; // r5
  unsigned __int8 *v6; // r1
  unsigned __int8 *v7; // r3
  unsigned __int8 *v8; // r12
  unsigned int v9; // r8
  int v10; // r7
  char *v11; // r6
  unsigned __int8 *v12; // r9
  unsigned int v13; // r3
  unsigned int v14; // r2
  int v15; // r0
  int v16; // r10
  unsigned __int8 *v17; // r1
  unsigned __int8 *v18; // r8
  int v19; // r4
  char v20; // r1
  int v21; // r5
  int v22; // r4
  int i; // r1
  unsigned __int8 *v24; // r4
  int v25; // r1
  int v26; // r5
  unsigned int v27; // r4
  bool v28; // cf
  unsigned __int8 *v29; // r4
  unsigned int v30; // r1
  int v31; // r0
  int v32; // r2
  bool v33; // cc
  int v34; // r3
  unsigned __int8 *result; // r0
  bool v36; // cf
  unsigned int v37; // r5
  unsigned int v38; // r1
  int v39; // r1
  int v40; // r1
  int j; // r4
  char *v42; // r6
  char v43; // r4
  int v44; // r5
  int v45; // r6
  unsigned int v46; // r4
  int v47; // r7
  unsigned int v48; // r5
  unsigned __int8 *v49; // r4
  unsigned __int8 *v50; // r6
  unsigned __int8 *v51; // r5
  unsigned __int8 v52; // r7
  int v53; // r5
  char v54; // r4
  int v55; // r6
  int v56; // r5
  int v57; // r7
  char v58; // r5
  bool v59; // cc
  unsigned __int8 *v60; // r6
  unsigned __int8 *v61; // r9
  unsigned __int8 v62; // t1
  unsigned __int8 *v63; // r7
  unsigned __int8 *k; // r4
  unsigned __int8 *v65; // r6
  unsigned __int8 v66; // t1
  unsigned __int8 *v67; // r6
  unsigned __int8 v68; // t1
  int v69; // r4
  char *v70; // r7
  char v71; // t1
  unsigned __int8 *v72; // [sp+0h] [bp-44h]
  unsigned __int8 *v73; // [sp+4h] [bp-40h]
  int v74; // [sp+8h] [bp-3Ch]
  int v75; // [sp+Ch] [bp-38h]
  unsigned int v76; // [sp+10h] [bp-34h]
  unsigned __int8 *v77; // [sp+14h] [bp-30h]
  char *v78; // [sp+18h] [bp-2Ch]
  unsigned int v79; // [sp+1Ch] [bp-28h]
  int v80; // [sp+20h] [bp-24h]
  _DWORD *v81; // [sp+24h] [bp-20h]
  unsigned __int8 *v82; // [sp+28h] [bp-1Ch]
  int v83; // [sp+2Ch] [bp-18h]
  unsigned __int8 *v84; // [sp+30h] [bp-14h]
  int v85; // [sp+34h] [bp-10h]
  unsigned int v86; // [sp+38h] [bp-Ch]
  unsigned __int8 *v87; // [sp+38h] [bp-Ch]
  unsigned __int8 *v88; // [sp+3Ch] [bp-8h]

  v3 = (unsigned __int8 *)a1[7];
  v4 = (unsigned __int8 *)a1[4];
  v5 = (unsigned __int8 *)a1[1];
  v6 = &v4[-a2];
  v81 = v3 + 4096;
  v7 = v4 - 257;
  v8 = (unsigned __int8 *)a1[3];
  v9 = *((_DWORD *)v3 + 13);
  v10 = *((_DWORD *)v3 + 11);
  v75 = ~(-1 << *((_DWORD *)v3 + 23));
  v74 = ~(-1 << *((_DWORD *)v3 + 22));
  v11 = (char *)*((_DWORD *)v3 + 14);
  v79 = *((_DWORD *)v3 + 12);
  v12 = (unsigned __int8 *)*a1;
  v72 = &v7[(_DWORD)v8];
  v77 = &v6[(_DWORD)v8];
  v13 = *((_DWORD *)v3 + 15);
  v14 = *((_DWORD *)v3 + 16);
  v15 = *((_DWORD *)v3 + 20);
  v16 = *((_DWORD *)v3 + 21);
  v83 = v10 + v9;
  v17 = (unsigned __int8 *)&v11[v9];
  v76 = v9;
  v18 = v3;
  v82 = v17;
  v84 = (unsigned __int8 *)&v11[v10];
  v80 = v10;
  v78 = v11;
  v73 = &v5[(_DWORD)v12 - 5];
LABEL_2:
  if ( v14 <= 0xE )
  {
    v19 = *v12;
    v20 = v14 + 8;
    v21 = v12[1];
    v12 += 2;
    v22 = v19 << v14;
    v14 += 16;
    v13 += v22 + (v21 << v20);
  }
  for ( i = v74 & v13; ; i = (v13 & ~(-1 << v25)) + v27 )
  {
    v24 = (unsigned __int8 *)(v15 + 4 * i);
    v25 = *v24;
    v26 = v24[1];
    v27 = *((unsigned __int16 *)v24 + 1);
    v14 -= v26;
    v13 >>= v26;
    if ( !v25 )
    {
      *v8++ = v27;
      goto LABEL_10;
    }
    if ( (v25 & 0x10) != 0 )
    {
      v37 = v25 & 0xF;
      v38 = v27;
      if ( v37 )
      {
        if ( v37 > v14 )
        {
          v39 = *v12++;
          v13 += v39 << v14;
          v14 += 8;
        }
        v14 -= v37;
        v40 = v13 & ~(-1 << v37);
        v13 >>= v37;
        v38 = v27 + v40;
      }
      if ( v14 <= 0xE )
      {
        v53 = *v12;
        v54 = v14 + 8;
        v55 = v12[1];
        v12 += 2;
        v56 = v53 << v14;
        v14 += 16;
        v13 += v56 + (v55 << v54);
      }
      for ( j = v75 & v13; ; j = (v13 & ~(-1 << v43)) + v45 )
      {
        v42 = (char *)(v16 + 4 * j);
        v43 = *v42;
        v44 = (unsigned __int8)v42[1];
        v45 = *((unsigned __int16 *)v42 + 1);
        v14 -= v44;
        v13 >>= v44;
        if ( (v43 & 0x10) != 0 )
          break;
        if ( (v43 & 0x40) != 0 )
        {
          v29 = v18;
          a1[6] = (unsigned int)"invalid distance code";
          *((_DWORD *)v18 + 1) = 16209;
          goto LABEL_15;
        }
      }
      v46 = v43 & 0xF;
      if ( v46 > v14 )
      {
        v57 = *v12;
        v58 = v14 + 8;
        v59 = v46 > v14 + 8;
        if ( v46 <= v14 + 8 )
          ++v12;
        v13 += v57 << v14;
        if ( v46 <= v14 + 8 )
          v14 += 8;
        else
          v57 = v12[1];
        if ( v59 )
        {
          v14 += 16;
          v12 += 2;
          v13 += v57 << v58;
        }
      }
      v47 = v13 & ~(-1 << v46);
      v14 -= v46;
      v13 >>= v46;
      v85 = v47 + v45;
      if ( v47 + v45 <= (unsigned int)(v8 - v77) )
      {
        v63 = v8;
        for ( k = &v8[-v85]; ; k += 3 )
        {
          v38 -= 3;
          v8 += 3;
          *(v8 - 3) = *k;
          *(v8 - 2) = k[1];
          *(v8 - 1) = k[2];
          if ( v38 <= 2 )
            break;
          v63 = v8;
        }
        if ( v38 )
        {
          v63[3] = k[3];
          if ( v38 == 2 )
          {
            v8 = v63 + 5;
            v63[4] = k[4];
          }
          else
          {
            v8 = v63 + 4;
          }
        }
LABEL_10:
        v28 = v12 >= v73;
        if ( v12 < v73 )
          v28 = v8 >= v72;
        if ( v28 )
        {
          v29 = v18;
          goto LABEL_15;
        }
        goto LABEL_2;
      }
      v48 = v47 + v45 - (v8 - v77);
      if ( v79 < v48 && v81[753] )
      {
        v29 = v18;
        a1[6] = (unsigned int)"invalid distance too far back";
        *((_DWORD *)v18 + 1) = 16209;
        goto LABEL_15;
      }
      if ( v76 )
      {
        if ( v76 < v48 )
        {
          v86 = v48 - v76;
          v49 = (unsigned __int8 *)&v78[v83 - v48];
          if ( v38 > v48 - v76 )
          {
            v60 = v8 - 1;
            v88 = v12;
            v38 -= v86;
            v61 = &v49[v86];
            do
            {
              v62 = *v49++;
              *++v60 = v62;
            }
            while ( v49 != v61 );
            v12 = v88;
            if ( v76 < v38 )
            {
              v69 = (int)&v8[v86 - 1];
              v70 = v78;
              v38 -= v76;
              do
              {
                v71 = *v70++;
                *(_BYTE *)++v69 = v71;
              }
              while ( v70 != (char *)v82 );
              v8 += v48;
              v49 = &v8[-v85];
            }
            else
            {
              v8 += v86;
              v49 = (unsigned __int8 *)v78;
            }
          }
          goto LABEL_44;
        }
        v49 = (unsigned __int8 *)&v78[v76 - v48];
        if ( v38 <= v48 )
        {
LABEL_44:
          if ( v38 > 2 )
          {
            v50 = v49 + 3;
            v51 = v8 + 3;
            do
            {
              v52 = *(v50 - 3);
              v38 -= 3;
              v49 = v50;
              v8 = v51;
              v50 += 3;
              *(v51 - 3) = v52;
              v51 += 3;
              *(v51 - 5) = *(v50 - 5);
              *(v51 - 4) = *(v50 - 4);
            }
            while ( v38 > 2 );
          }
          if ( v38 )
          {
            *v8 = *v49;
            if ( v38 == 2 )
            {
              v8[1] = v49[1];
              v8 += 2;
            }
            else
            {
              ++v8;
            }
          }
          goto LABEL_10;
        }
        v87 = v12;
        v38 -= v48;
        v65 = v8 - 1;
        do
        {
          v66 = *v49++;
          *++v65 = v66;
        }
        while ( v49 != v82 );
      }
      else
      {
        v49 = (unsigned __int8 *)&v78[v80 - v48];
        if ( v38 <= v48 )
          goto LABEL_44;
        v87 = v12;
        v38 -= v48;
        v67 = v8 - 1;
        do
        {
          v68 = *v49++;
          *++v67 = v68;
        }
        while ( v49 != v84 );
      }
      v8 += v48;
      v12 = v87;
      v49 = &v8[-v85];
      goto LABEL_44;
    }
    if ( (v25 & 0x40) != 0 )
      break;
  }
  v29 = v18;
  if ( (v25 & 0x20) != 0 )
  {
    *((_DWORD *)v18 + 1) = 16191;
  }
  else
  {
    a1[6] = (unsigned int)"invalid literal/length code";
    *((_DWORD *)v18 + 1) = 16209;
  }
LABEL_15:
  v30 = (unsigned int)&v12[-(v14 >> 3)];
  v31 = -1;
  a1[3] = (unsigned int)v8;
  v32 = v14 & 7;
  *a1 = v30;
  v33 = (unsigned int)v73 > v30;
  v34 = v13 & ~(-1 << v32);
  if ( (unsigned int)v73 > v30 )
    v30 = (unsigned int)&v73[-v30 + 5];
  else
    v31 = (int)v73;
  if ( !v33 )
    v30 -= v31;
  result = v72;
  if ( !v33 )
    v30 = 5 - v30;
  a1[1] = v30;
  v36 = v8 >= v72;
  if ( v8 < v72 )
    v8 = (unsigned __int8 *)(v72 - v8 + 256);
  else
    v30 = (unsigned int)v72;
  if ( v36 )
    v8 = (unsigned __int8 *)(256 - (_DWORD)&v8[-v30]);
  a1[4] = (unsigned int)(v8 + 1);
  *((_DWORD *)v29 + 15) = v34;
  *((_DWORD *)v29 + 16) = v32;
  return result;
}
