void **__fastcall sub_1BE2E8(void **a1, int a2)
{
  void *v4; // r3
  void **v6; // r11
  _DWORD *v7; // r3
  _DWORD *v8; // r10
  _DWORD *v9; // r9
  _DWORD *v10; // r8
  _DWORD *v11; // r6
  _DWORD *v12; // r4
  _DWORD *v13; // r5
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  void **v16; // r11
  _DWORD *v17; // r3
  _DWORD *v18; // r10
  _DWORD *v19; // r9
  _DWORD *v20; // r8
  _DWORD *v21; // r6
  _DWORD *v22; // r4
  _DWORD *v23; // r5
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  void *ptr; // [sp+0h] [bp-Ch] BYREF
  void *v27; // [sp+4h] [bp-8h] BYREF

  *a1 = 0;
  sub_23103C(&ptr);
  if ( !ptr )
  {
    if ( *a1 )
      return a1;
LABEL_26:
    sub_946E0("Can not fetch data now.");
  }
  if ( !*(_BYTE *)ptr )
  {
    if ( a2 )
      sub_946B0("Empty data returned by target.  Wrong osdata type?");
    else
      sub_946B0("Empty type list returned by target.  No type data?");
LABEL_5:
    v4 = *a1;
    goto LABEL_6;
  }
  sub_1BE198(&v27, (int)ptr);
  v6 = (void **)*a1;
  v4 = v27;
  v27 = 0;
  *a1 = v4;
  if ( v6 )
  {
    v7 = v6[6];
    v8 = v6[7];
    if ( v7 != v8 )
    {
      v9 = v7 + 3;
      v10 = v7 + 3;
      while ( 1 )
      {
        v11 = (_DWORD *)v7[1];
        v12 = (_DWORD *)*(v10 - 3);
        if ( v12 != v11 )
        {
          v13 = v12 + 8;
          do
          {
            v14 = (_DWORD *)v12[6];
            if ( v14 != v13 )
              sub_339E64(v14);
            v15 = (_DWORD *)*(v13 - 8);
            if ( v15 != v12 + 2 )
              sub_339E64(v15);
            v12 += 12;
            v13 += 12;
          }
          while ( v11 != v12 );
          v11 = (_DWORD *)*(v10 - 3);
        }
        if ( v11 )
          sub_339E64(v11);
        v10 += 3;
        v7 = v9;
        if ( v8 == v9 )
          break;
        v9 += 3;
      }
      v8 = v6[6];
    }
    if ( v8 )
      sub_339E64(v8);
    if ( *v6 != v6 + 2 )
      sub_339E64(*v6);
    sub_33AC04(v6);
    v16 = (void **)v27;
    if ( v27 )
    {
      v17 = (_DWORD *)*((_DWORD *)v27 + 6);
      v18 = (_DWORD *)*((_DWORD *)v27 + 7);
      if ( v17 != v18 )
      {
        v19 = v17 + 3;
        v20 = v17 + 3;
        while ( 1 )
        {
          v21 = (_DWORD *)v17[1];
          v22 = (_DWORD *)*(v20 - 3);
          if ( v22 != v21 )
          {
            v23 = v22 + 8;
            do
            {
              v24 = (_DWORD *)v22[6];
              if ( v24 != v23 )
                sub_339E64(v24);
              v25 = (_DWORD *)*(v23 - 8);
              if ( v25 != v22 + 2 )
                sub_339E64(v25);
              v22 += 12;
              v23 += 12;
            }
            while ( v21 != v22 );
            v21 = (_DWORD *)*(v20 - 3);
          }
          if ( v21 )
            sub_339E64(v21);
          v20 += 3;
          v17 = v19;
          if ( v18 == v19 )
            break;
          v19 += 3;
        }
        v18 = v16[6];
      }
      if ( v18 )
        sub_339E64(v18);
      if ( *v16 != v16 + 2 )
        sub_339E64(*v16);
      sub_33AC04(v16);
    }
    goto LABEL_5;
  }
LABEL_6:
  if ( !v4 )
    goto LABEL_26;
  if ( ptr )
    free(ptr);
  return a1;
}
