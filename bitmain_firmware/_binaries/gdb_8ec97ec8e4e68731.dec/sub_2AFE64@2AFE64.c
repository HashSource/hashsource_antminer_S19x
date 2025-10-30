bool __fastcall sub_2AFE64(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  char *v5; // r4
  unsigned int v6; // r5
  char v7; // r6
  char v8; // lr
  _BYTE *v9; // r1
  char v10; // r10
  char v11; // r6
  char v12; // r5
  char v13; // lr
  char *v14; // r7
  _BYTE *v15; // r2
  unsigned int v16; // r4
  unsigned int v17; // t1
  char v18; // r5
  char v19; // r5
  unsigned __int8 v20; // lr
  char v21; // r6
  char v22; // r12
  char v24; // r1
  _BYTE v25[2]; // [sp+4h] [bp-204h] BYREF
  _BYTE v26[2]; // [sp+6h] [bp-202h] BYREF
  _BYTE v27[2]; // [sp+8h] [bp-200h] BYREF
  __int16 v28; // [sp+Ah] [bp-1FEh] BYREF

  v25[1] = a2 + 48;
  v25[0] = 83;
  switch ( a2 )
  {
    case 0:
    case 1:
    case 9:
      v9 = v27;
      v8 = 0;
      goto LABEL_4;
    case 2:
    case 8:
      v5 = v27;
      LOBYTE(v6) = 0;
      goto LABEL_3;
    case 3:
    case 7:
      v6 = HIBYTE(a3);
      v24 = a0123456789abcd_3[HIBYTE(a3) & 0xF];
      v5 = (char *)&v28;
      v27[0] = a0123456789abcd_3[a3 >> 28];
      v27[1] = v24;
LABEL_3:
      v7 = a0123456789abcd_3[(a3 >> 20) & 0xF];
      v8 = BYTE2(a3) + v6;
      v5[1] = a0123456789abcd_3[BYTE2(a3) & 0xF];
      *v5 = v7;
      v9 = v5 + 2;
LABEL_4:
      v10 = a0123456789abcd_3[BYTE1(a3) & 0xF];
      v11 = a0123456789abcd_3[a3 & 0xF];
      v12 = a0123456789abcd_3[(unsigned __int8)a3 >> 4];
      *v9 = a0123456789abcd_3[(unsigned __int16)a3 >> 12];
      v13 = BYTE1(a3) + a3 + v8;
      v14 = v9 + 4;
      v9[1] = v10;
      v9[3] = v11;
      v9[2] = v12;
      break;
    default:
      v14 = v27;
      v13 = 0;
      break;
  }
  if ( a4 < a5 )
  {
    v15 = v14 + 2;
    v16 = a4 - 1;
    do
    {
      v17 = *(unsigned __int8 *)++v16;
      v15 += 2;
      v18 = a0123456789abcd_3[v17 & 0xF];
      v13 += v17;
      *(v15 - 4) = a0123456789abcd_3[v17 >> 4];
      *(v15 - 3) = v18;
    }
    while ( a5 - 1 != v16 );
    v14 += 2 * (a5 - a4);
  }
  v19 = a0123456789abcd_3[((v14 - v26) / 2) & 0xF];
  v26[0] = a0123456789abcd_3[((v14 - v26 + ((unsigned int)(v14 - v26) >> 31)) >> 5) & 0xF];
  v20 = ~((v14 - v26) / 2 + v13);
  v21 = a0123456789abcd_3[v20 & 0xF];
  v22 = a0123456789abcd_3[v20 >> 4];
  v26[1] = v19;
  v14[1] = v21;
  *v14 = v22;
  *((_WORD *)v14 + 1) = 2573;
  return sub_2A8884((int)v25, v14 + 4 - v25, a1) == v14 + 4 - v25;
}
