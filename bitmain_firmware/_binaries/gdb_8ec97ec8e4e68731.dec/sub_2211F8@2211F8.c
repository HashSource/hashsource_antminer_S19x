int __fastcall sub_2211F8(int result, char *a2, int a3)
{
  int v3; // r3
  char *v4; // r6
  char *v5; // r10
  char *v6; // r5
  char *v7; // r8
  signed int v8; // r5
  char *v9; // r4
  int v10; // r0
  char *v11; // r1
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r8
  char *v17; // r4
  char *v18; // r9
  char *v19; // r11
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r8
  int v25; // r5
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // [sp+Ch] [bp-28h]
  int v41; // [sp+14h] [bp-20h]
  _DWORD *v42; // [sp+18h] [bp-1Ch]
  int v43; // [sp+1Ch] [bp-18h]
  int v44; // [sp+20h] [bp-14h]
  int v45; // [sp+20h] [bp-14h]
  int v46; // [sp+20h] [bp-14h]
  int v47; // [sp+20h] [bp-14h]
  int v48; // [sp+24h] [bp-10h]
  int v49; // [sp+24h] [bp-10h]
  int v50; // [sp+24h] [bp-10h]
  int v51; // [sp+24h] [bp-10h]
  int v52; // [sp+28h] [bp-Ch]
  int v53; // [sp+28h] [bp-Ch]
  int v54; // [sp+28h] [bp-Ch]
  int v55; // [sp+28h] [bp-Ch]
  int v56; // [sp+2Ch] [bp-8h]
  int v57; // [sp+2Ch] [bp-8h]
  int v58; // [sp+2Ch] [bp-8h]
  int v59; // [sp+2Ch] [bp-8h]

  v3 = (int)&a2[-result];
  v41 = a3;
  if ( (int)&a2[-result] > 256 )
  {
    v4 = (char *)result;
    if ( !a3 )
    {
      v18 = a2;
      goto LABEL_17;
    }
    v5 = a2;
    v6 = a2;
    v42 = (_DWORD *)(result + 16);
    v43 = result + 32;
    while ( 1 )
    {
      v7 = v5 - 16;
      v8 = ((v6 - v4) >> 4) + ((unsigned int)(v6 - v4) >> 31);
      --v41;
      v9 = &v4[16 * (v8 >> 1)];
      v10 = sub_21EFDC(v42, v9);
      v11 = v5 - 16;
      if ( v10 < 0 )
        break;
      if ( sub_21EFDC(v42, v11) < 0 )
      {
        v44 = *(_DWORD *)v4;
        v48 = *((_DWORD *)v4 + 1);
        v52 = *((_DWORD *)v4 + 2);
        v56 = *((_DWORD *)v4 + 3);
LABEL_24:
        v31 = v42[1];
        v32 = v42[2];
        v33 = v42[3];
        *(_DWORD *)v4 = *v42;
        *((_DWORD *)v4 + 1) = v31;
        *((_DWORD *)v4 + 2) = v32;
        *((_DWORD *)v4 + 3) = v33;
        *v42 = v44;
        v42[1] = v48;
        v42[2] = v52;
        v42[3] = v56;
        goto LABEL_8;
      }
      v12 = sub_21EFDC(&v4[16 * (v8 >> 1)], (_DWORD *)v5 - 4);
      v44 = *(_DWORD *)v4;
      v48 = *((_DWORD *)v4 + 1);
      v52 = *((_DWORD *)v4 + 2);
      v56 = *((_DWORD *)v4 + 3);
      if ( v12 < 0 )
        goto LABEL_25;
      v13 = *((_DWORD *)v9 + 1);
      v14 = *((_DWORD *)v9 + 2);
      v15 = *((_DWORD *)v9 + 3);
      *(_DWORD *)v4 = *(_DWORD *)v9;
      *((_DWORD *)v4 + 1) = v13;
      *((_DWORD *)v4 + 2) = v14;
      *((_DWORD *)v4 + 3) = v15;
      *(_DWORD *)v9 = v44;
      *((_DWORD *)v9 + 1) = v48;
      *((_DWORD *)v9 + 2) = v52;
      *((_DWORD *)v9 + 3) = v56;
LABEL_8:
      v16 = v43;
      v17 = v5;
      while ( 1 )
      {
        v6 = (char *)(v16 - 16);
        v18 = (char *)(v16 - 16);
        if ( sub_21EFDC((_DWORD *)(v16 - 16), v4) < 0 )
          goto LABEL_14;
        v19 = v17 - 16;
        do
        {
          v20 = sub_21EFDC(v4, v19);
          v17 = v19;
          v19 -= 16;
        }
        while ( v20 < 0 );
        if ( v6 >= v17 )
          break;
        v45 = *(_DWORD *)v6;
        v49 = *(_DWORD *)(v16 - 12);
        v53 = *(_DWORD *)(v16 - 8);
        v57 = *(_DWORD *)(v16 - 4);
        v21 = *((_DWORD *)v17 + 1);
        v22 = *((_DWORD *)v17 + 2);
        v23 = *((_DWORD *)v17 + 3);
        *(_DWORD *)v6 = *(_DWORD *)v17;
        *(_DWORD *)(v16 - 12) = v21;
        *(_DWORD *)(v16 - 8) = v22;
        *(_DWORD *)(v16 - 4) = v23;
        *(_DWORD *)v17 = v45;
        *((_DWORD *)v17 + 1) = v49;
        *((_DWORD *)v17 + 2) = v53;
        *((_DWORD *)v17 + 3) = v57;
LABEL_14:
        v16 += 16;
      }
      result = sub_2211F8(v16 - 16, v5, v41);
      v3 = v6 - v4;
      if ( v6 - v4 <= 256 )
        return result;
      v5 = (char *)(v16 - 16);
      if ( !v41 )
      {
LABEL_17:
        v24 = v3 >> 4;
        v25 = ((v3 >> 4) - 2) >> 1;
        do
        {
          LOBYTE(v40) = 0;
          sub_2229B4(
            v4,
            v25,
            v24,
            *(_DWORD *)&v4[16 * v25],
            *(_DWORD *)&v4[16 * v25 + 4],
            *(_DWORD *)&v4[16 * v25 + 8],
            *(_DWORD *)&v4[16 * v25 + 12],
            v40);
        }
        while ( v25-- != 0 );
        do
        {
          v18 -= 16;
          v46 = *(_DWORD *)v18;
          v50 = *((_DWORD *)v18 + 1);
          v54 = *((_DWORD *)v18 + 2);
          v58 = *((_DWORD *)v18 + 3);
          v27 = *((_DWORD *)v4 + 1);
          v28 = *((_DWORD *)v4 + 2);
          v29 = *((_DWORD *)v4 + 3);
          *(_DWORD *)v18 = *(_DWORD *)v4;
          *((_DWORD *)v18 + 1) = v27;
          *((_DWORD *)v18 + 2) = v28;
          *((_DWORD *)v18 + 3) = v29;
          LOBYTE(v40) = 0;
          result = sub_2229B4(v4, 0, (v18 - v4) >> 4, v46, v50, v54, v58, v40);
        }
        while ( v18 - v4 > 16 );
        return result;
      }
    }
    if ( sub_21EFDC(&v4[16 * (v8 >> 1)], v11) < 0 )
    {
      v47 = *(_DWORD *)v4;
      v51 = *((_DWORD *)v4 + 1);
      v55 = *((_DWORD *)v4 + 2);
      v59 = *((_DWORD *)v4 + 3);
      v37 = *((_DWORD *)v9 + 1);
      v38 = *((_DWORD *)v9 + 2);
      v39 = *((_DWORD *)v9 + 3);
      *(_DWORD *)v4 = *(_DWORD *)v9;
      *((_DWORD *)v4 + 1) = v37;
      *((_DWORD *)v4 + 2) = v38;
      *((_DWORD *)v4 + 3) = v39;
      *(_DWORD *)v9 = v47;
      *((_DWORD *)v9 + 1) = v51;
      *((_DWORD *)v9 + 2) = v55;
      *((_DWORD *)v9 + 3) = v59;
      goto LABEL_8;
    }
    v30 = sub_21EFDC(v42, (_DWORD *)v5 - 4);
    v44 = *(_DWORD *)v4;
    v48 = *((_DWORD *)v4 + 1);
    v52 = *((_DWORD *)v4 + 2);
    v56 = *((_DWORD *)v4 + 3);
    if ( v30 < 0 )
    {
LABEL_25:
      v34 = *((_DWORD *)v5 - 3);
      v35 = *((_DWORD *)v5 - 2);
      v36 = *((_DWORD *)v5 - 1);
      *(_DWORD *)v4 = *(_DWORD *)v7;
      *((_DWORD *)v4 + 1) = v34;
      *((_DWORD *)v4 + 2) = v35;
      *((_DWORD *)v4 + 3) = v36;
      *(_DWORD *)v7 = v44;
      *((_DWORD *)v5 - 3) = v48;
      *((_DWORD *)v5 - 2) = v52;
      *((_DWORD *)v5 - 1) = v56;
      goto LABEL_8;
    }
    goto LABEL_24;
  }
  return result;
}
