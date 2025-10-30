int __fastcall sub_117D90(_DWORD *a1, _DWORD *a2, signed int a3)
{
  unsigned int v4; // r5
  signed int v7; // r11
  _DWORD *v8; // r0
  size_t **v9; // r8
  size_t *v10; // r7
  size_t v11; // r6
  int v12; // r3
  size_t *v13; // r7
  size_t v14; // r6
  int v15; // r3
  size_t *v17; // r6
  size_t v18; // r7
  int v19; // r1
  size_t v20; // r6
  _DWORD *v21; // r0
  size_t **v22; // r3
  size_t *v23; // r7
  size_t v24; // r6
  int v25; // r2
  size_t *v26; // r3
  size_t v27; // r7
  int v28; // r3
  size_t *v29; // r3
  size_t v30; // r7
  int v31; // r6
  int v32; // r1
  void *src; // [sp+8h] [bp-54h]
  size_t **srcc; // [sp+8h] [bp-54h]
  size_t **srca; // [sp+8h] [bp-54h]
  size_t *srcd; // [sp+8h] [bp-54h]
  _DWORD *srce; // [sp+8h] [bp-54h]
  void *srcb; // [sp+8h] [bp-54h]
  void *v39; // [sp+Ch] [bp-50h]
  int v40; // [sp+10h] [bp-4Ch]
  int v41; // [sp+10h] [bp-4Ch]
  size_t v42; // [sp+14h] [bp-48h]
  _BYTE v43[16]; // [sp+18h] [bp-44h] BYREF
  _BYTE v44[16]; // [sp+28h] [bp-34h] BYREF
  _BYTE v45[16]; // [sp+38h] [bp-24h] BYREF
  _BYTE v46[20]; // [sp+48h] [bp-14h] BYREF

  v4 = 0;
  v7 = 0;
  if ( sub_10C010((int)a2) > 0 )
  {
    while ( 2 )
    {
      v8 = (_DWORD *)sub_10C01C(a2, v4);
      if ( v8 )
      {
        if ( *v8 )
        {
          if ( *v8 == 1 )
          {
            v9 = (size_t **)v8[1];
            v10 = *v9;
            v11 = **v9;
            if ( !((a3 < (int)v11) | (v11 >> 31)) )
            {
              if ( v11 )
              {
                memcpy(v45, (const void *)v10[2], **v9);
                v12 = v10[3] & 7;
                if ( v12 )
                  v45[v11 - 1] &= ~(255 >> (8 - v12));
              }
              memset(&v45[v11], 0, a3 - v11);
              v13 = v9[1];
              v14 = *v13;
              if ( !((a3 < (int)*v13) | (*v13 >> 31)) )
              {
                if ( v14 )
                {
                  memcpy(v46, (const void *)v13[2], v14);
                  v15 = v13[3] & 7;
                  if ( v15 )
                    v46[v14 - 1] |= 255 >> (8 - v15);
                }
                memset(&v46[v14], 255, a3 - v14);
                while ( 1 )
                {
LABEL_21:
                  if ( sub_10C010((int)a1) <= v7 )
                    return 0;
                  v21 = (_DWORD *)sub_10C01C(a1, v7);
                  if ( !v21 )
                    return 0;
                  if ( *v21 )
                  {
                    if ( *v21 != 1 )
                      return 0;
                    v22 = (size_t **)v21[1];
                    v23 = *v22;
                    v24 = **v22;
                    if ( (a3 < (int)v24) | (v24 >> 31) )
                      return 0;
                    if ( v24 )
                    {
                      srcc = (size_t **)v21[1];
                      memcpy(v43, (const void *)v23[2], **v22);
                      v22 = srcc;
                      v25 = v23[3] & 7;
                      if ( v25 )
                        v43[v24 - 1] &= ~(255 >> (8 - v25));
                    }
                    srca = v22;
                    memset(&v43[v24], 0, a3 - v24);
                    v26 = srca[1];
                    v27 = *v26;
                    if ( (a3 < (int)*v26) | (*v26 >> 31) )
                      return 0;
                    if ( v27 )
                    {
                      srcd = srca[1];
                      memcpy(v44, (const void *)v26[2], *v26);
                      v28 = srcd[3] & 7;
                      if ( v28 )
                        v44[v27 - 1] |= 255 >> (8 - v28);
                    }
                    memset(&v44[v27], 255, a3 - v27);
                  }
                  else
                  {
                    v29 = (size_t *)v21[1];
                    v30 = *v29;
                    v31 = *v29 >> 31;
                    if ( a3 < (int)*v29 )
                      v31 = 1;
                    if ( v31 )
                      return 0;
                    if ( v30 )
                    {
                      srce = (_DWORD *)v21[1];
                      v39 = (void *)v29[2];
                      memcpy(v43, v39, v30);
                      v32 = srce[3] & 7;
                      srcb = (void *)(a3 - v30);
                      if ( v32 )
                      {
                        v41 = 255 >> (8 - v32);
                        v43[v30 - 1] &= ~(_BYTE)v41;
                        v42 = v30 - 1;
                        memset(&v43[v30], 0, a3 - v30);
                        memcpy(v44, v39, v30);
                        v44[v42] |= v41;
                      }
                      else
                      {
                        memset(&v43[v30], 0, a3 - v30);
                        memcpy(v44, v39, v30);
                      }
                    }
                    else
                    {
                      srcb = (void *)a3;
                      memset(v43, 0, a3);
                    }
                    memset(&v44[v30], 255, (size_t)srcb);
                  }
                  if ( memcmp(v44, v46, a3) >= 0 )
                    break;
                  ++v7;
                }
                if ( memcmp(v43, v45, a3) > 0 )
                  return 0;
                if ( (int)++v4 < sub_10C010((int)a2) )
                  continue;
                return 1;
              }
            }
          }
        }
        else
        {
          v17 = (size_t *)v8[1];
          v18 = *v17;
          if ( !((a3 < (int)*v17) | (*v17 >> 31)) )
          {
            if ( v18 )
            {
              src = (void *)v17[2];
              memcpy(v45, src, *v17);
              v19 = v17[3] & 7;
              v20 = a3 - v18;
              if ( v19 )
              {
                v40 = 255 >> (8 - v19);
                v45[v18 - 1] &= ~(_BYTE)v40;
                memset(&v45[v18], 0, a3 - v18);
                memcpy(v46, src, v18);
                v46[v18 - 1] |= v40;
              }
              else
              {
                memset(&v45[v18], 0, a3 - v18);
                memcpy(v46, src, v18);
              }
            }
            else
            {
              v20 = a3;
              memset(v45, 0, a3);
            }
            memset(&v46[v18], 255, v20);
            goto LABEL_21;
          }
        }
      }
      return -1;
    }
  }
  return 1;
}
