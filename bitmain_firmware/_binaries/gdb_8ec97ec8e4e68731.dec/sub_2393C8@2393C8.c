_DWORD *__fastcall sub_2393C8(_DWORD *a1)
{
  _DWORD *v2; // r6
  _DWORD *v3; // r8
  _DWORD *v4; // r4
  _DWORD *v5; // t1
  int (__fastcall *v6)(void *); // r3
  int *v7; // r5
  int *v8; // r11
  int v9; // r3
  int v10; // t1
  int v11; // r0
  _DWORD *v12; // r5
  _DWORD *v13; // r11
  _DWORD *v14; // r10
  _DWORD *v15; // t1
  void (__fastcall *v16)(_DWORD *); // r1
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r4
  _DWORD *v22; // r6
  _DWORD *v23; // r5
  _DWORD *v24; // r0
  void *v25; // r0
  void *v26; // r3
  void *v27; // r0

  v2 = (_DWORD *)a1[9];
  v3 = (_DWORD *)a1[10];
  *a1 = off_3E9B48;
  if ( v2 != v3 )
  {
    do
    {
      v5 = (_DWORD *)*v2++;
      v4 = v5;
      if ( v5 )
      {
        v6 = *(int (__fastcall **)(void *))(*v4 + 8);
        if ( v6 == sub_239674 )
        {
          v7 = (int *)v4[10];
          v8 = (int *)v4[11];
          *v4 = off_3E9B34;
          if ( v7 != v8 )
          {
            do
            {
              v10 = *v7++;
              v9 = v10;
              v11 = v10;
              if ( v10 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v11);
            }
            while ( v8 != v7 );
            v8 = (int *)v4[10];
          }
          if ( v8 )
            sub_339E64(v8);
          v12 = (_DWORD *)v4[8];
          if ( (_DWORD *)v4[7] != v12 )
          {
            v13 = (_DWORD *)v4[7];
            do
            {
              v15 = (_DWORD *)*v13++;
              v14 = v15;
              if ( v15 )
              {
                v16 = *(void (__fastcall **)(_DWORD *))(*v14 + 8);
                if ( (char *)v16 == (char *)sub_239364 )
                {
                  v17 = (_DWORD *)v14[16];
                  *v14 = off_3E9AC0;
                  if ( v17 != v14 + 18 )
                    sub_339E64(v17);
                  v18 = (_DWORD *)v14[9];
                  if ( v18 != v14 + 11 )
                    sub_339E64(v18);
                  v19 = (_DWORD *)v14[1];
                  if ( v19 != v14 + 3 )
                    sub_339E64(v19);
                  sub_33AC04(v14);
                }
                else
                {
                  v16(v14);
                }
              }
            }
            while ( v12 != v13 );
            v12 = (_DWORD *)v4[7];
          }
          if ( v12 )
            sub_339E64(v12);
          v20 = (_DWORD *)v4[1];
          if ( v20 != v4 + 3 )
            sub_339E64(v20);
          sub_33AC04(v4);
        }
        else
        {
          v6(v4);
        }
      }
    }
    while ( v3 != v2 );
    v3 = (_DWORD *)a1[9];
  }
  if ( v3 )
    sub_339E64(v3);
  v21 = (_DWORD *)a1[6];
  v22 = (_DWORD *)a1[7];
  if ( v21 != v22 )
  {
    v23 = v21 + 8;
    do
    {
      v24 = (_DWORD *)v21[6];
      if ( v24 != v23 )
        sub_339E64(v24);
      v25 = (void *)*(v23 - 8);
      v26 = v21 + 2;
      v23 += 12;
      v21 += 12;
      if ( v25 != v26 )
        sub_339E64(v25);
    }
    while ( v22 != v21 );
    v22 = (_DWORD *)a1[6];
  }
  if ( v22 )
    sub_339E64(v22);
  v27 = (void *)a1[3];
  if ( v27 )
    sub_339E64(v27);
  return a1;
}
