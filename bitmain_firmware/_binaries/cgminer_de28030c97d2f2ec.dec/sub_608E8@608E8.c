int __fastcall sub_608E8(unsigned __int8 *a1, unsigned int a2, int a3)
{
  int v3; // r3
  unsigned int v5; // [sp+8h] [bp-2Ch]
  unsigned __int8 *v6; // [sp+18h] [bp-1Ch]
  unsigned __int16 *v7; // [sp+1Ch] [bp-18h]
  _DWORD *v8; // [sp+20h] [bp-14h]
  int v9; // [sp+24h] [bp-10h]
  int v10; // [sp+24h] [bp-10h]
  int v11; // [sp+24h] [bp-10h]
  int v12; // [sp+24h] [bp-10h]
  int v13; // [sp+24h] [bp-10h]
  int v14; // [sp+24h] [bp-10h]
  int v15; // [sp+24h] [bp-10h]
  int v16; // [sp+24h] [bp-10h]
  int v17; // [sp+24h] [bp-10h]
  int v18; // [sp+24h] [bp-10h]
  int v19; // [sp+24h] [bp-10h]
  int v20; // [sp+24h] [bp-10h]
  int v21; // [sp+24h] [bp-10h]
  int v22; // [sp+24h] [bp-10h]
  int v23; // [sp+24h] [bp-10h]
  int v24; // [sp+28h] [bp-Ch]
  int v25; // [sp+28h] [bp-Ch]
  int v26; // [sp+28h] [bp-Ch]
  int v27; // [sp+28h] [bp-Ch]
  int v28; // [sp+28h] [bp-Ch]
  int v29; // [sp+28h] [bp-Ch]
  int v30; // [sp+28h] [bp-Ch]
  int v31; // [sp+28h] [bp-Ch]
  int v32; // [sp+28h] [bp-Ch]
  int v33; // [sp+28h] [bp-Ch]
  int v34; // [sp+28h] [bp-Ch]
  int v35; // [sp+28h] [bp-Ch]
  int v36; // [sp+28h] [bp-Ch]
  int v37; // [sp+28h] [bp-Ch]
  int v38; // [sp+28h] [bp-Ch]
  int v39; // [sp+2Ch] [bp-8h]
  int v40; // [sp+2Ch] [bp-8h]
  int v41; // [sp+2Ch] [bp-8h]
  int v42; // [sp+2Ch] [bp-8h]
  int v43; // [sp+2Ch] [bp-8h]
  int v44; // [sp+2Ch] [bp-8h]
  int v45; // [sp+2Ch] [bp-8h]
  int v46; // [sp+2Ch] [bp-8h]
  int v47; // [sp+2Ch] [bp-8h]
  int v48; // [sp+2Ch] [bp-8h]
  int v49; // [sp+2Ch] [bp-8h]
  int v50; // [sp+2Ch] [bp-8h]
  int v51; // [sp+2Ch] [bp-8h]

  v5 = a2;
  v9 = a2 + a3 - 559038737;
  v24 = v9;
  v39 = v9;
  if ( ((unsigned __int8)a1 & 3) != 0 )
  {
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      v6 = a1;
      while ( v5 > 0xC )
      {
        v33 = v24 + v6[4] + (v6[5] << 8) + (v6[6] << 16) + (v6[7] << 24);
        v18 = v9 + v6[8] + (v6[9] << 8) + (v6[10] << 16) + (v6[11] << 24);
        v47 = __ROR4__(v18, 28) ^ (v39 + *v6 + (v6[1] << 8) + (v6[2] << 16) + (v6[3] << 24) - v18);
        v19 = v18 + v33;
        v34 = __ROR4__(v47, 26) ^ (v33 - v47);
        v48 = v47 + v19;
        v20 = __ROR4__(v34, 24) ^ (v19 - v34);
        v35 = v34 + v48;
        v49 = __ROR4__(v20, 16) ^ (v48 - v20);
        v21 = v20 + v35;
        v36 = __ROR4__(v49, 13) ^ (v35 - v49);
        v39 = v49 + v21;
        v9 = __ROR4__(v36, 28) ^ (v21 - v36);
        v24 = v36 + v39;
        v5 -= 12;
        v6 += 12;
      }
      switch ( v5 )
      {
        case 0u:
          return v9;
        case 1u:
          goto LABEL_54;
        case 2u:
          goto LABEL_53;
        case 3u:
          goto LABEL_52;
        case 4u:
          goto LABEL_51;
        case 5u:
          goto LABEL_50;
        case 6u:
          goto LABEL_49;
        case 7u:
          goto LABEL_48;
        case 8u:
          goto LABEL_47;
        case 9u:
          goto LABEL_46;
        case 0xAu:
          goto LABEL_45;
        case 0xBu:
          goto LABEL_44;
        case 0xCu:
          v9 += v6[11] << 24;
LABEL_44:
          v9 += v6[10] << 16;
LABEL_45:
          v9 += v6[9] << 8;
LABEL_46:
          v9 += v6[8];
LABEL_47:
          v24 += v6[7] << 24;
LABEL_48:
          v24 += v6[6] << 16;
LABEL_49:
          v24 += v6[5] << 8;
LABEL_50:
          v24 += v6[4];
LABEL_51:
          v39 += v6[3] << 24;
LABEL_52:
          v39 += v6[2] << 16;
LABEL_53:
          v39 += v6[1] << 8;
LABEL_54:
          v43 = v39 + *v6;
          break;
      }
    }
    else
    {
      v7 = (unsigned __int16 *)a1;
      while ( v5 > 0xC )
      {
        v29 = v24 + v7[2] + (v7[3] << 16);
        v14 = v9 + v7[4] + (v7[5] << 16);
        v44 = __ROR4__(v14, 28) ^ (v39 + *v7 + (v7[1] << 16) - v14);
        v15 = v14 + v29;
        v30 = __ROR4__(v44, 26) ^ (v29 - v44);
        v45 = v44 + v15;
        v16 = __ROR4__(v30, 24) ^ (v15 - v30);
        v31 = v30 + v45;
        v46 = __ROR4__(v16, 16) ^ (v45 - v16);
        v17 = v16 + v31;
        v32 = __ROR4__(v46, 13) ^ (v31 - v46);
        v39 = v46 + v17;
        v9 = __ROR4__(v32, 28) ^ (v17 - v32);
        v24 = v32 + v39;
        v5 -= 12;
        v7 += 6;
      }
      switch ( v5 )
      {
        case 0u:
          return v9;
        case 1u:
          v43 = v39 + *(unsigned __int8 *)v7;
          break;
        case 2u:
          goto LABEL_35;
        case 3u:
          v39 += *((unsigned __int8 *)v7 + 2) << 16;
LABEL_35:
          v43 = v39 + *v7;
          break;
        case 4u:
          goto LABEL_33;
        case 5u:
          v24 += *((unsigned __int8 *)v7 + 4);
LABEL_33:
          v43 = v39 + *v7 + (v7[1] << 16);
          break;
        case 6u:
          goto LABEL_31;
        case 7u:
          v24 += *((unsigned __int8 *)v7 + 6) << 16;
LABEL_31:
          v24 += v7[2];
          v43 = v39 + *v7 + (v7[1] << 16);
          break;
        case 8u:
          goto LABEL_29;
        case 9u:
          v9 += *((unsigned __int8 *)v7 + 8);
LABEL_29:
          v24 += v7[2] + (v7[3] << 16);
          v43 = v39 + *v7 + (v7[1] << 16);
          break;
        case 0xAu:
          goto LABEL_27;
        case 0xBu:
          v9 += *((unsigned __int8 *)v7 + 10) << 16;
LABEL_27:
          v9 += v7[4];
          v24 += v7[2] + (v7[3] << 16);
          v43 = v39 + *v7 + (v7[1] << 16);
          break;
        case 0xCu:
          v9 += v7[4] + (v7[5] << 16);
          v24 += v7[2] + (v7[3] << 16);
          v43 = v39 + *v7 + (v7[1] << 16);
          break;
      }
    }
LABEL_56:
    v22 = (v24 ^ v9) - __ROR4__(v24, 18);
    v50 = (v22 ^ v43) - __ROR4__(v22, 21);
    v37 = (v50 ^ v24) - __ROR4__(v50, 7);
    v23 = (v37 ^ v22) - __ROR4__(v37, 16);
    v51 = (v23 ^ v50) - __ROR4__(v23, 28);
    v38 = (v51 ^ v37) - __ROR4__(v51, 18);
    return (v38 ^ v23) - __ROR4__(v38, 8);
  }
  else
  {
    v8 = a1;
    while ( v5 > 0xC )
    {
      v25 = v24 + v8[1];
      v10 = v9 + v8[2];
      v40 = __ROR4__(v10, 28) ^ (v39 + *v8 - v10);
      v11 = v10 + v25;
      v26 = __ROR4__(v40, 26) ^ (v25 - v40);
      v41 = v40 + v11;
      v12 = __ROR4__(v26, 24) ^ (v11 - v26);
      v27 = v26 + v41;
      v42 = __ROR4__(v12, 16) ^ (v41 - v12);
      v13 = v12 + v27;
      v28 = __ROR4__(v42, 13) ^ (v27 - v42);
      v39 = v42 + v13;
      v9 = __ROR4__(v28, 28) ^ (v13 - v28);
      v24 = v28 + v39;
      v5 -= 12;
      v8 += 3;
    }
    switch ( v5 )
    {
      case 0u:
        v3 = v9;
        break;
      case 1u:
        v43 = v39 + (unsigned __int8)*v8;
        goto LABEL_56;
      case 2u:
        v43 = v39 + (unsigned __int16)*v8;
        goto LABEL_56;
      case 3u:
        v43 = v39 + (*v8 & 0xFFFFFF);
        goto LABEL_56;
      case 4u:
        v43 = v39 + *v8;
        goto LABEL_56;
      case 5u:
        v24 += (unsigned __int8)v8[1];
        v43 = v39 + *v8;
        goto LABEL_56;
      case 6u:
        v24 += (unsigned __int16)v8[1];
        v43 = v39 + *v8;
        goto LABEL_56;
      case 7u:
        v24 += v8[1] & 0xFFFFFF;
        v43 = v39 + *v8;
        goto LABEL_56;
      case 8u:
        v24 += v8[1];
        v43 = v39 + *v8;
        goto LABEL_56;
      case 9u:
        v9 += (unsigned __int8)v8[2];
        v24 += v8[1];
        v43 = v39 + *v8;
        goto LABEL_56;
      case 0xAu:
        v9 += (unsigned __int16)v8[2];
        v24 += v8[1];
        v43 = v39 + *v8;
        goto LABEL_56;
      case 0xBu:
        v9 += v8[2] & 0xFFFFFF;
        v24 += v8[1];
        v43 = v39 + *v8;
        goto LABEL_56;
      case 0xCu:
        v9 += v8[2];
        v24 += v8[1];
        v43 = v39 + *v8;
        goto LABEL_56;
    }
  }
  return v3;
}
