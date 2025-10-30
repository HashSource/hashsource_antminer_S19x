int *__fastcall sub_F5A20(int *result, unsigned int a2, _BYTE *a3, _BYTE *a4)
{
  bool v4; // zf
  unsigned int v5; // r6
  _DWORD *v6; // r4
  int v7; // r5
  int v8; // r1
  int v9; // r7
  _BYTE *v10; // r6
  _BYTE *v11; // r8
  _BYTE *v12; // r7
  int v13; // r10
  int v14; // r3
  int v15; // r12
  int v16; // r1
  int v17; // lr
  int v18; // r5
  int v19; // r3
  int v20; // r5
  int v21; // r3
  int v22; // r9
  int v23; // r1
  int v24; // r2
  int v25; // r12
  int v26; // r3
  int v27; // r1
  int v28; // r2
  int v29; // lr
  int v30; // r3
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r2
  int v44; // r6
  int v45; // r7
  int v46; // r12
  int v47; // r7
  int v48; // r12
  int v49; // r7
  int v50; // r12
  int v51; // r7
  int v52; // r12
  int v53; // r7
  int v54; // r12
  int v55; // r7
  int v56; // r12
  int v57; // r7
  int v58; // lr
  char v59; // [sp+0h] [bp-14h]
  int v60; // [sp+4h] [bp-10h]
  _BYTE *v61; // [sp+8h] [bp-Ch]
  _BYTE *v62; // [sp+Ch] [bp-8h]

  v5 = a2 >> 3;
  v4 = a2 >> 3 == 0;
  v6 = result + 2;
  v59 = a2;
  v7 = *result;
  v8 = result[1];
  if ( !v4 )
  {
    v9 = 8 * (v5 + 1);
    v10 = a3 + 8;
    v61 = a3;
    v60 = v9;
    v11 = &a3[v9];
    v12 = a4 + 8;
    v62 = a4;
    do
    {
      v10 += 8;
      v13 = (unsigned __int8)(v7 + 1);
      v12 += 8;
      v14 = v6[v13];
      v15 = (unsigned __int8)(v7 + 2);
      v16 = (unsigned __int8)(v8 + v14);
      v17 = (unsigned __int8)(v7 + 3);
      v18 = v6[v16];
      v6[v13] = v18;
      v6[v16] = v14;
      v19 = v6[(unsigned __int8)(v18 + v14)];
      v20 = (unsigned __int8)(v17 + 1);
      *(v12 - 16) = v19 ^ *(v10 - 16);
      v21 = v6[v15];
      v22 = (unsigned __int8)(v17 + 2);
      v23 = (unsigned __int8)(v16 + v21);
      v24 = v6[v23];
      v6[v15] = v24;
      v6[v23] = v21;
      v25 = (unsigned __int8)(v17 + 3);
      *(v12 - 15) = v6[(unsigned __int8)(v21 + v24)] ^ *(v10 - 15);
      v26 = v6[v17];
      v27 = (unsigned __int8)(v23 + v26);
      v28 = v6[v27];
      v6[v17] = v28;
      v6[v27] = v26;
      v29 = (unsigned __int8)(v17 + 4);
      *(v12 - 14) = v6[(unsigned __int8)(v26 + v28)] ^ *(v10 - 14);
      v30 = v6[v20];
      v31 = (unsigned __int8)(v27 + v30);
      v32 = v6[v31];
      v6[v20] = v32;
      v6[v31] = v30;
      v7 = (unsigned __int8)(v29 + 1);
      *(v12 - 13) = LOBYTE(v6[(unsigned __int8)(v30 + v32)]) ^ *(v10 - 13);
      v33 = v6[v22];
      v34 = (unsigned __int8)(v31 + v33);
      v35 = v6[v34];
      v6[v22] = v35;
      v6[v34] = v33;
      *(v12 - 12) = v6[(unsigned __int8)(v33 + v35)] ^ *(v10 - 12);
      v36 = v6[v25];
      v37 = (unsigned __int8)(v34 + v36);
      v38 = v6[v37];
      v6[v25] = v38;
      v6[v37] = v36;
      *(v12 - 11) = v6[(unsigned __int8)(v36 + v38)] ^ *(v10 - 11);
      v39 = v6[v29];
      v40 = (unsigned __int8)(v37 + v39);
      v41 = v6[v40];
      v6[v29] = v41;
      v6[v40] = v39;
      *(v12 - 10) = v6[(unsigned __int8)(v39 + v41)] ^ *(v10 - 10);
      v42 = v6[v7];
      v8 = (unsigned __int8)(v40 + v42);
      v43 = v6[v8];
      v6[v7] = v43;
      v6[v8] = v42;
      *(v12 - 9) = LOBYTE(v6[(unsigned __int8)(v42 + v43)]) ^ *(v10 - 9);
    }
    while ( v11 != v10 );
    a3 = &v61[v60 - 8];
    a4 = &v62[v60 - 8];
  }
  v44 = v59 & 7;
  if ( (v59 & 7) != 0 )
  {
    v7 = (unsigned __int8)(v7 + 1);
    v45 = v6[v7];
    v8 = (unsigned __int8)(v8 + v45);
    v46 = v6[v8];
    v6[v7] = v46;
    v6[v8] = v45;
    *a4 = LOBYTE(v6[(unsigned __int8)(v45 + v46)]) ^ *a3;
    if ( v44 != 1 )
    {
      v7 = (unsigned __int8)(v7 + 1);
      v47 = v6[v7];
      v8 = (unsigned __int8)(v8 + v47);
      v48 = v6[v8];
      v6[v7] = v48;
      v6[v8] = v47;
      a4[1] = LOBYTE(v6[(unsigned __int8)(v47 + v48)]) ^ a3[1];
      if ( v44 != 2 )
      {
        v7 = (unsigned __int8)(v7 + 1);
        v49 = v6[v7];
        v8 = (unsigned __int8)(v8 + v49);
        v50 = v6[v8];
        v6[v7] = v50;
        v6[v8] = v49;
        a4[2] = LOBYTE(v6[(unsigned __int8)(v49 + v50)]) ^ a3[2];
        if ( v44 != 3 )
        {
          v7 = (unsigned __int8)(v7 + 1);
          v51 = v6[v7];
          v8 = (unsigned __int8)(v8 + v51);
          v52 = v6[v8];
          v6[v7] = v52;
          v6[v8] = v51;
          a4[3] = LOBYTE(v6[(unsigned __int8)(v51 + v52)]) ^ a3[3];
          if ( v44 != 4 )
          {
            v7 = (unsigned __int8)(v7 + 1);
            v53 = v6[v7];
            v8 = (unsigned __int8)(v8 + v53);
            v54 = v6[v8];
            v6[v7] = v54;
            v6[v8] = v53;
            a4[4] = LOBYTE(v6[(unsigned __int8)(v53 + v54)]) ^ a3[4];
            if ( v44 != 5 )
            {
              v7 = (unsigned __int8)(v7 + 1);
              v55 = v6[v7];
              v8 = (unsigned __int8)(v8 + v55);
              v56 = v6[v8];
              v6[v7] = v56;
              v6[v8] = v55;
              a4[5] = LOBYTE(v6[(unsigned __int8)(v55 + v56)]) ^ a3[5];
              if ( v44 != 6 )
              {
                v7 = (unsigned __int8)(v7 + 1);
                v57 = v6[v7];
                v8 = (unsigned __int8)(v8 + v57);
                v58 = v6[v8];
                v6[v7] = v58;
                v6[v8] = v57;
                a4[6] = a3[6] ^ LOBYTE(v6[(unsigned __int8)(v57 + v58)]);
              }
            }
          }
        }
      }
    }
  }
  *result = v7;
  result[1] = v8;
  return result;
}
