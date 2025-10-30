unsigned int __fastcall sub_32426C(unsigned __int8 *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r6
  unsigned __int8 *v4; // r12
  unsigned int v5; // lr
  int v6; // r5
  int v7; // r8
  int v8; // r3
  int v9; // r4
  int v10; // r9
  unsigned int v11; // r6
  unsigned int v12; // r2
  int v13; // r3
  unsigned int v14; // r6
  unsigned int v15; // r2
  int v16; // r3
  unsigned int v17; // r6
  unsigned int v18; // r2
  unsigned int v19; // r2
  unsigned __int8 *v20; // r12
  int v21; // r7
  int v22; // r3
  unsigned int v23; // r2
  int v24; // r6
  int v25; // r3
  unsigned int v26; // r6
  unsigned int v27; // r2
  int v28; // r3
  unsigned int v29; // r6
  unsigned int v30; // r2
  int v31; // r3
  unsigned int v32; // r6
  unsigned int v33; // r1
  int v34; // r3
  unsigned int v35; // r2
  unsigned int v36; // r0
  unsigned int v37; // r3
  int v38; // r0

  LOWORD(v3) = 31161;
  if ( ((unsigned __int8)a1 & 3) != 0 )
  {
    if ( a2 > 0xB )
    {
      HIWORD(v3) = -25033;
      v4 = a1 + 12;
      v5 = a2;
      v6 = v3;
      do
      {
        v7 = *(v4 - 6);
        v5 -= 12;
        v8 = *(v4 - 2);
        v9 = *(v4 - 10);
        a1 = v4;
        v10 = *(v4 - 7);
        v4 += 12;
        v11 = (v7 << 16) + (v10 << 8) + *(v4 - 20) + (*(v4 - 17) << 24) + v3;
        v12 = (v8 << 16) + (*(v4 - 15) << 8) + *(v4 - 16) + (*(v4 - 13) << 24) + a3;
        v13 = ((v9 << 16) + (*(v4 - 23) << 8) + *(v4 - 24) + (*(v4 - 21) << 24) - v11 - v12 + v6) ^ (v12 >> 13);
        v14 = (v11 - v12 - v13) ^ (v13 << 8);
        v15 = (v12 - v13 - v14) ^ (v14 >> 13);
        v16 = (v13 - v14 - v15) ^ (v15 >> 12);
        v17 = (v14 - v15 - v16) ^ (v16 << 16);
        v18 = (v15 - v16 - v17) ^ (v17 >> 5);
        v6 = (v16 - v17 - v18) ^ (v18 >> 3);
        v3 = (v17 - v18 - v6) ^ (v6 << 10);
        a3 = (v18 - v6 - v3) ^ (v3 >> 15);
      }
      while ( v5 > 0xB );
      goto LABEL_5;
    }
LABEL_22:
    HIWORD(v3) = -25033;
    v5 = a2;
    v6 = v3;
    goto LABEL_5;
  }
  if ( a2 <= 0xB )
    goto LABEL_22;
  HIWORD(v3) = -25033;
  v20 = a1 + 12;
  v5 = a2;
  v6 = v3;
  do
  {
    v5 -= 12;
    v21 = *((_DWORD *)v20 - 2);
    v22 = *((_DWORD *)v20 - 3);
    a1 = v20;
    v23 = a3 + *((_DWORD *)v20 - 1);
    v20 += 12;
    v24 = v3 + v21;
    v25 = (v22 - (v24 + v23) + v6) ^ (v23 >> 13);
    v26 = (v24 - v23 - v25) ^ (v25 << 8);
    v27 = (v23 - v25 - v26) ^ (v26 >> 13);
    v28 = (v25 - v26 - v27) ^ (v27 >> 12);
    v29 = (v26 - v27 - v28) ^ (v28 << 16);
    v30 = (v27 - v28 - v29) ^ (v29 >> 5);
    v6 = (v28 - v29 - v30) ^ (v30 >> 3);
    v3 = (v29 - v30 - v6) ^ (v6 << 10);
    a3 = (v30 - v6 - v3) ^ (v3 >> 15);
  }
  while ( v5 > 0xB );
LABEL_5:
  v19 = a3 + a2;
  switch ( v5 )
  {
    case 1u:
      goto LABEL_20;
    case 2u:
      goto LABEL_19;
    case 3u:
      goto LABEL_18;
    case 4u:
      goto LABEL_17;
    case 5u:
      goto LABEL_16;
    case 6u:
      goto LABEL_15;
    case 7u:
      goto LABEL_14;
    case 8u:
      goto LABEL_13;
    case 9u:
      goto LABEL_12;
    case 0xAu:
      goto LABEL_11;
    case 0xBu:
      v19 += a1[10] << 24;
LABEL_11:
      v19 += a1[9] << 16;
LABEL_12:
      v19 += a1[8] << 8;
LABEL_13:
      v3 += a1[7] << 24;
LABEL_14:
      v3 += a1[6] << 16;
LABEL_15:
      v3 += a1[5] << 8;
LABEL_16:
      v3 += a1[4];
LABEL_17:
      v6 += a1[3] << 24;
LABEL_18:
      v6 += a1[2] << 16;
LABEL_19:
      v6 += a1[1] << 8;
LABEL_20:
      v6 += *a1;
      break;
    default:
      break;
  }
  v31 = (v6 - v3 - v19) ^ (v19 >> 13);
  v32 = (v3 - v19 - v31) ^ (v31 << 8);
  v33 = (v19 - v31 - v32) ^ (v32 >> 13);
  v34 = (v31 - v32 - v33) ^ (v33 >> 12);
  v35 = (v32 - v33 - v34) ^ (v34 << 16);
  v36 = v34 - v35;
  v37 = (v33 - v34 - v35) ^ (v35 >> 5);
  v38 = (v36 - v37) ^ (v37 >> 3);
  return (v37 - v38 - ((v35 - v37 - v38) ^ (v38 << 10))) ^ (((v35 - v37 - v38) ^ (v38 << 10)) >> 15);
}
