void __fastcall sub_23C174(__int64 *a1, int a2, _DWORD *a3)
{
  __int64 v3; // r6
  int v4; // r4
  int v6; // r5
  unsigned int v7; // r3
  unsigned int v8; // r2
  size_t v9; // r6
  char *v10; // r0
  char *v11; // r2
  int v12; // r3
  bool v13; // zf
  int v14; // r2
  int v15; // r3
  bool v16; // zf
  _DWORD *v17; // r5
  _DWORD *v18; // t1
  void (__fastcall *v19)(_DWORD *, int); // r3
  int *v20; // r4
  int *v21; // r9
  int v22; // r3
  int v23; // t1
  int v24; // r0
  _DWORD *v25; // r9
  _DWORD *v26; // r11
  _DWORD *v27; // r4
  _DWORD *v28; // t1
  void (__fastcall *v29)(_DWORD *); // r3
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  int v34; // [sp+4h] [bp-18h]
  char *v35; // [sp+8h] [bp-14h]
  char *v37; // [sp+14h] [bp-8h]

  v3 = *a1;
  v4 = a2;
  v6 = a2 - *(_DWORD *)a1;
  v7 = (*((_DWORD *)a1 + 1) - *(_DWORD *)a1) >> 2;
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_57;
  }
  v8 = 2 * v7;
  if ( v7 > 2 * v7 || v8 > 0x3FFFFFFF )
  {
    v9 = -4;
LABEL_4:
    v10 = (char *)sub_9836C(v9);
    v34 = (int)(v10 + 4);
    v35 = v10;
    v37 = &v10[v9];
    v3 = *a1;
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_57:
    v9 = 4 * v8;
    goto LABEL_4;
  }
  v37 = 0;
  v34 = 4;
  v35 = 0;
LABEL_5:
  if ( &v35[v6] )
    *(_DWORD *)&v35[v6] = *a3;
  if ( v4 != (_DWORD)v3 )
  {
    v11 = v35;
    v12 = v3;
    do
    {
      v13 = v11 == 0;
      v12 += 4;
      if ( v11 )
        a2 = *(_DWORD *)(v12 - 4);
      v11 += 4;
      if ( !v13 )
      {
        *(_DWORD *)(v12 - 4) = 0;
        *((_DWORD *)v11 - 1) = a2;
      }
    }
    while ( v4 != v12 );
    v34 = (int)&v35[v4 - v3 + 4];
    if ( v4 == HIDWORD(v3) )
    {
      do
      {
LABEL_22:
        v18 = *(_DWORD **)v3;
        LODWORD(v3) = v3 + 4;
        v17 = v18;
        if ( v18 )
        {
          v19 = *(void (__fastcall **)(_DWORD *, int))(*v17 + 8);
          if ( (char *)v19 == (char *)sub_239674 )
          {
            v20 = (int *)v17[10];
            v21 = (int *)v17[11];
            *v17 = off_3E9B34;
            if ( v20 != v21 )
            {
              do
              {
                v23 = *v20++;
                v22 = v23;
                v24 = v23;
                if ( v23 )
                  (*(void (__fastcall **)(int, int))(*(_DWORD *)v22 + 8))(v24, a2);
              }
              while ( v21 != v20 );
              v21 = (int *)v17[10];
            }
            if ( v21 )
              sub_339E64(v21);
            v25 = (_DWORD *)v17[8];
            if ( (_DWORD *)v17[7] != v25 )
            {
              v26 = (_DWORD *)v17[7];
              do
              {
                v28 = (_DWORD *)*v26++;
                v27 = v28;
                if ( v28 )
                {
                  v29 = *(void (__fastcall **)(_DWORD *))(*v27 + 8);
                  if ( (char *)v29 == (char *)sub_239364 )
                  {
                    v30 = (_DWORD *)v27[16];
                    *v27 = off_3E9AC0;
                    if ( v30 != v27 + 18 )
                      sub_339E64(v30);
                    v31 = (_DWORD *)v27[9];
                    if ( v31 != v27 + 11 )
                      sub_339E64(v31);
                    v32 = (_DWORD *)v27[1];
                    if ( v32 != v27 + 3 )
                      sub_339E64(v32);
                    sub_33AC04(v27);
                  }
                  else
                  {
                    v29(v27);
                  }
                }
              }
              while ( v25 != v26 );
              v25 = (_DWORD *)v17[7];
            }
            if ( v25 )
              sub_339E64(v25);
            v33 = (_DWORD *)v17[1];
            if ( v33 != v17 + 3 )
              sub_339E64(v33);
            sub_33AC04(v17);
          }
          else
          {
            v19(v17, a2);
          }
        }
      }
      while ( HIDWORD(v3) != (_DWORD)v3 );
LABEL_50:
      HIDWORD(v3) = *(_DWORD *)a1;
      goto LABEL_51;
    }
LABEL_15:
    v14 = v34;
    v15 = v4;
    do
    {
      v16 = v14 == 0;
      v15 += 4;
      if ( v14 )
        a2 = *(_DWORD *)(v15 - 4);
      v14 += 4;
      if ( !v16 )
      {
        *(_DWORD *)(v15 - 4) = 0;
        *(_DWORD *)(v14 - 4) = a2;
      }
    }
    while ( v15 != HIDWORD(v3) );
    v34 += ((HIDWORD(v3) - (v4 + 4)) & 0xFFFFFFFC) + 4;
    if ( (_DWORD)v3 == HIDWORD(v3) )
      goto LABEL_50;
    goto LABEL_22;
  }
  if ( v4 != HIDWORD(v3) )
    goto LABEL_15;
LABEL_51:
  if ( HIDWORD(v3) )
    sub_339E64((void *)HIDWORD(v3));
  *(_DWORD *)a1 = v35;
  *((_DWORD *)a1 + 1) = v34;
  *((_DWORD *)a1 + 2) = v37;
}
