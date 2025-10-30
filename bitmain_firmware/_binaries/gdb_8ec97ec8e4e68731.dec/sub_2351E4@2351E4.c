void __fastcall sub_2351E4(_DWORD *a1)
{
  void (*v2)(void); // r2
  _DWORD *v3; // r6
  _DWORD *v4; // r9
  _DWORD *v5; // r4
  _DWORD *v6; // t1
  int (__fastcall *v7)(void *); // r3
  int *v8; // r5
  int *v9; // r11
  int v10; // r3
  int v11; // t1
  int v12; // r0
  _DWORD *v13; // r5
  _DWORD *v14; // r11
  _DWORD *v15; // r10
  _DWORD *v16; // t1
  int (__fastcall *v17)(void *); // r1
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r4
  _DWORD *v23; // r6
  _DWORD *v24; // r5
  _DWORD *v25; // r0
  void *v26; // r0
  void *v27; // r3
  void *v28; // r0

  if ( a1 )
  {
    v2 = *(void (**)(void))(*a1 + 8);
    if ( (char *)v2 == (char *)sub_2397A4 )
    {
      v3 = (_DWORD *)a1[9];
      v4 = (_DWORD *)a1[10];
      *a1 = off_3E9B48;
      if ( v3 != v4 )
      {
        do
        {
          v6 = (_DWORD *)*v3++;
          v5 = v6;
          if ( v6 )
          {
            v7 = *(int (__fastcall **)(void *))(*v5 + 8);
            if ( v7 == sub_239674 )
            {
              v8 = (int *)v5[10];
              v9 = (int *)v5[11];
              *v5 = off_3E9B34;
              if ( v8 != v9 )
              {
                do
                {
                  v11 = *v8++;
                  v10 = v11;
                  v12 = v11;
                  if ( v11 )
                    (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v12);
                }
                while ( v9 != v8 );
                v9 = (int *)v5[10];
              }
              if ( v9 )
                sub_339E64(v9);
              v13 = (_DWORD *)v5[8];
              if ( (_DWORD *)v5[7] != v13 )
              {
                v14 = (_DWORD *)v5[7];
                do
                {
                  v16 = (_DWORD *)*v14++;
                  v15 = v16;
                  if ( v16 )
                  {
                    v17 = *(int (__fastcall **)(void *))(*v15 + 8);
                    if ( v17 == sub_239364 )
                    {
                      v18 = (_DWORD *)v15[16];
                      *v15 = off_3E9AC0;
                      if ( v18 != v15 + 18 )
                        sub_339E64(v18);
                      v19 = (_DWORD *)v15[9];
                      if ( v19 != v15 + 11 )
                        sub_339E64(v19);
                      v20 = (_DWORD *)v15[1];
                      if ( v20 != v15 + 3 )
                        sub_339E64(v20);
                      sub_33AC04(v15);
                    }
                    else
                    {
                      v17(v15);
                    }
                  }
                }
                while ( v13 != v14 );
                v13 = (_DWORD *)v5[7];
              }
              if ( v13 )
                sub_339E64(v13);
              v21 = (_DWORD *)v5[1];
              if ( v21 != v5 + 3 )
                sub_339E64(v21);
              sub_33AC04(v5);
            }
            else
            {
              v7(v5);
            }
          }
        }
        while ( v4 != v3 );
        v4 = (_DWORD *)a1[9];
      }
      if ( v4 )
        sub_339E64(v4);
      v22 = (_DWORD *)a1[6];
      v23 = (_DWORD *)a1[7];
      if ( v22 != v23 )
      {
        v24 = v22 + 8;
        do
        {
          v25 = (_DWORD *)v22[6];
          if ( v25 != v24 )
            sub_339E64(v25);
          v26 = (void *)*(v24 - 8);
          v27 = v22 + 2;
          v24 += 12;
          v22 += 12;
          if ( v26 != v27 )
            sub_339E64(v26);
        }
        while ( v23 != v22 );
        v23 = (_DWORD *)a1[6];
      }
      if ( v23 )
        sub_339E64(v23);
      v28 = (void *)a1[3];
      if ( v28 )
        sub_339E64(v28);
      sub_349268(a1);
    }
    else
    {
      v2();
    }
  }
}
