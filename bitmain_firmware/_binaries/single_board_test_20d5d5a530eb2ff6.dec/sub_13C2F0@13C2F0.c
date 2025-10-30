int __fastcall sub_13C2F0(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  int result; // r0
  unsigned int v9; // r11
  unsigned int v10; // r5
  int v11; // r7
  int v12; // r8
  int v13; // r6
  unsigned int v14; // r9
  int v15; // r3
  unsigned int v16; // r11
  int v17; // r3
  unsigned int v18; // r10
  int v19; // r9
  int v20; // r7
  int v21; // r2
  int v22; // r6
  int v23; // r1
  int v24; // r6
  int v25; // r1
  int v26; // r6
  int v27; // r1
  int v28; // r6
  int v29; // r5
  int v30; // r5
  int v31; // r1
  int v32; // r5
  int v33; // r1
  int v34; // r5
  int v35; // r5
  int v36; // r4
  int v37; // r6
  int v38; // r5
  int v39; // r1
  int v40; // r1
  int v41; // r1
  int v42; // r1
  int v43; // r2
  int v44; // r1
  int v45; // r2
  int v46; // r1
  int v47; // r2
  int v48; // r1
  int v49; // r2
  int v50; // r2
  int v51; // r0
  int v52; // r2
  int v53; // r0
  int v54; // r2
  int v55; // r4
  int v56; // r2
  int v57; // r1
  int v58; // lr
  int v59; // lr
  int v60; // r3
  int v61; // r6
  int v62; // r1
  unsigned int v65; // [sp+8h] [bp-2Ch]
  unsigned int v66; // [sp+Ch] [bp-28h]
  int v67; // [sp+10h] [bp-24h]
  unsigned int v68; // [sp+18h] [bp-1Ch] BYREF
  int v69; // [sp+1Ch] [bp-18h]
  unsigned int dest; // [sp+20h] [bp-14h] BYREF
  int v71; // [sp+24h] [bp-10h]
  int v72; // [sp+28h] [bp-Ch]
  int v73; // [sp+2Ch] [bp-8h]
  _BYTE v74[4]; // [sp+30h] [bp-4h] BYREF

  result = a3;
  if ( (unsigned int)(a3 - 1) <= 0x3F )
  {
    v9 = a4;
    v10 = (a3 + 7) >> 3;
    v11 = *(_DWORD *)(a6 + 4);
    v12 = a3 >> 3;
    v13 = a3 & 7;
    v14 = *(_DWORD *)a6;
    if ( a7 )
    {
      while ( v9 >= v10 )
      {
        v68 = v14;
        v9 -= v10;
        v69 = v11;
        sub_13C7E0(&v68, a5, 1);
        v15 = a1 + v10;
        switch ( v10 )
        {
          case 2u:
            v48 = 0;
            v52 = 0;
            goto LABEL_48;
          case 3u:
            v48 = 0;
            v50 = 0;
            goto LABEL_47;
          case 4u:
            v48 = 0;
            goto LABEL_46;
          case 5u:
            v46 = 0;
            goto LABEL_45;
          case 6u:
            v44 = 0;
            goto LABEL_44;
          case 7u:
            v42 = 0;
            goto LABEL_43;
          case 8u:
            v62 = *(unsigned __int8 *)--v15;
            v42 = v62 << 24;
LABEL_43:
            v43 = *(unsigned __int8 *)--v15;
            v44 = v42 | (v43 << 16);
LABEL_44:
            v45 = *(unsigned __int8 *)--v15;
            v46 = v44 | (v45 << 8);
LABEL_45:
            v47 = *(unsigned __int8 *)--v15;
            v48 = v46 | v47;
LABEL_46:
            v49 = *(unsigned __int8 *)--v15;
            v50 = v49 << 24;
LABEL_47:
            v51 = *(unsigned __int8 *)--v15;
            v52 = v50 | (v51 << 16);
LABEL_48:
            v53 = *(unsigned __int8 *)--v15;
            v54 = v52 | (v53 << 8);
            break;
          default:
            v48 = 0;
            v54 = 0;
            break;
        }
        v55 = a2 + v10;
        a1 = v15 + v10 - 1;
        v56 = (*(unsigned __int8 *)(v15 - 1) | v54) ^ v68;
        v57 = v48 ^ v69;
        switch ( v10 )
        {
          case 2u:
            v60 = v55;
            goto LABEL_56;
          case 3u:
            goto LABEL_55;
          case 4u:
            v59 = v55;
            goto LABEL_54;
          case 5u:
            goto LABEL_53;
          case 6u:
            v58 = v55;
            goto LABEL_52;
          case 7u:
            goto LABEL_51;
          case 8u:
            *(_BYTE *)--v55 = HIBYTE(v57);
LABEL_51:
            v58 = v55 - 1;
            *(_BYTE *)(v55 - 1) = BYTE2(v57);
LABEL_52:
            v55 = v58 - 1;
            *(_BYTE *)(v58 - 1) = BYTE1(v57);
LABEL_53:
            v59 = v55 - 1;
            *(_BYTE *)(v55 - 1) = v57;
LABEL_54:
            v55 = v59 - 1;
            *(_BYTE *)(v59 - 1) = HIBYTE(v56);
LABEL_55:
            v60 = v55 - 1;
            *(_BYTE *)(v55 - 1) = BYTE2(v56);
LABEL_56:
            v55 = v60 - 1;
            *(_BYTE *)(v60 - 1) = BYTE1(v56);
            break;
          default:
            break;
        }
        *(_BYTE *)(v55 - 1) = v56;
        a2 = v55 + v10 - 1;
        if ( a3 == 32 )
        {
          v14 = v11;
          v11 = v56;
        }
        else if ( a3 == 64 )
        {
          v11 = v57;
          v14 = v56;
        }
        else
        {
          dest = v14;
          v71 = v11;
          v72 = v56;
          v73 = v57;
          if ( v13 )
          {
            LOBYTE(dest) = (*((unsigned __int8 *)&dest + v12) << v13)
                         | ((int)*((unsigned __int8 *)&dest + v12 + 1) >> (8 - v13));
            BYTE1(dest) = ((unsigned __int8)v74[v12 - 15] << v13) | ((int)(unsigned __int8)v74[v12 - 14] >> (8 - v13));
            BYTE2(dest) = ((unsigned __int8)v74[v12 - 14] << v13) | ((int)(unsigned __int8)v74[v12 - 13] >> (8 - v13));
            HIBYTE(dest) = ((unsigned __int8)v74[v12 - 13] << v13) | ((int)(unsigned __int8)v74[v12 - 12] >> (8 - v13));
            LOBYTE(v71) = ((unsigned __int8)v74[v12 - 12] << v13) | ((int)(unsigned __int8)v74[v12 - 11] >> (8 - v13));
            BYTE1(v71) = ((unsigned __int8)v74[v12 - 11] << v13) | ((int)(unsigned __int8)v74[v12 - 10] >> (8 - v13));
            BYTE2(v71) = ((unsigned __int8)v74[v12 - 10] << v13) | ((int)(unsigned __int8)v74[v12 - 9] >> (8 - v13));
            HIBYTE(v71) = (v74[v12 - 9] << v13) | ((int)(unsigned __int8)v74[v12 - 8] >> (8 - v13));
          }
          else
          {
            memmove(&dest, (char *)&dest + v12, 8u);
          }
          v14 = dest;
          v11 = v71;
        }
      }
    }
    else if ( a4 >= v10 )
    {
      v16 = a4 - v10;
      v17 = *(_DWORD *)a6;
      v18 = (a3 + 7) >> 3;
      v19 = *(_DWORD *)(a6 + 4);
      v20 = a3 & 7;
      v65 = v10 - 2;
      v66 = v10 - 1;
      while ( 1 )
      {
        v68 = v17;
        v67 = v17;
        v69 = v19;
        sub_13C7E0(&v68, a5, 1);
        v21 = a1 + v18;
        switch ( v65 )
        {
          case 0u:
            v28 = 0;
            v32 = 0;
            goto LABEL_17;
          case 1u:
            v28 = 0;
            v30 = 0;
            goto LABEL_16;
          case 2u:
            v28 = 0;
            goto LABEL_15;
          case 3u:
            v26 = 0;
            goto LABEL_14;
          case 4u:
            v24 = 0;
            goto LABEL_13;
          case 5u:
            v22 = 0;
            goto LABEL_12;
          case 6u:
            v61 = *(unsigned __int8 *)--v21;
            v22 = v61 << 24;
LABEL_12:
            v23 = *(unsigned __int8 *)--v21;
            v24 = v22 | (v23 << 16);
LABEL_13:
            v25 = *(unsigned __int8 *)--v21;
            v26 = v24 | (v25 << 8);
LABEL_14:
            v27 = *(unsigned __int8 *)--v21;
            v28 = v26 | v27;
LABEL_15:
            v29 = *(unsigned __int8 *)--v21;
            v30 = v29 << 24;
LABEL_16:
            v31 = *(unsigned __int8 *)--v21;
            v32 = v30 | (v31 << 16);
LABEL_17:
            v33 = *(unsigned __int8 *)--v21;
            v34 = v32 | (v33 << 8);
            break;
          default:
            v28 = 0;
            v34 = 0;
            break;
        }
        a1 = v21 + v66;
        v35 = v34 | *(unsigned __int8 *)(v21 - 1);
        if ( a3 == 32 )
        {
          v17 = v19;
          v19 = v35;
        }
        else if ( a3 == 64 )
        {
          v19 = v28;
          v17 = v35;
        }
        else
        {
          dest = v67;
          v71 = v19;
          v72 = v35;
          v73 = v28;
          if ( v20 )
          {
            LOBYTE(dest) = ((int)*((unsigned __int8 *)&dest + v12 + 1) >> (8 - v20))
                         | (*((unsigned __int8 *)&dest + v12) << v20);
            BYTE1(dest) = ((int)(unsigned __int8)v74[v12 - 14] >> (8 - v20)) | ((unsigned __int8)v74[v12 - 15] << v20);
            BYTE2(dest) = ((int)(unsigned __int8)v74[v12 - 13] >> (8 - v20)) | ((unsigned __int8)v74[v12 - 14] << v20);
            HIBYTE(dest) = ((int)(unsigned __int8)v74[v12 - 12] >> (8 - v20)) | ((unsigned __int8)v74[v12 - 13] << v20);
            LOBYTE(v71) = ((int)(unsigned __int8)v74[v12 - 11] >> (8 - v20)) | ((unsigned __int8)v74[v12 - 12] << v20);
            BYTE1(v71) = ((int)(unsigned __int8)v74[v12 - 10] >> (8 - v20)) | ((unsigned __int8)v74[v12 - 11] << v20);
            BYTE2(v71) = ((unsigned __int8)v74[v12 - 10] << v20) | ((int)(unsigned __int8)v74[v12 - 9] >> (8 - v20));
            HIBYTE(v71) = (v74[v12 - 9] << v20) | ((int)(unsigned __int8)v74[v12 - 8] >> (8 - v20));
          }
          else
          {
            memmove(&dest, (char *)&dest + v12, 8u);
          }
          v17 = dest;
          v19 = v71;
        }
        v36 = a2 + v18;
        v37 = v28 ^ v69;
        v38 = v35 ^ v68;
        switch ( v65 )
        {
          case 0u:
            v41 = v36;
            goto LABEL_30;
          case 1u:
            goto LABEL_29;
          case 2u:
            v40 = v36;
            goto LABEL_28;
          case 3u:
            goto LABEL_27;
          case 4u:
            v39 = v36;
            goto LABEL_26;
          case 5u:
            goto LABEL_25;
          case 6u:
            *(_BYTE *)--v36 = HIBYTE(v37);
LABEL_25:
            v39 = v36 - 1;
            *(_BYTE *)(v36 - 1) = BYTE2(v37);
LABEL_26:
            v36 = v39 - 1;
            *(_BYTE *)(v39 - 1) = BYTE1(v37);
LABEL_27:
            v40 = v36 - 1;
            *(_BYTE *)(v36 - 1) = v37;
LABEL_28:
            v36 = v40 - 1;
            *(_BYTE *)(v40 - 1) = HIBYTE(v38);
LABEL_29:
            v41 = v36 - 1;
            *(_BYTE *)(v36 - 1) = BYTE2(v38);
LABEL_30:
            v36 = v41 - 1;
            *(_BYTE *)(v41 - 1) = BYTE1(v38);
            break;
          default:
            break;
        }
        *(_BYTE *)(v36 - 1) = v38;
        a2 = v36 + v66;
        if ( v18 > v16 )
          break;
        v16 -= v18;
      }
      v11 = v19;
      v14 = v17;
    }
    result = HIBYTE(v14);
    *(_BYTE *)a6 = v14;
    *(_BYTE *)(a6 + 4) = v11;
    *(_BYTE *)(a6 + 1) = BYTE1(v14);
    *(_BYTE *)(a6 + 2) = BYTE2(v14);
    *(_BYTE *)(a6 + 3) = HIBYTE(v14);
    *(_BYTE *)(a6 + 5) = BYTE1(v11);
    *(_BYTE *)(a6 + 6) = BYTE2(v11);
    *(_BYTE *)(a6 + 7) = HIBYTE(v11);
  }
  return result;
}
