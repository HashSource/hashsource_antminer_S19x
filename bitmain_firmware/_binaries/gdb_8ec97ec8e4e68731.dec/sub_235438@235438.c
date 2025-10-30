void __fastcall sub_235438(int a1)
{
  const char *v1; // r0
  int v2; // r2
  int *v3; // r6
  int v4; // r4
  int v5; // r7
  __int16 *v6; // r8
  int v7; // r4
  int v8; // r9
  int *v9; // r5
  size_t v10; // r2
  int v11; // r0
  int v12; // r1
  int v13; // r12
  void *v14; // r3
  int *v15; // lr
  bool v16; // zf
  int v17; // r2
  int v18; // r2
  _BYTE *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r3
  int v22; // r2
  int v23; // r0
  int v24; // r1
  int v25; // r5
  int v26; // r4
  size_t v27; // r2
  int v28; // r1
  int v29; // r8
  int v30; // r1
  int v31; // r3
  int v32; // r0
  int v33; // r8
  int v34; // r9
  int v35; // r4
  int v36; // r7
  int v37; // r5
  int v38; // t1
  int v39; // r6
  int v40; // t1
  size_t v41; // r2
  size_t v42; // r2
  size_t v43; // r2
  int v44; // r8
  int v45; // r2
  int v46; // r7
  int v47; // r9
  int v48; // r8
  int v49; // r7
  int v50; // r6
  int v51; // r5
  int v52; // t1
  int v53; // r4
  int v54; // t1
  size_t v55; // r2
  char *ptr; // [sp+0h] [bp-7Ch]
  int v57; // [sp+4h] [bp-78h]
  int v58; // [sp+8h] [bp-74h]
  int v59; // [sp+Ch] [bp-70h]
  int v60; // [sp+10h] [bp-6Ch]
  int v61; // [sp+14h] [bp-68h]
  int *v62; // [sp+18h] [bp-64h]
  __int16 *v63; // [sp+1Ch] [bp-60h]
  int v64; // [sp+20h] [bp-5Ch]
  int v65; // [sp+24h] [bp-58h]
  int v66; // [sp+28h] [bp-54h]
  int v67; // [sp+2Ch] [bp-50h]
  void *v68[2]; // [sp+30h] [bp-4Ch] BYREF
  _BYTE v69[16]; // [sp+38h] [bp-44h] BYREF
  void *v70; // [sp+48h] [bp-34h]
  int v71; // [sp+4Ch] [bp-30h]
  _DWORD v72[4]; // [sp+50h] [bp-2Ch] BYREF
  void *v73; // [sp+60h] [bp-1Ch] BYREF
  int v74; // [sp+64h] [bp-18h]
  _BYTE v75[20]; // [sp+68h] [bp-14h] BYREF

  if ( !a1 )
    sub_946E0("Missing dir name");
  v1 = (const char *)sub_29B910(a1);
  ptr = (char *)v1;
  if ( !v1 )
    v2 = -1;
  v68[0] = v69;
  if ( v1 )
    v2 = (int)&v1[strlen(v1)];
  sub_2350F8(v68, ptr, v2);
  v3 = &dword_48A294;
  v4 = dword_48A4C4;
  v5 = dword_48A4C8;
  if ( dword_48A4C8 == dword_48A4C4 )
  {
    v28 = dword_48A4C4;
    v8 = 0;
  }
  else
  {
    v6 = &word_398974;
    v7 = dword_48A4C4 + 8;
    v8 = 0;
    do
    {
      v73 = v75;
      sub_2350F8(&v73, (_BYTE *)v68[0], (int)v68[0] + (unsigned int)v68[1]);
      if ( v74 == 0x7FFFFFFF )
        sub_33D184("basic_string::append");
      sub_33C320(&v73, v6, 1);
      v9 = *(int **)(v7 - 8);
      v10 = strlen((const char *)v9);
      if ( v10 > 0x7FFFFFFF - v74 )
        sub_33D184("basic_string::append");
      v11 = sub_33C320(&v73, v9, v10);
      v70 = v72;
      v13 = v11;
      v15 = (int *)(v11 + 8);
      v14 = *(void **)v11;
      v16 = *(_DWORD *)v11 == v11 + 8;
      if ( *(_DWORD *)v11 == v11 + 8 )
      {
        v11 = *v15;
        v9 = v72;
        v17 = v15[2];
        v14 = (void *)v15[3];
        v12 = v15[1];
      }
      else
      {
        v17 = *(_DWORD *)(v11 + 8);
        v70 = *(void **)v11;
      }
      if ( v16 )
      {
        *v9 = v11;
        v9[1] = v12;
        v9[2] = v17;
        v9[3] = (int)v14;
      }
      else
      {
        v72[0] = v17;
      }
      v18 = *(_DWORD *)(v13 + 4);
      *(_BYTE *)(v13 + 8) = 0;
      v71 = v18;
      *(_DWORD *)v13 = v15;
      v19 = v73;
      *(_DWORD *)(v13 + 4) = 0;
      if ( v19 != v75 )
        sub_339E64(v19);
      v20 = (_DWORD *)sub_277050((int)v70);
      if ( v20
        && (v21 = *(_DWORD **)(v7 - 4), v20[1] == v21[1])
        && v20[2] == v21[2]
        && (v22 = v20[9], v23 = v20[10], v24 = v21[9], v65 = (v23 - v22) >> 2, v65 == (v21[10] - v24) >> 2) )
      {
        if ( v23 != v22 )
        {
          v59 = v8;
          v58 = v22 - 4;
          v57 = v24 - 4;
          v64 = 0;
          v60 = v5;
          v61 = v7;
          v62 = v3;
          v63 = v6;
          do
          {
            v25 = *(_DWORD *)(v58 + 4);
            v58 += 4;
            v26 = *(_DWORD *)(v57 + 4);
            v57 += 4;
            if ( v25 != v26 )
            {
              v27 = *(_DWORD *)(v25 + 8);
              if ( v27 != *(_DWORD *)(v26 + 8)
                || v27 && memcmp(*(const void **)(v25 + 4), *(const void **)(v26 + 4), v27) )
              {
                goto LABEL_30;
              }
              v29 = *(_DWORD *)(v25 + 28);
              v30 = *(_DWORD *)(v25 + 32);
              v31 = *(_DWORD *)(v26 + 28);
              v32 = (v30 - v29) >> 2;
              if ( v32 != (*(_DWORD *)(v26 + 32) - v31) >> 2 )
                goto LABEL_30;
              if ( v30 != v29 )
              {
                v67 = v26;
                v33 = v29 - 4;
                v34 = 0;
                v35 = v32;
                v36 = v31 - 4;
                v66 = v25;
                while ( 1 )
                {
                  v38 = *(_DWORD *)(v33 + 4);
                  v33 += 4;
                  v37 = v38;
                  v40 = *(_DWORD *)(v36 + 4);
                  v36 += 4;
                  v39 = v40;
                  if ( v37 != v40 )
                  {
                    v41 = *(_DWORD *)(v37 + 8);
                    if ( v41 != *(_DWORD *)(v39 + 8)
                      || v41 && memcmp(*(const void **)(v37 + 4), *(const void **)(v39 + 4), v41) )
                    {
                      goto LABEL_30;
                    }
                    if ( *(_DWORD *)(v37 + 28) != *(_DWORD *)(v39 + 28) )
                      goto LABEL_30;
                    if ( *(_DWORD *)(v37 + 32) != *(_DWORD *)(v39 + 32) )
                      goto LABEL_30;
                    if ( *(_DWORD *)(v37 + 60) != *(_DWORD *)(v39 + 60) )
                      goto LABEL_30;
                    v42 = *(_DWORD *)(v37 + 40);
                    if ( v42 != *(_DWORD *)(v39 + 40)
                      || v42 && memcmp(*(const void **)(v37 + 36), *(const void **)(v39 + 36), v42) )
                    {
                      goto LABEL_30;
                    }
                    v43 = *(_DWORD *)(v37 + 68);
                    if ( v43 != *(_DWORD *)(v39 + 68)
                      || v43 && memcmp(*(const void **)(v37 + 64), *(const void **)(v39 + 64), v43) )
                    {
                      goto LABEL_30;
                    }
                  }
                  if ( v35 == ++v34 )
                  {
                    v25 = v66;
                    v26 = v67;
                    break;
                  }
                }
              }
              v44 = *(_DWORD *)(v25 + 40);
              v45 = *(_DWORD *)(v25 + 44);
              v46 = *(_DWORD *)(v26 + 40);
              v47 = (v45 - v44) >> 2;
              if ( v47 != (*(_DWORD *)(v26 + 44) - v46) >> 2 )
                goto LABEL_30;
              if ( v45 != v44 )
              {
                v48 = v44 - 4;
                v49 = v46 - 4;
                v50 = 0;
                while ( 1 )
                {
                  v52 = *(_DWORD *)(v48 + 4);
                  v48 += 4;
                  v51 = v52;
                  v54 = *(_DWORD *)(v49 + 4);
                  v49 += 4;
                  v53 = v54;
                  if ( v51 != v54 )
                  {
                    v55 = *(_DWORD *)(v51 + 8);
                    if ( v55 != *(_DWORD *)(v53 + 8)
                      || v55 && memcmp(*(const void **)(v51 + 4), *(const void **)(v53 + 4), v55) )
                    {
                      break;
                    }
                    if ( *(_DWORD *)(v51 + 28) != *(_DWORD *)(v53 + 28) )
                      break;
                  }
                  if ( v47 == ++v50 )
                    goto LABEL_66;
                }
LABEL_30:
                v8 = v59;
                v5 = v60;
                v7 = v61;
                v3 = v62;
                v6 = v63;
                goto LABEL_8;
              }
            }
LABEL_66:
            v16 = v65 == ++v64;
          }
          while ( !v16 );
          v8 = v59;
          v5 = v60;
          v7 = v61;
          v3 = v62;
          v6 = v63;
        }
      }
      else
      {
LABEL_8:
        ++v8;
      }
      if ( v70 != v72 )
        sub_339E64(v70);
      v16 = v5 == v7;
      v7 += 8;
    }
    while ( !v16 );
    v4 = v3[140];
    v28 = v3[141];
  }
  sub_259F10("Tested %lu XML files, %d failed\n", (v28 - v4) >> 3, v8);
  if ( v68[0] != v69 )
    sub_339E64(v68[0]);
  if ( ptr )
    free(ptr);
}
