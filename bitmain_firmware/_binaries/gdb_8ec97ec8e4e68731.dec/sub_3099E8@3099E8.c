int __fastcall sub_3099E8(int a1, unsigned __int16 *a2, int a3, int *a4, unsigned int *a5, unsigned __int16 *a6)
{
  char *v6; // r3
  unsigned __int16 *v7; // r4
  int v8; // t1
  char *v9; // lr
  unsigned int v10; // r12
  int v11; // t1
  __int16 v12; // r8
  _WORD *v13; // r7
  unsigned int v14; // lr
  _WORD *v15; // r4
  int v16; // t1
  int v17; // r5
  char *v18; // r6
  int v19; // r4
  int v20; // t1
  _WORD *v22; // r3
  int v23; // lr
  _BOOL4 v24; // r3
  __int16 *v25; // r4
  unsigned int v26; // r5
  __int16 v27; // r3
  __int16 v28; // t1
  unsigned __int16 *v29; // r2
  unsigned __int16 *v30; // r4
  unsigned __int16 v31; // r6
  int v32; // t1
  _BYTE *v33; // r3
  int v34; // r7
  unsigned int v35; // r2
  unsigned int v36; // r3
  unsigned int v37; // r5
  unsigned int v38; // r4
  unsigned int v39; // r10
  unsigned int v40; // r9
  char v41; // r0
  unsigned __int16 *v42; // r12
  unsigned int v43; // r6
  unsigned int v44; // t1
  char v45; // r7
  _BYTE *v46; // r3
  bool v47; // cf
  int v48; // r2
  int v49; // r1
  char *v50; // r3
  int v51; // r0
  unsigned int i; // r3
  _BYTE *v53; // r1
  int v54; // r2
  int v55; // r6
  char *v56; // r2
  int v57; // r2
  unsigned __int16 *v58; // r5
  int v59; // t1
  int v60; // r2
  unsigned int v61; // r1
  char *v64; // r1
  char *v66; // r1
  char *v67; // [sp+8h] [bp-7Ch]
  unsigned int v68; // [sp+Ch] [bp-78h]
  unsigned int v69; // [sp+10h] [bp-74h]
  int v71; // [sp+18h] [bp-6Ch]
  unsigned int v72; // [sp+1Ch] [bp-68h]
  unsigned int v73; // [sp+20h] [bp-64h]
  unsigned __int16 *v74; // [sp+24h] [bp-60h]
  _BOOL4 v75; // [sp+28h] [bp-5Ch]
  _BYTE *v76; // [sp+2Ch] [bp-58h]
  char *v77; // [sp+30h] [bp-54h]
  _BOOL4 v78; // [sp+34h] [bp-50h]
  char *v79; // [sp+38h] [bp-4Ch]
  unsigned __int16 *v80; // [sp+3Ch] [bp-48h] BYREF
  unsigned __int16 v81[1]; // [sp+40h] [bp-44h] BYREF
  _WORD v82[14]; // [sp+42h] [bp-42h] BYREF
  char v83; // [sp+5Eh] [bp-26h] BYREF
  char v84; // [sp+60h] [bp-24h] BYREF
  __int16 v85; // [sp+62h] [bp-22h] BYREF
  _BYTE v86[6]; // [sp+7Eh] [bp-6h] BYREF

  v6 = (char *)&v80 + 2;
  do
  {
    *((_WORD *)v6 + 1) = 0;
    v6 += 2;
  }
  while ( &v83 != v6 );
  if ( a3 )
  {
    v7 = a2;
    do
    {
      v8 = *v7++;
      ++v81[v8];
    }
    while ( &a2[a3] != v7 );
  }
  v9 = &v84;
  v10 = 15;
  while ( 1 )
  {
    v11 = *((unsigned __int16 *)v9 - 1);
    v9 -= 2;
    if ( v11 )
      break;
    if ( !--v10 )
    {
      v22 = (_WORD *)*a4;
      v23 = *a4 + 8;
      v22[1] = 0;
      *v22 = 320;
      *a4 = v23;
      v22[2] = 320;
      v22[3] = 0;
      *a5 = 1;
      return 0;
    }
  }
  v12 = v82[0];
  if ( v10 == 1 || v82[0] )
  {
    v14 = 1;
    v13 = v82;
  }
  else
  {
    v13 = v82;
    v14 = 1;
    v15 = v82;
    do
    {
      if ( ++v14 == v10 )
        break;
      v16 = (unsigned __int16)v15[1];
      ++v15;
    }
    while ( !v16 );
  }
  v17 = v82[0];
  v18 = (char *)v82;
  v19 = 1;
  while ( 1 )
  {
    v19 = 2 * v19 - v17;
    if ( v19 < 0 )
      return -1;
    if ( v18 == v6 )
      break;
    v20 = *((unsigned __int16 *)v18 + 1);
    v18 += 2;
    v17 = v20;
  }
  if ( v19 )
  {
    v24 = v10 != 1;
    if ( !a1 )
      v24 = 1;
    if ( v24 )
      return -1;
  }
  v85 = 0;
  v25 = &v85;
  v26 = *a5;
  v27 = 0;
  while ( 1 )
  {
    v27 += v12;
    v25[1] = v27;
    if ( v86 == (_BYTE *)++v25 )
      break;
    v28 = v13[1];
    ++v13;
    v12 = v28;
  }
  if ( a3 )
  {
    v29 = &a2[a3];
    v30 = a2;
    v31 = 0;
    do
    {
      v32 = *v30++;
      v33 = &v86[2 * v32 + 2];
      if ( v32 )
      {
        v34 = *((unsigned __int16 *)v33 - 16);
        LOBYTE(v12) = v34 + 1;
        *((_WORD *)v33 - 16) = v34 + 1;
        a6[v34] = v31;
      }
      ++v31;
    }
    while ( v29 != v30 );
  }
  if ( v26 >= v10 )
    v26 = v10;
  if ( v26 < v14 )
    v35 = v14;
  else
    v35 = v26;
  v68 = v35;
  v36 = 1 << v35;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( v36 > 0x354 )
        return 1;
      v78 = 1;
      v69 = 257;
      v75 = 0;
      v76 = &unk_42FDF0;
      v77 = (char *)&unk_42FE30;
      goto LABEL_43;
    }
    v75 = a1 == 2;
    if ( v36 > 0x250 && a1 == 2 )
      return 1;
    v69 = 0;
    v76 = &unk_42FD70;
    v77 = (char *)&unk_42FDB0;
  }
  else
  {
    v75 = 0;
    v76 = a6;
    v77 = (char *)a6;
    v69 = 20;
  }
  v78 = a1 == 1;
