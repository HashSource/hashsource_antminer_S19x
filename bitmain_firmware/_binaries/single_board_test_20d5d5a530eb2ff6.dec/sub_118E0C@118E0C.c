int __fastcall sub_118E0C(_DWORD *a1)
{
  signed int v2; // r6
  signed int **v3; // r4
  size_t **v4; // r0
  signed int *v5; // r3
  signed int v6; // r5
  signed int v7; // r4
  size_t v8; // r2
  int v9; // r0
  int v10; // r0
  unsigned int v11; // r1
  int v13; // r0
  _DWORD *v14; // r4
  _DWORD *v15; // r0
  size_t v16; // r6
  int v17; // r11
  _DWORD *v18; // r3
  _DWORD *v19; // r7
  signed int v20; // r4
  unsigned int v21; // r1
  int *v22; // r10
  int v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r3
  int v28; // r3
  int v29; // r3
  int v30; // r3
  int v31; // r3
  int v32; // r3
  int v33; // r3
  int v34; // r3
  int v35; // r3
  int v36; // r3
  int v37; // r3
  int v39; // r0
  int *v40; // r0
  int *v41; // [sp+8h] [bp-B0h]
  signed int v42; // [sp+Ch] [bp-ACh]
  int v43; // [sp+10h] [bp-A8h]
  int v44; // [sp+14h] [bp-A4h]
  int v45; // [sp+18h] [bp-A0h]
  int v46; // [sp+1Ch] [bp-9Ch]
  int v47; // [sp+20h] [bp-98h]
  int v48; // [sp+24h] [bp-94h]
  int v49; // [sp+28h] [bp-90h]
  int v50; // [sp+2Ch] [bp-8Ch]
  int v51; // [sp+30h] [bp-88h]
  int v52; // [sp+34h] [bp-84h]
  int v53; // [sp+38h] [bp-80h]
  int v54; // [sp+3Ch] [bp-7Ch]
  int v55; // [sp+40h] [bp-78h]
  int v56; // [sp+44h] [bp-74h]
  int v57; // [sp+48h] [bp-70h]
  _DWORD *v58; // [sp+4Ch] [bp-6Ch]
  unsigned __int8 v59[16]; // [sp+50h] [bp-68h] BYREF
  unsigned __int8 v60[16]; // [sp+60h] [bp-58h] BYREF
  char dest[16]; // [sp+70h] [bp-48h] BYREF
  char v62[16]; // [sp+80h] [bp-38h] BYREF

  if ( !a1 )
    return 1;
  v2 = 0;
  while ( 1 )
  {
    v10 = sub_10C010((int)a1);
    v11 = v2;
    if ( v2++ >= v10 - 1 )
      break;
    v3 = (signed int **)sub_10C01C(a1, v11);
    v4 = (size_t **)sub_10C01C(a1, v2);
    v5 = *v3;
    v6 = **v3;
    v7 = **v4;
    v8 = v6;
    if ( v6 >= v7 )
      v8 = **v4;
    v9 = memcmp((const void *)v5[2], (const void *)(*v4)[2], v8);
    if ( !v9 )
      v9 = v6 - v7;
    if ( v9 >= 0 )
      return 0;
  }
  v13 = (int)a1;
  v42 = 0;
  v58 = a1;
  while ( v42 < sub_10C010(v13) )
  {
    v14 = (_DWORD *)sub_10C01C(v58, v42);
    v15 = sub_1188F8(v14);
    if ( v15 == (_DWORD *)1 )
    {
      v16 = 4;
      v55 = -11;
      v54 = -10;
      v53 = -9;
      v52 = -8;
      v51 = -7;
      v50 = -6;
      v49 = -5;
      v57 = -4;
      v56 = -3;
      v47 = -2;
      v48 = -1;
      v46 = 0;
      v45 = 3;
      v44 = 1;
      v17 = 4;
      v43 = 2;
    }
    else if ( v15 == (_DWORD *)2 )
    {
      v16 = 16;
      v55 = 1;
      v53 = 3;
      v52 = 4;
      v51 = 5;
      v50 = 6;
      v49 = 7;
      v57 = 8;
      v56 = 9;
      v47 = 10;
      v48 = 11;
      v46 = 12;
      v44 = 13;
      v17 = 16;
      v54 = 2;
      v45 = 15;
      v43 = 14;
    }
    else
    {
      v16 = 0;
      v55 = -15;
      v54 = -14;
      v53 = -13;
      v52 = -12;
      v51 = -11;
      v50 = -10;
      v49 = -9;
      v57 = -8;
      v56 = -7;
      v47 = -6;
      v48 = -5;
      v46 = -4;
      v44 = -3;
      v45 = -1;
      v17 = 0;
      v43 = -2;
    }
    if ( !v14 )
      return 0;
    v18 = (_DWORD *)v14[1];
    if ( !v18 )
      return 0;
    if ( *v18 )
    {
      if ( *v18 != 1 )
        return 0;
      v19 = (_DWORD *)v18[1];
      if ( !sub_10C010((int)v19) )
        return 0;
      v20 = 0;
      while ( v20 < sub_10C010((int)v19) - 1 )
      {
        v21 = v20++;
        v22 = (int *)sub_10C01C(v19, v21);
        v41 = (int *)sub_10C01C(v19, v20);
        if ( sub_118368(v22, (char *)v59, (char *)v60, v17)
          && sub_118368(v41, dest, v62, v17)
          && memcmp(v59, dest, v16) < 0
          && memcmp(v59, v60, v16) <= 0
          && memcmp(dest, v62, v16) <= 0 )
        {
          if ( v45 != -1 )
          {
            v23 = (unsigned __int8)dest[v45];
            dest[v45] = v23 - 1;
            if ( !v23 && v43 >= 0 )
            {
              v24 = (unsigned __int8)dest[v43];
              dest[v43] = v24 - 1;
              if ( !v24 && v44 >= 0 )
              {
                v25 = (unsigned __int8)dest[v44];
                dest[v44] = v25 - 1;
                if ( !v25 && v46 >= 0 )
                {
                  v26 = (unsigned __int8)dest[v46];
                  dest[v46] = v26 - 1;
                  if ( !v26 && v48 >= 0 )
                  {
                    v27 = (unsigned __int8)dest[v48];
                    dest[v48] = v27 - 1;
                    if ( !v27 && v47 >= 0 )
                    {
                      v28 = (unsigned __int8)dest[v47];
                      dest[v47] = v28 - 1;
                      if ( !v28 && v56 >= 0 )
                      {
                        v29 = (unsigned __int8)dest[v56];
                        dest[v56] = v29 - 1;
                        if ( !v29 && v57 >= 0 )
                        {
                          v30 = (unsigned __int8)dest[v57];
                          dest[v57] = v30 - 1;
                          if ( !v30 && v49 >= 0 )
                          {
                            v31 = (unsigned __int8)dest[v49];
                            dest[v49] = v31 - 1;
                            if ( !v31 && v50 >= 0 )
                            {
                              v32 = (unsigned __int8)dest[v50];
                              dest[v50] = v32 - 1;
                              if ( !v32 && v51 >= 0 )
                              {
                                v33 = (unsigned __int8)dest[v51];
                                dest[v51] = v33 - 1;
                                if ( !v33 && v52 >= 0 )
                                {
                                  v34 = (unsigned __int8)dest[v52];
                                  dest[v52] = v34 - 1;
                                  if ( !v34 && v53 >= 0 )
                                  {
                                    v35 = (unsigned __int8)dest[v53];
                                    dest[v53] = v35 - 1;
                                    if ( !v35 && v54 >= 0 )
                                    {
                                      v36 = (unsigned __int8)dest[v54];
                                      dest[v54] = v36 - 1;
                                      if ( !v36 && v55 >= 0 )
                                      {
                                        v37 = (unsigned __int8)dest[v55];
                                        dest[v55] = v37 - 1;
                                        if ( !v37 && v17 == 16 )
                                          --dest[0];
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if ( memcmp(v60, dest, v16) < 0 && (*v22 != 1 || sub_117988(v59, v60, v17) < 0) )
            continue;
        }
        return 0;
      }
      v39 = sub_10C010((int)v19);
      v40 = (int *)sub_10C01C(v19, v39 - 1);
      if ( v40 )
      {
        if ( *v40 == 1
          && (!sub_118368(v40, (char *)v59, (char *)v60, v17)
           || memcmp(v59, v60, v16) > 0
           || sub_117988(v59, v60, v17) >= 0) )
        {
          return 0;
        }
      }
    }
    v13 = (int)v58;
    ++v42;
  }
  return 1;
}
