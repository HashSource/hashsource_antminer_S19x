int __fastcall sub_17B628(int a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v4; // r3
  int v5; // r2
  unsigned int v7; // r1
  unsigned int v8; // r3
  unsigned int v9; // r2
  int v10; // r4
  unsigned int v11; // r6
  unsigned int v12; // r0
  unsigned int v13; // r5
  unsigned int v14; // r3
  unsigned int v15; // r7
  unsigned int v16; // r2
  _DWORD *v17; // r9
  unsigned int v18; // r4
  int v19; // r5
  unsigned int v20; // r7
  unsigned int v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r3
  int v24; // r8
  unsigned int v25; // r5
  unsigned int v26; // r3
  unsigned int v27; // r5
  unsigned int v28; // t1
  unsigned int v29; // r2
  unsigned int *v30; // r7
  unsigned __int64 v31; // r0
  unsigned __int64 v32; // r2
  unsigned __int64 v33; // r4
  unsigned __int64 v34; // r0
  unsigned __int64 v35; // r4
  unsigned __int64 v36; // r6
  unsigned __int64 v37; // r0
  unsigned __int64 v38; // r10
  int v39; // r3
  _DWORD *v40; // r3
  __int64 v41; // r8
  int v42; // r6
  int result; // r0
  int v44; // r1
  unsigned __int64 v45; // r4
  int v46; // r3
  unsigned int v47; // r1
  unsigned __int64 v48; // kr10_8
  unsigned __int64 v49; // kr18_8
  unsigned int v50; // r1
  unsigned int v51; // r3
  unsigned int v52; // r6
  unsigned int v53; // r5
  unsigned __int64 v54; // r4
  unsigned __int64 v55; // [sp+0h] [bp-ACh]
  unsigned __int64 v56; // [sp+0h] [bp-ACh]
  unsigned int *v57; // [sp+Ch] [bp-A0h]
  unsigned __int64 v58; // [sp+10h] [bp-9Ch]
  unsigned __int64 v59; // [sp+10h] [bp-9Ch]
  unsigned __int64 v60; // [sp+18h] [bp-94h]
  unsigned __int64 v61; // [sp+20h] [bp-8Ch]
  unsigned int *v62; // [sp+28h] [bp-84h]
  int v63; // [sp+2Ch] [bp-80h]
  int v64; // [sp+30h] [bp-7Ch]
  unsigned int v65; // [sp+34h] [bp-78h]
  int v66; // [sp+38h] [bp-74h]
  unsigned int *v67; // [sp+3Ch] [bp-70h]
  int v68; // [sp+40h] [bp-6Ch]
  int v69; // [sp+44h] [bp-68h]
  unsigned int v70; // [sp+48h] [bp-64h]
  int v71; // [sp+4Ch] [bp-60h]
  int v72; // [sp+50h] [bp-5Ch]
  int v73; // [sp+54h] [bp-58h]
  int v74; // [sp+58h] [bp-54h]
  unsigned int v75; // [sp+5Ch] [bp-50h]
  unsigned int v76; // [sp+60h] [bp-4Ch]
  unsigned int v77; // [sp+64h] [bp-48h]
  unsigned int v78; // [sp+68h] [bp-44h]
  unsigned int v79; // [sp+6Ch] [bp-40h]
  int v80; // [sp+70h] [bp-3Ch]
  unsigned int v81; // [sp+74h] [bp-38h]
  unsigned int v82; // [sp+78h] [bp-34h]
  _DWORD v83[9]; // [sp+7Ch] [bp-30h] BYREF
  _DWORD v84[3]; // [sp+A0h] [bp-Ch]
  _DWORD v85[5]; // [sp+ACh] [bp+0h] BYREF

  v4 = a2[8];
  v5 = *a2;
  v7 = a3[8];
  v8 = v4 + v5;
  v61 = 0;
  v9 = a3[9];
  v10 = a1 - 4;
  v60 = 0;
  v11 = a2[9];
  v83[0] = a1;
  v12 = *a3;
  v79 = v8;
  v66 = v10;
  v13 = v9 + a3[1];
  v62 = v85;
  v14 = v11 + a2[1];
  v15 = a3[10];
  v16 = a3[2];
  v82 = v7 + v12;
  v17 = v83;
  v18 = a2[10];
  v78 = v14;
  v77 = v13;
  v75 = v15 + v16;
  v76 = v18 + a2[2];
  v74 = a2[11] + a2[3];
  v73 = a3[11] + a3[3];
  v19 = a3[12] + a3[4];
  v20 = a2[13];
  v72 = a2[12] + a2[4];
  v21 = a2[5];
  v83[1] = v79;
  v84[0] = v7 + v12;
  v81 = v20 + v21;
  v83[2] = v78;
  v71 = v19;
  v83[3] = v76;
  v84[2] = v75;
  v84[1] = v77;
  v85[0] = v73;
  v83[5] = v72;
  v22 = a3[13];
  v23 = a3[5];
  v83[4] = v74;
  v83[6] = v81;
  v70 = v22 + v23;
  v85[1] = v19;
  v67 = a2 - 1;
  v24 = 0;
  v57 = a3 + 1;
  v69 = a2[14] + a2[6];
  v25 = a3[7];
  v68 = a3[14] + a3[6];
  v26 = a3[15];
  v80 = a2[7] + a2[15];
  v65 = v25 + v26;
  v85[2] = v70;
  v85[4] = v25 + v26;
  v27 = v7;
  v85[3] = v68;
  v83[7] = v69;
  v83[8] = v80;
  while ( 1 )
  {
    v28 = v17[1];
    ++v17;
    v29 = v67[1];
    v30 = v67 + 1;
    v67 = v30;
    v31 = v29 * (unsigned __int64)v12;
    v32 = v27 * (unsigned __int64)v30[8] + v60;
    v33 = v82 * (unsigned __int64)v28 + v61;
    if ( !v24 )
      goto LABEL_13;
    v31 += a3[1] * (unsigned __int64)*(v30 - 1);
    v33 += v77 * (unsigned __int64)(unsigned int)*(v17 - 1);
    v32 += a3[9] * (unsigned __int64)v30[7];
    if ( v24 == 1 )
      goto LABEL_13;
    v31 += a3[2] * (unsigned __int64)*(v30 - 2);
    v33 += v75 * (unsigned __int64)(unsigned int)*(v17 - 2);
    v32 += a3[10] * (unsigned __int64)v30[6];
    if ( v24 == 2 )
      goto LABEL_13;
    v31 += a3[3] * (unsigned __int64)*(v30 - 3);
    v33 += (unsigned int)v73 * (unsigned __int64)(unsigned int)*(v17 - 3);
    v32 += a3[11] * (unsigned __int64)v30[5];
    if ( v24 == 3
      || (v31 += a3[4] * (unsigned __int64)*(v30 - 4),
          v33 += (unsigned int)v71 * (unsigned __int64)(unsigned int)*(v17 - 4),
          v32 += a3[12] * (unsigned __int64)v30[4],
          v24 == 4)
      || (v31 += a3[5] * (unsigned __int64)*(v30 - 5),
          v33 += v70 * (unsigned __int64)(unsigned int)*(v17 - 5),
          v32 += a3[13] * (unsigned __int64)v30[3],
          v24 == 5) )
    {
LABEL_13:
      v59 = v33 - v31;
      v45 = v31 + v32;
      v63 = v24 + 1;
      v64 = v24 + 2;
      v46 = v24 + 1;
      v56 = v45;
    }
    else
    {
      v64 = v24 + 2;
      v34 = a3[6] * (unsigned __int64)*(v30 - 6) + v31;
      v35 = (unsigned int)v68 * (unsigned __int64)(unsigned int)*(v17 - 6) + v33;
      v36 = a3[14] * (unsigned __int64)v30[2] + v32;
      if ( v24 == 7 )
      {
        v63 = 8;
        v37 = a3[7] * (unsigned __int64)*a2 + v34;
        v38 = 0;
        v58 = v65 * (unsigned __int64)v79 + v35 - v37;
        v55 = a3[15] * (unsigned __int64)a2[8] + v36 + v37;
        goto LABEL_10;
      }
      v46 = v24 + 1;
      v63 = v24 + 1;
      v59 = v35 - v34;
      v56 = v36 + v34;
    }
    v47 = v84[v46];
    v58 = v57[8] * (unsigned __int64)a2[15] + v59;
    v48 = v56 - a2[7] * (unsigned __int64)*v57;
    v55 = v48;
    v38 = (unsigned int)v80 * (unsigned __int64)v47;
    if ( v64 <= 7 )
    {
      v38 = (unsigned int)v84[v64] * (unsigned __int64)(unsigned int)v69 + (unsigned int)v80 * (unsigned __int64)v47;
      v55 = v48 - a2[6] * (unsigned __int64)v57[1];
      v58 += v57[9] * (unsigned __int64)a2[14];
      if ( (unsigned int)(v24 + 3) <= 7 )
      {
        v38 += *v62 * (unsigned __int64)v81;
        v49 = v55 - a2[5] * (unsigned __int64)v57[2];
        v55 = v49;
        v58 += v57[10] * (unsigned __int64)a2[13];
        if ( (unsigned int)(v24 + 4) <= 7 )
        {
          v38 += v62[1] * (unsigned __int64)(unsigned int)v72;
          v55 = v49 - a2[4] * (unsigned __int64)v57[3];
          v58 += v57[11] * (unsigned __int64)a2[12];
          if ( (unsigned int)(v24 + 5) <= 7 )
          {
            v50 = v57[12];
            v38 += v62[2] * (unsigned __int64)(unsigned int)v74;
            v51 = a2[11];
            v55 = v49 - a2[4] * (unsigned __int64)v57[3] - a2[3] * (unsigned __int64)v57[4];
            v52 = (v50 * (unsigned __int64)v51 + v58) >> 32;
            v53 = v50 * v51 + v58;
            v58 += v50 * (unsigned __int64)v51;
            if ( (unsigned int)(v24 + 6) <= 7 )
            {
              v38 += v62[3] * (unsigned __int64)v76;
              v55 -= a2[2] * (unsigned __int64)v57[5];
              v54 = v57[13] * (unsigned __int64)a2[10] + __PAIR64__(v52, v53);
              v58 = v54;
              if ( !v24 )
              {
                v38 += v65 * (unsigned __int64)v78;
                v58 = v57[14] * (unsigned __int64)a2[9] + v54;
                v55 -= a2[1] * (unsigned __int64)a3[7];
              }
            }
          }
        }
      }
    }
LABEL_10:
    v24 = v63;
    v61 = (v58 + v38) >> 28;
    v60 = (v55 + v38) >> 28;
    v39 = v66;
    *(_DWORD *)(v66 + 4) = (v55 + v38) & 0xFFFFFFF;
    v66 += 4;
    *(_DWORD *)(v39 + 36) = (v58 + v38) & 0xFFFFFFF;
    ++v57;
    ++v62;
    if ( v63 == 8 )
      break;
    v27 = a3[8];
    v12 = *a3;
  }
  v40 = (_DWORD *)v83[0];
  v41 = v60 + v61 + *(unsigned int *)(v83[0] + 32);
  v42 = (v61 + *(_DWORD *)v83[0]) & 0xFFFFFFF;
  result = *(_DWORD *)(v83[0] + 36) + (v41 >> 28);
  v44 = ((__int64)(v61 + *(unsigned int *)v83[0]) >> 28) + *(_DWORD *)(v83[0] + 4);
  *(_DWORD *)(v83[0] + 32) = v41 & 0xFFFFFFF;
  v40[9] = result;
  *v40 = v42;
  v40[1] = v44;
  return result;
}
