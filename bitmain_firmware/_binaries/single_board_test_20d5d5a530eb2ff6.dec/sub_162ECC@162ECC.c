int __fastcall sub_162ECC(int a1, int *src, size_t n)
{
  int v4; // r0
  size_t v5; // r8
  int *v6; // r5
  int v7; // r7
  int v8; // r6
  int v9; // r7
  int v10; // r3
  int v11; // r0
  int v12; // r1
  bool v13; // zf
  int v14; // r2
  signed int v15; // r7
  int v16; // r0
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r12
  int v21; // r1
  int v22; // r0
  int v23; // r3
  int v24; // r2
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r0
  int v29; // r3
  int v30; // r1
  int v31; // r3
  int v32; // r0
  int v33; // r1
  int result; // r0
  _BYTE *v35; // r1
  char *v36; // r0
  char v37; // t1
  char *v38; // r9
  int v39; // r6
  int v40; // r2
  int v41; // r3
  int v42; // r0
  bool v43; // zf
  int v44; // r1
  signed int v45; // r6
  char *v46; // r3
  int v47; // r0
  int v48; // r1
  int v49; // r2
  int v50; // r1
  int v51; // r0
  int v52; // r0
  int v53; // r1
  int v54; // r2
  int v55; // r0
  int v56; // r1
  int v57; // r2
  int v58; // r1
  int v59; // r2
  int v60; // r0
  int v61; // r2
  int v62; // r0
  int v63; // r1
  char *v64; // r0
  char v65; // t1
  int v66; // [sp+14h] [bp-38h] BYREF
  int v67; // [sp+18h] [bp-34h] BYREF
  int v68; // [sp+1Ch] [bp-30h]
  int v69; // [sp+20h] [bp-2Ch]
  int v70; // [sp+24h] [bp-28h]
  int v71; // [sp+28h] [bp-24h]
  int v72; // [sp+2Ch] [bp-20h]
  int v73; // [sp+30h] [bp-1Ch]
  int v74; // [sp+34h] [bp-18h]
  int v75; // [sp+38h] [bp-14h]
  int v76; // [sp+3Ch] [bp-10h]
  int v77; // [sp+40h] [bp-Ch]
  int v78; // [sp+44h] [bp-8h]

  v4 = *(_DWORD *)(a1 + 88);
  v5 = n;
  v6 = src;
  if ( v4 )
  {
    v7 = 16 - v4;
    if ( 16 - v4 <= n )
    {
      v38 = (char *)&v67;
      memcpy((void *)(v4 + a1 + 72), src, 16 - v4);
      v39 = *(_DWORD *)(a1 + 20);
      v40 = *(_DWORD *)(a1 + 80);
      v41 = *(_DWORD *)(a1 + 84);
      v42 = *(_DWORD *)(a1 + 72);
      v43 = v39 == 16;
      v44 = *(_DWORD *)(a1 + 76);
      if ( v39 == 16 )
        v45 = 32;
      else
        v45 = 48;
      v67 = *(_DWORD *)(a1 + 72);
      v68 = v44;
      v69 = v40;
      v70 = v41;
      v71 = v42;
      v72 = v44;
      v73 = v40;
      v74 = v41;
      if ( !v43 )
      {
        v75 = v42;
        v76 = v44;
        v77 = v40;
        v78 = v41;
      }
      v46 = (char *)(a1 + 92);
      v66 = 16;
      if ( (a1 + 92) << 30 )
      {
        v64 = (char *)(a1 + 92);
        do
        {
          v65 = *v38++;
          *v64++ ^= v65;
        }
        while ( v64 != &v46[v45] );
      }
      else
      {
        v47 = *(_DWORD *)(a1 + 96);
        v48 = v68;
        *(_DWORD *)(a1 + 92) ^= v67;
        v49 = v69;
        v50 = v48 ^ v47;
        v51 = v70;
        *(_DWORD *)(a1 + 96) = v50;
        v52 = v51 ^ *(_DWORD *)(a1 + 104);
        *(_DWORD *)(a1 + 100) ^= v49;
        v53 = *(_DWORD *)(a1 + 108);
        v54 = v71;
        *(_DWORD *)(a1 + 104) = v52;
        v55 = *(_DWORD *)(a1 + 112);
        v56 = v53 ^ v54;
        v57 = v72;
        *(_DWORD *)(a1 + 108) = v56;
        v58 = *(_DWORD *)(a1 + 116);
        v59 = v57 ^ v55;
        v60 = v73;
        *(_DWORD *)(a1 + 112) = v59;
        v61 = *(_DWORD *)(a1 + 120);
        v62 = v60 ^ v58;
        v63 = v74;
        *(_DWORD *)(a1 + 116) = v62;
        *(_DWORD *)(a1 + 120) = v63 ^ v61;
        if ( (unsigned int)(v45 - 4) >> 2 != 7 )
        {
          *(_DWORD *)(a1 + 124) ^= v75;
          if ( (unsigned int)(v45 - 4) >> 2 != 8 )
          {
            *(_DWORD *)(a1 + 128) ^= v76;
            if ( (unsigned int)(v45 - 4) >> 2 != 9 )
            {
              *(_DWORD *)(a1 + 132) ^= v77;
              if ( (unsigned int)(v45 - 4) >> 2 == 11 )
                *(_DWORD *)(a1 + 136) ^= v78;
            }
          }
        }
      }
      if ( !sub_D8188(*(_DWORD **)(a1 + 8), a1 + 92, &v66, v46, v45) || v66 != v45 )
        return 0;
      v5 -= v7;
      v6 = (int *)((char *)v6 + v7);
      *(_DWORD *)(a1 + 88) = 0;
    }
  }
  if ( v5 > 0xF )
  {
    v8 = a1 + 92;
    do
    {
      v9 = *(_DWORD *)(a1 + 20);
      v10 = v6[3];
      v11 = *v6;
      v12 = v6[1];
      v13 = v9 == 16;
      v14 = v6[2];
      if ( v9 == 16 )
        v15 = 32;
      else
        v15 = 48;
      v67 = *v6;
      v68 = v12;
      v69 = v14;
      v70 = v10;
      v71 = v11;
      v72 = v12;
      v73 = v14;
      v74 = v10;
      if ( !v13 )
      {
        v75 = v11;
        v76 = v12;
        v77 = v14;
        v78 = v10;
      }
      v66 = 16;
      if ( v8 << 30 )
      {
        v35 = (_BYTE *)(a1 + 92);
        v36 = (char *)&v67;
        do
        {
          v37 = *v36++;
          *v35++ ^= v37;
        }
        while ( v35 != (_BYTE *)(v8 + v15) );
      }
      else
      {
        v16 = *(_DWORD *)(a1 + 104);
        v17 = v68 ^ *(_DWORD *)(a1 + 96);
        v18 = *(_DWORD *)(a1 + 100);
        *(_DWORD *)(a1 + 92) ^= v67;
        v19 = v70;
        v20 = v18;
        v21 = v69;
        *(_DWORD *)(a1 + 96) = v17;
        v22 = v16 ^ v19;
        v23 = *(_DWORD *)(a1 + 108);
        v24 = v71;
        *(_DWORD *)(a1 + 100) = v20 ^ v21;
        v25 = *(_DWORD *)(a1 + 112);
        v26 = v24 ^ v23;
        v27 = v72;
        *(_DWORD *)(a1 + 104) = v22;
        v28 = v73;
        v29 = v27 ^ v25;
        v30 = *(_DWORD *)(a1 + 116);
        *(_DWORD *)(a1 + 112) = v29;
        v31 = *(_DWORD *)(a1 + 120);
        v32 = v30 ^ v28;
        v33 = v74;
        *(_DWORD *)(a1 + 108) = v26;
        *(_DWORD *)(a1 + 116) = v32;
        *(_DWORD *)(a1 + 120) = v33 ^ v31;
        if ( (unsigned int)(v15 - 4) >> 2 != 7 )
        {
          *(_DWORD *)(a1 + 124) ^= v75;
          if ( (unsigned int)(v15 - 4) >> 2 != 8 )
          {
            *(_DWORD *)(a1 + 128) ^= v76;
            if ( (unsigned int)(v15 - 4) >> 2 != 9 )
            {
              *(_DWORD *)(a1 + 132) ^= v77;
              if ( (unsigned int)(v15 - 4) >> 2 == 11 )
                *(_DWORD *)(a1 + 136) ^= v78;
            }
          }
        }
      }
      if ( !sub_D8188(*(_DWORD **)(a1 + 8), a1 + 92, &v66, (char *)(a1 + 92), v15) || v66 != v15 )
        return 0;
      v5 -= 16;
      v6 += 4;
    }
    while ( v5 > 0xF );
  }
  result = 1;
  if ( v5 )
  {
    memcpy((void *)(a1 + 72 + *(_DWORD *)(a1 + 88)), v6, v5);
    *(_DWORD *)(a1 + 88) += v5;
    return 1;
  }
  return result;
}
