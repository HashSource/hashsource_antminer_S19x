int __fastcall sub_4FDE4(int *a1, unsigned __int8 *a2, char *dest, int a4, unsigned int a5)
{
  unsigned int v6; // r1
  char *v9; // r0
  int v10; // r0
  int result; // r0
  unsigned int v12; // r11
  char *v13; // r8
  unsigned __int8 *v14; // r9
  char *v15; // r5
  unsigned int v16; // r3
  unsigned __int8 *v17; // r1
  size_t i; // r2
  bool v19; // cc
  unsigned int v20; // r4
  unsigned __int8 *v21; // r9
  unsigned __int8 *v22; // r9
  int v23; // lr
  unsigned int v24; // r0
  int v25; // r4
  unsigned int v26; // r3
  int v27; // r2
  unsigned int v28; // r1
  unsigned int v29; // t1
  bool v30; // cc
  unsigned int v31; // r2
  size_t v32; // r3
  char *v33; // r4
  int v34; // r2
  int v35; // r0
  int v36; // t1
  int v37; // lr
  int v38; // r2
  unsigned int v39; // t1
  int v40; // r4
  char *v41; // r1
  int v42; // r2
  char *v43; // r4
  int v44; // r2
  char *v45; // r0
  int *v46; // r3
  int v47; // r1
  int v48; // r2
  int v49; // r3
  int v50; // r3
  int v51; // r4
  int v52; // t1
  const void *v53; // r1
  size_t v54; // r4
  char *v55; // r4
  char *v56; // r5
  char *v57; // r2
  char v58; // t1
  int v59; // lr
  int v60; // r3
  char *v61; // r0
  int *v62; // r2
  char *v63; // r3
  int v64; // lr
  int v65; // r0
  int v66; // r3
  char *v67; // r3
  char v68; // t1
  int v69; // r4
  _DWORD *v70; // r4
  int v71; // r1
  int v72; // r0
  bool v73; // zf
  char *v74; // [sp+Ch] [bp-20h]
  unsigned __int8 *v75; // [sp+10h] [bp-1Ch]
  char *v76; // [sp+18h] [bp-14h]
  unsigned int v77; // [sp+1Ch] [bp-10h]
  char *v78; // [sp+20h] [bp-Ch]

  v6 = a1[3];
  if ( !v6 )
  {
    result = sub_4EDBC(a2, dest, a4, a5);
    if ( result > 0 )
    {
LABEL_4:
      a1[3] = result;
      a1[1] = (int)&dest[result];
      return result;
    }
    return result;
  }
  v9 = (char *)a1[1];
  if ( dest != v9 )
  {
    v10 = (int)&v9[-v6];
    a1[2] = v6;
    *a1 = v10;
    result = sub_4F70C(a2, dest, a4, a5, v10, v6);
    if ( result <= 0 )
      return result;
    goto LABEL_4;
  }
  if ( v6 > 0xFFFE )
  {
    result = sub_4F3C0(a2, dest, a4, a5);
    goto LABEL_54;
  }
  v12 = a1[2];
  if ( !v12 )
  {
    result = sub_48AF4(a2, dest, a4, a5, v6);
LABEL_54:
    if ( result > 0 )
    {
      v49 = a1[1] + result;
      a1[3] += result;
      a1[1] = v49;
    }
    return result;
  }
  if ( (a2 == 0) | (a5 >> 31) )
    return -1;
  v75 = &a2[a4];
  v74 = &dest[a5];
  if ( *a1 )
    v77 = *a1 + v12;
  else
    v77 = 0;
  v76 = v74 - 32;
  if ( a5 )
  {
    if ( a4 )
    {
      v13 = &dest[-v6];
      v14 = a2;
      v15 = dest;
      v78 = v74 - 7;
LABEL_14:
      v16 = *v14;
      v17 = v14 + 1;
      for ( i = v16 >> 4; v16 >> 4 != 15; i = v16 >> 4 )
      {
        v19 = v76 > v15;
        if ( v76 >= v15 )
          v19 = v75 - 16 > v17;
        if ( v19 )
        {
          v22 = &v17[i];
          v23 = *((_DWORD *)v17 + 1);
          v24 = (unsigned int)&v15[i];
          v25 = *((_DWORD *)v17 + 2);
          v26 = v16 & 0xF;
          v27 = *((_DWORD *)v17 + 3);
          *(_DWORD *)v15 = *(_DWORD *)v17;
          *((_DWORD *)v15 + 1) = v23;
          *((_DWORD *)v15 + 3) = v27;
          *((_DWORD *)v15 + 2) = v25;
          v29 = *(unsigned __int16 *)v22;
          v14 = v22 + 2;
          v28 = v29;
          v30 = v26 > 0xF;
          if ( v26 != 15 )
            v30 = v28 > 7;
          v31 = v24 - v28;
          if ( v30 )
          {
            if ( (unsigned int)v13 <= v31 )
            {
              v59 = *(_DWORD *)v31;
              v15 = (char *)(v26 + 4 + v24);
              *(_DWORD *)(v24 + 4) = *(_DWORD *)(v31 + 4);
              *(_DWORD *)v24 = v59;
              v60 = *(_DWORD *)(v31 + 12);
              *(_DWORD *)(v24 + 8) = *(_DWORD *)(v31 + 8);
              *(_DWORD *)(v24 + 12) = v60;
              *(_WORD *)(v24 + 16) = *(_WORD *)(v31 + 16);
              goto LABEL_14;
            }
            v32 = v26 + 4;
            if ( v12 < 0x10000 && (unsigned int)v13 > v31 + v12 )
              goto LABEL_64;
            goto LABEL_26;
          }
        }
        else
        {
          v20 = (unsigned int)&v15[i];
          v21 = &v17[i];
LABEL_36:
          v24 = v20;
          if ( v20 > (unsigned int)(v74 - 12) || v21 > v75 - 8 )
          {
            v73 = v74 == (char *)v20;
            if ( (unsigned int)v74 >= v20 )
              v73 = v75 == v21;
            if ( v73 )
            {
              memmove(v15, v17, i);
              result = v20 - (_DWORD)dest;
              goto LABEL_54;
            }
LABEL_72:
            v14 = v17;
            goto LABEL_64;
          }
          do
          {
            v37 = *(_DWORD *)v17;
            v15 += 8;
            v38 = *((_DWORD *)v17 + 1);
            v17 += 8;
            *((_DWORD *)v15 - 2) = v37;
            *((_DWORD *)v15 - 1) = v38;
          }
          while ( v20 > (unsigned int)v15 );
          v39 = *(unsigned __int16 *)v21;
          v14 = v21 + 2;
          v28 = v39;
          v26 = v16 & 0xF;
          v31 = v20 - v39;
        }
        if ( v26 == 15 )
        {
          v50 = 0;
          while ( 1 )
          {
            v52 = *v14++;
            v51 = v52;
            v50 += v52;
            if ( v75 - 4 < v14 || v50 < 0 )
              goto LABEL_64;
            if ( v51 != 255 )
            {
              v26 = v50 + 15;
              if ( __CFADD__(v24, v26) )
                goto LABEL_64;
              break;
            }
          }
        }
        v32 = v26 + 4;
        if ( v12 < 0x10000 && (unsigned int)v13 > v31 + v12 )
          goto LABEL_64;
        if ( (unsigned int)v13 <= v31 )
        {
          v15 = (char *)(v24 + v32);
          if ( v28 <= 7 )
          {
            *(_BYTE *)v24 = 0;
            *(_BYTE *)(v24 + 1) = 0;
            *(_BYTE *)(v24 + 2) = 0;
            *(_BYTE *)(v24 + 3) = 0;
            v69 = dword_19FFE8[v28];
            *(_BYTE *)v24 = *(_BYTE *)v31;
            v70 = (_DWORD *)(v69 + v31);
            v71 = dword_19FFE8[v28 + 8];
            *(_BYTE *)(v24 + 1) = *(_BYTE *)(v31 + 1);
            v41 = (char *)v70 - v71;
            *(_BYTE *)(v24 + 2) = *(_BYTE *)(v31 + 2);
            *(_BYTE *)(v24 + 3) = *(_BYTE *)(v31 + 3);
            *(_DWORD *)(v24 + 4) = *v70;
          }
          else
          {
            v40 = *(_DWORD *)v31;
            v41 = (char *)(v31 + 8);
            v42 = *(_DWORD *)(v31 + 4);
            *(_DWORD *)v24 = v40;
            *(_DWORD *)(v24 + 4) = v42;
          }
          v43 = (char *)(v24 + 8);
          if ( v15 > v74 - 12 )
          {
            if ( v15 > v74 - 5 )
              goto LABEL_64;
            if ( v43 < v78 )
            {
              v62 = (int *)v41;
              v63 = (char *)(v24 + 8);
              do
              {
                v64 = *v62;
                v63 += 8;
                v65 = v62[1];
                v62 += 2;
                *((_DWORD *)v63 - 2) = v64;
                *((_DWORD *)v63 - 1) = v65;
              }
              while ( v78 > v63 );
              v66 = v78 - v43;
              v43 = v74 - 7;
              v41 += v66;
            }
            if ( v15 > v43 )
            {
              v67 = v43 - 1;
              do
              {
                v68 = *v41++;
                *++v67 = v68;
              }
              while ( v15 - 1 != v67 );
            }
          }
          else
          {
            v44 = *((_DWORD *)v41 + 1);
            *(_DWORD *)(v24 + 8) = *(_DWORD *)v41;
            *(_DWORD *)(v24 + 12) = v44;
            if ( v32 > 0x10 )
            {
              v45 = (char *)(v24 + 16);
              v46 = (int *)(v41 + 8);
              do
              {
                v47 = *v46;
                v45 += 8;
                v48 = v46[1];
                v46 += 2;
                *((_DWORD *)v45 - 2) = v47;
                *((_DWORD *)v45 - 1) = v48;
              }
              while ( v15 > v45 );
            }
          }
          goto LABEL_14;
        }
LABEL_26:
        v15 = (char *)(v24 + v32);
        if ( v24 + v32 > (unsigned int)(v74 - 5) )
          goto LABEL_64;
        v33 = &v13[-v31];
        if ( v32 > (unsigned int)&v13[-v31] )
        {
          v15 = &v33[v24];
          v53 = (const void *)(v77 - (_DWORD)v33);
          v54 = v32 - (_DWORD)v33;
          memcpy((void *)v24, v53, (size_t)&v13[-v31]);
          if ( v54 <= v15 - v13 )
          {
            v61 = v15;
            v15 += v54;
            memcpy(v61, v13, v54);
          }
          else
          {
            v55 = &v15[v54];
            if ( v15 < v55 )
            {
              v56 = v15 - 1;
              v57 = v13;
              do
              {
                v58 = *v57++;
                *++v56 = v58;
              }
              while ( v55 - 1 != v56 );
              v15 = v55;
            }
          }
          goto LABEL_14;
        }
        memmove((void *)v24, (const void *)(v77 - (_DWORD)v33), v32);
        v16 = *v14;
        v17 = v14 + 1;
      }
      if ( v17 >= v75 - 15 )
        goto LABEL_72;
      v14 = v75 - 14;
      v34 = 0;
      while ( 1 )
      {
        v36 = *v17++;
        v35 = v36;
        v34 += v36;
        if ( v17 == v14 )
          break;
        if ( v34 < 0 )
          goto LABEL_72;
        if ( v35 != 255 )
        {
          i = v34 + 15;
          v20 = (unsigned int)&v15[i];
          if ( v15 > &v15[i] )
            goto LABEL_72;
          v21 = &v17[i];
          if ( v17 > &v17[i] )
            goto LABEL_72;
          goto LABEL_36;
        }
      }
LABEL_64:
      result = a2 - v14 - 1;
      goto LABEL_54;
    }
    return -1;
  }
  if ( a4 != 1 )
    return -1;
  v72 = *a2;
  if ( *a2 )
    v72 = 1;
  return -v72;
}
