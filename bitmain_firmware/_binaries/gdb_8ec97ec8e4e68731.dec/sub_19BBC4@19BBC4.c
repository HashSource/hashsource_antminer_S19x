void __fastcall sub_19BBC4(int a1, _DWORD *a2, int *a3, unsigned int *a4)
{
  unsigned int v6; // r3
  int v8; // r2
  unsigned int v9; // r4
  int v10; // r1
  const char *v11; // r7
  char *v12; // r11
  void *v13; // r6
  char *v14; // r11
  int *v15; // r12
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int *v20; // r12
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  char *v26; // r0
  unsigned int i; // [sp+0h] [bp-24h]
  _DWORD *v28; // [sp+4h] [bp-20h]
  int v31; // [sp+10h] [bp-14h] BYREF
  void *ptr; // [sp+14h] [bp-10h] BYREF
  char *v33; // [sp+18h] [bp-Ch]
  char *v34; // [sp+1Ch] [bp-8h]

  if ( a4 )
  {
    v6 = *a4;
    if ( v6 )
    {
      v28 = a4 + 1;
      for ( i = 0; i < v6; ++i )
      {
        v8 = *a3;
        v9 = 0;
        v10 = a3[1];
        ptr = 0;
        v33 = 0;
        v34 = 0;
        v11 = (const char *)v28[1];
        ++v28;
        if ( v10 != v8 )
        {
          do
          {
            v12 = sub_195BA0((const char **)(*a2 + 8 * v9));
            v13 = sub_9253C((int)sub_1953F0, (int)v12);
            if ( !strcmp(v11, v12) )
            {
              v14 = v33;
              v15 = (int *)(*a3 + 40 * v9);
              if ( v33 == v34 )
              {
                sub_DFC48((char **)&ptr, v33, (int *)(*a3 + 40 * v9));
              }
              else
              {
                if ( v33 )
                {
                  v16 = *v15;
                  v17 = v15[1];
                  v18 = v15[2];
                  v19 = v15[3];
                  v20 = v15 + 4;
                  *(_DWORD *)v33 = v16;
                  *((_DWORD *)v14 + 1) = v17;
                  *((_DWORD *)v14 + 2) = v18;
                  *((_DWORD *)v14 + 3) = v19;
                  v21 = *v20;
                  v22 = v20[1];
                  v23 = v20[2];
                  v24 = v20[3];
                  v20 += 4;
                  *((_DWORD *)v14 + 4) = v21;
                  *((_DWORD *)v14 + 5) = v22;
                  *((_DWORD *)v14 + 6) = v23;
                  *((_DWORD *)v14 + 7) = v24;
                  v25 = v20[1];
                  *((_DWORD *)v14 + 8) = *v20;
                  *((_DWORD *)v14 + 9) = v25;
                }
                v33 = v14 + 40;
              }
            }
            sub_92620(v13);
            ++v9;
          }
          while ( -858993459 * ((a3[1] - *a3) >> 3) > v9 );
          v26 = v33;
          if ( ptr != v33 )
          {
            v31 = sub_327254(v11);
            sub_E03E0(*(_DWORD *)a1 + 8, &v31);
            v26 = (char *)ptr;
          }
          if ( v26 )
            sub_339E64(v26);
          v6 = *a4;
        }
      }
    }
  }
  *(_BYTE *)(*(_DWORD *)a1 + 1) = 0;
}
