unsigned int __fastcall sub_30BD8C(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // r12
  unsigned int v4; // r3
  unsigned int v5; // lr
  unsigned __int8 *v6; // r4
  int v7; // r6
  int v8; // r3
  int v9; // r5
  int v10; // r0
  int v11; // r3
  int v12; // r0
  int v13; // r3
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r3
  int v18; // r0
  int v19; // r3
  int v20; // r0
  int v21; // r3
  int v22; // r0
  int v23; // r3
  int v24; // r0
  int v25; // r3
  int v26; // r0
  int v27; // r3
  int v28; // r0
  int v29; // r5
  int v30; // r3
  int v31; // r0
  int v32; // r6
  int v33; // r0
  unsigned int v34; // r6
  unsigned __int8 *v35; // lr
  int v36; // r0
  int v37; // r3
  int v38; // r0
  int v39; // r8
  int v40; // r0
  int v41; // r3
  int v42; // r9
  int v43; // r8
  int v44; // r7
  int v45; // r0
  int v46; // r3
  int v47; // r9
  int v48; // r8
  int v49; // r0
  int v50; // r7
  int v51; // r3
  int v52; // r9
  int v53; // r0
  int v54; // r7
  int v55; // r3
  int v56; // r0
  bool v57; // zf
  int v58; // r2
  unsigned __int8 *v59; // r2
  int v60; // t1
  unsigned int v62; // r3
  unsigned int v63; // r12
  unsigned __int8 *v64; // r2
  int v65; // t1

  v3 = HIWORD(a1);
  v4 = (unsigned __int16)a1;
  if ( a3 == 1 )
  {
    v62 = *a2 + (unsigned __int16)a1;
    if ( v62 > 0xFFF0 )
      v62 -= 65521;
    v63 = v62 + v3;
    if ( v63 > 0xFFF0 )
      v63 -= 65521;
    return v62 | (v63 << 16);
  }
  else if ( a2 )
  {
    if ( a3 > 0xF )
    {
      if ( a3 <= 0x15AF )
        goto LABEL_10;
      do
      {
        v5 = a3 - 5504;
        v6 = a2 + 16;
        a3 -= 5552;
        do
        {
          v7 = *(v6 - 16);
          v6 += 16;
          v8 = v7 + v4;
          v9 = *(v6 - 31) + v8;
          v10 = *(v6 - 30) + v9;
          v11 = v8 + v9 + v10;
          v12 = *(v6 - 29) + v10;
          v13 = v11 + v12;
          v14 = *(v6 - 28) + v12;
          v15 = v13 + v14;
          v16 = *(v6 - 27) + v14;
          v17 = v15 + v16;
          v18 = *(v6 - 26) + v16;
          v19 = v17 + v18;
          v20 = *(v6 - 25) + v18;
          v21 = v19 + v20;
          v22 = *(v6 - 24) + v20;
          v23 = v21 + v22;
          v24 = *(v6 - 23) + v22;
          v25 = v23 + v24;
          v26 = *(v6 - 22) + v24;
          v27 = v25 + v26;
          v28 = *(v6 - 21) + v26;
          v29 = *(v6 - 18);
          v30 = v27 + v28;
          v31 = *(v6 - 20) + v28;
          v32 = *(v6 - 19) + v31;
          v33 = v30 + v31 + v32;
          v4 = *(v6 - 17) + v29 + v32;
          v3 += v33 + v29 + v32 + v4;
        }
        while ( a2 + 5568 != v6 );
        a2 += 5552;
        v3 %= 0xFFF1u;
        v4 %= 0xFFF1u;
      }
      while ( a3 > 0x15AF );
      if ( !a3 )
        return v4 | (v3 << 16);
      if ( a3 <= 0xF )
      {
        v58 = v5 - 49;
      }
      else
      {
LABEL_10:
        v34 = (a3 - 16) >> 4;
        v35 = a2 + 16;
        do
        {
          v36 = *(v35 - 16);
          v35 += 16;
          v37 = v36 + v4;
          v38 = *(v35 - 31) + v37;
          v39 = *(v35 - 30) + v38;
          v40 = v37 + v38 + v39;
          v41 = *(v35 - 29) + v39;
          v42 = *(v35 - 28) + v41;
          v43 = *(v35 - 27) + v42;
          v44 = *(v35 - 26) + v43;
          v45 = v40 + v41 + v42 + v43;
          v46 = *(v35 - 25) + v44;
          v47 = *(v35 - 24) + v46;
          v48 = *(v35 - 23) + v47;
          v49 = v45 + v44 + v46 + v47;
          v50 = *(v35 - 22) + v48;
          v51 = *(v35 - 21) + v50;
          v52 = *(v35 - 20) + v51;
          v53 = v49 + v48 + v50 + v51;
          v54 = *(v35 - 19) + v52;
          v55 = *(v35 - 18) + v54;
          v56 = v53 + v52 + v54 + v55;
          v4 = *(v35 - 17) + v55;
          v3 += v56 + v4;
        }
        while ( &a2[16 * v34 + 32] != v35 );
        v57 = (a3 & 0xF) == 0;
        a2 += 16 * v34 + 16;
        v58 = a3 - 17 - 16 * v34;
        if ( v57 )
          goto LABEL_15;
      }
      v59 = &a2[v58 + 1];
      do
      {
        v60 = *a2++;
        v4 += v60;
        v3 += v4;
      }
      while ( a2 != v59 );
LABEL_15:
      v4 %= 0xFFF1u;
      v3 %= 0xFFF1u;
      return v4 | (v3 << 16);
    }
    if ( a3 )
    {
      v64 = &a2[a3];
      do
      {
        v65 = *a2++;
        v4 += v65;
        v3 += v4;
      }
      while ( a2 != v64 );
    }
    if ( v4 > 0xFFF0 )
      v4 -= 65521;
    return v4 | ((v3 % 0xFFF1) << 16);
  }
  else
  {
    return 1;
  }
}
