int __fastcall sub_EF190(int a1, _DWORD *a2, _DWORD *a3, char **a4, _DWORD *a5)
{
  int v5; // r5
  unsigned int v8; // r7
  int *v9; // r6
  char *v10; // r9
  char *v11; // r12
  size_t v12; // r8
  void *v13; // r0
  size_t v14; // r0
  char *v15; // r2
  int v16; // r3
  size_t v17; // r0
  int v18; // r3
  int v19; // r2
  int v21; // r1
  int v22; // r3
  int v23; // r1
  __int64 v24; // r2
  int v25; // r2
  unsigned int v26; // r3
  unsigned int v27; // r8
  unsigned int v28; // r5
  bool v29; // cf
  unsigned int v30; // r3
  __int64 v31; // r8
  char *v32; // r5
  char *v33; // r3
  char *v34; // r0
  char *v35; // r3
  char *v36; // r2
  int v37; // r1
  char *v38; // r1
  int v39; // r12
  int v40; // t1
  bool v41; // zf
  char *inbuf; // [sp+14h] [bp-10h] BYREF
  char *outbuf; // [sp+18h] [bp-Ch] BYREF
  size_t outbytesleft[2]; // [sp+1Ch] [bp-8h] BYREF

  v5 = *(_DWORD *)(a1 + 8);
  if ( !v5 )
  {
LABEL_18:
    *a2 = 3;
    return -1;
  }
  v8 = 1;
  v9 = _errno_location();
  while ( 1 )
  {
    v10 = *(char **)(a1 + 4);
    v11 = *(char **)(a1 + 16);
    v12 = 4 * v8;
    v13 = *(void **)a1;
    inbuf = v10;
    outbuf = v11;
    outbytesleft[0] = 4 * v8;
    v14 = iconv(v13, &inbuf, (size_t *)(a1 + 8), &outbuf, outbytesleft);
    v15 = inbuf;
    if ( *v9 == 2 )
      *v9 = 84;
    *(_DWORD *)(a1 + 4) = v15;
    if ( v14 != -1 )
    {
      v17 = outbytesleft[0];
      goto LABEL_11;
    }
    v16 = *v9;
    if ( *v9 == 22 )
    {
      v21 = *(_DWORD *)(a1 + 8);
      *a2 = 2;
      *a4 = v15;
      *a5 = v21;
      *(_DWORD *)(a1 + 8) = 0;
      return 0;
    }
    if ( v16 == 84 )
      break;
    if ( v16 != 7 )
      sub_258B04("Internal error while converting character sets");
    v17 = outbytesleft[0];
    v18 = *(_DWORD *)(a1 + 16);
    if ( outbytesleft[0] < v12 )
      goto LABEL_13;
    v25 = *(_DWORD *)(a1 + 20);
    ++v8;
    v26 = (v25 - v18) >> 2;
    if ( v8 > v26 )
    {
      v27 = v8 - v26;
      if ( v8 != v26 )
      {
        if ( v27 > (*(_DWORD *)(a1 + 24) - v25) >> 2 )
        {
          if ( v27 > 0x3FFFFFFF - v26 )
            sub_33D184("vector::_M_default_append");
          if ( v26 < v27 )
            v28 = v8 - v26;
          else
            v28 = v26;
          v29 = __CFADD__(v26, v28);
          v30 = v26 + v28;
          HIDWORD(v31) = v30;
          if ( v29 || v30 > 0x3FFFFFFF )
          {
            HIDWORD(v31) = 0x3FFFFFFF;
LABEL_30:
            HIDWORD(v31) *= 4;
            v32 = (char *)sub_9836C(HIDWORD(v31));
          }
          else
          {
            if ( v30 )
              goto LABEL_30;
            v32 = 0;
          }
          v33 = *(char **)(a1 + 20);
          v34 = *(char **)(a1 + 16);
          if ( v34 == v33 )
          {
            v35 = v32;
          }
          else
          {
            v36 = v34 - 4;
            v37 = v33 - (v34 + 4);
            v35 = v32;
            v38 = &v32[(v37 & 0xFFFFFFFC) + 4];
            do
            {
              v40 = *((_DWORD *)v36 + 1);
              v36 += 4;
              v39 = v40;
              v41 = v35 == 0;
              v35 += 4;
              if ( !v41 )
                *((_DWORD *)v35 - 1) = v39;
            }
            while ( v35 != v38 );
          }
          LODWORD(v31) = &v35[4 * v27];
          if ( v34 )
            sub_339E64(v34);
          HIDWORD(v31) += v32;
          *(_DWORD *)(a1 + 16) = v32;
          *(_QWORD *)(a1 + 20) = v31;
          goto LABEL_17;
        }
        *(_DWORD *)(a1 + 20) = v25 + 4 * v27;
      }
    }
LABEL_17:
    v5 = *(_DWORD *)(a1 + 8);
    if ( !v5 )
      goto LABEL_18;
  }
  v17 = outbytesleft[0];
  if ( outbytesleft[0] < v12 )
  {
LABEL_11:
    v18 = *(_DWORD *)(a1 + 16);
LABEL_13:
    v19 = *(_DWORD *)(a1 + 8);
    *a2 = 0;
    *a3 = v18;
    *a4 = v10;
    *a5 = v5 - v19;
    return v8 - (v17 >> 2);
  }
  v22 = *(_DWORD *)(a1 + 12);
  *a2 = 1;
  *a4 = v15;
  *a5 = v22;
  v23 = *(_DWORD *)(a1 + 12);
  LODWORD(v24) = *(_DWORD *)(a1 + 4) + v23;
  HIDWORD(v24) = *(_DWORD *)(a1 + 8) - v23;
  *(_QWORD *)(a1 + 4) = v24;
  return 0;
}