LABEL_43:
  v37 = 0;
  v72 = v36;
  v73 = v36 - 1;
  v38 = v10;
  v39 = 0;
  LOBYTE(v40) = v68;
  v41 = v14;
  v79 = (char *)*a4;
  v67 = (char *)*a4;
  v42 = a6;
  v74 = a2;
  v71 = -1;
  v80 = v81;
  while ( 1 )
  {
    v44 = *v42++;
    v43 = v44;
    v45 = v41;
    v46 = (_BYTE *)(v44 + 1);
    if ( v44 + 1 >= v69 )
    {
      v47 = v43 >= v69;
      if ( v43 < v69 )
      {
        v43 = 0;
        LOBYTE(v12) = 96;
      }
      else
      {
        v46 = v76;
        v43 = 2 * (v43 - v69);
      }
      if ( v47 )
      {
        LOBYTE(v12) = v46[v43];
        LOWORD(v43) = *(_WORD *)&v77[v43];
      }
    }
    else
    {
      LOBYTE(v12) = 0;
    }
    v48 = 1 << v40;
    v49 = 1 << v41;
    v50 = &v67[4 * ((1 << v40) + (v37 >> v39) - (1 << v41))];
    v51 = -4 << v41;
    do
    {
      v48 -= v49;
      *v50 = v12;
      v50[1] = v45;
      *((_WORD *)v50 + 1) = v43;
      v50 += v51;
    }
    while ( v48 );
    for ( i = 1 << (v14 - 1); (v37 & i) != 0; i >>= 1 )
      ;
    if ( i )
      v37 &= i - 1;
    v53 = &v86[2 * v14 + 2];
    if ( i )
      i += v37;
    v54 = (unsigned __int16)(*((_WORD *)v53 - 32) - 1);
    *((_WORD *)v53 - 32) = v54;
    if ( !v54 )
      break;
LABEL_62:
    if ( v68 >= v14 || (v55 = v73 & i, (v73 & i) == v71) )
    {
      v41 = v14 - v39;
    }
    else
    {
      if ( !v39 )
        v39 = v68;
      v56 = &v67[4 << v40];
      v40 = v14 - v39;
      v41 = v14 - v39;
      v67 = v56;
      if ( v14 < v38 )
      {
        v57 = (1 << (v14 - v39)) - v81[v14];
        if ( v57 > 0 )
        {
          v58 = &v80[v14];
          do
          {
            ++v40;
            v60 = 2 * v57;
            if ( v39 + v40 >= v38 )
              break;
            v59 = v58[1];
            ++v58;
            v57 = v60 - v59;
          }
          while ( v57 > 0 );
        }
      }
      v61 = v72 + (1 << v40);
      v72 = v61;
      if ( v61 > 0x354 && v78 )
        return 1;
      if ( v61 > 0x250 && v75 )
        return 1;
      v71 = v73 & i;
      v79[4 * v55] = v40;
      v64 = &v79[4 * v55];
      *((_WORD *)v64 + 1) = (v67 - v79) >> 2;
      v64[1] = v68;
    }
    v37 = i;
  }
  if ( v14 != v38 )
  {
    v14 = v74[*v42];
    goto LABEL_62;
  }
  if ( i )
  {
    v67[4 * i] = 64;
    v66 = &v67[4 * i];
    v66[1] = v45;
    *((_WORD *)v66 + 1) = 0;
  }
  *a4 = (int)&v79[4 * v72];
  *a5 = v68;
  return 0;
}
