int __fastcall sub_F86D4(int a1, int a2, int a3)
{
  int v4; // r9
  int result; // r0
  int v7; // r8
  bool v8; // zf
  char *v9; // r7
  char *v10; // r6
  unsigned int v11; // r11
  int v12; // r4
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r1
  int v22; // r0
  _DWORD *v23; // r6
  _DWORD *v24; // r9
  int v25; // r0
  int v26; // r11
  int v27; // r6
  char *v28; // r4
  int v29; // r7
  int v30; // r3
  int v31; // r1
  int v32; // r0
  int v33; // r1
  _DWORD *v34; // r9
  int v35; // r0
  int v36; // r1
  int v37; // r7
  char *v38; // r4
  int v39; // r6
  int v40; // r3
  int v41; // r1
  int v42; // r0
  int v43; // r1
  _DWORD *v44; // r6
  int v45; // r0

  v4 = a3;
  result = sub_F85D8(a1, a2, a3);
  v7 = result;
  if ( result )
  {
    v8 = v4 == 0;
    if ( !v4 )
      v8 = a2 == 0;
    if ( !v8 && result > 0 )
    {
      if ( a2 )
      {
        if ( v4 )
        {
          if ( result <= 8 )
          {
            v12 = 0;
          }
          else
          {
            v9 = (char *)(a2 + 32);
            v10 = (char *)(v4 + 32);
            v11 = ((result - 9) & 0xFFFFFFF8) + 8;
            v12 = 0;
            do
            {
              v13 = sub_10C01C(*(_DWORD *)(a1 + 48), v12);
              v14 = *(_DWORD *)(v13 + 4);
              __pld(v10);
              v10 += 32;
              __pld(v9);
              v9 += 32;
              *((_DWORD *)v9 - 16) = v14;
              *((_DWORD *)v10 - 16) = *(_DWORD *)(v13 + 8);
              v15 = sub_10C01C(*(_DWORD *)(a1 + 48), v12 + 1);
              *((_DWORD *)v9 - 15) = *(_DWORD *)(v15 + 4);
              *((_DWORD *)v10 - 15) = *(_DWORD *)(v15 + 8);
              v16 = sub_10C01C(*(_DWORD *)(a1 + 48), v12 + 2);
              *((_DWORD *)v9 - 14) = *(_DWORD *)(v16 + 4);
              *((_DWORD *)v10 - 14) = *(_DWORD *)(v16 + 8);
              v17 = sub_10C01C(*(_DWORD *)(a1 + 48), v12 + 3);
              *((_DWORD *)v9 - 13) = *(_DWORD *)(v17 + 4);
              *((_DWORD *)v10 - 13) = *(_DWORD *)(v17 + 8);
              v18 = sub_10C01C(*(_DWORD *)(a1 + 48), v12 + 4);
              *((_DWORD *)v9 - 12) = *(_DWORD *)(v18 + 4);
              *((_DWORD *)v10 - 12) = *(_DWORD *)(v18 + 8);
              v19 = sub_10C01C(*(_DWORD *)(a1 + 48), v12 + 5);
              *((_DWORD *)v9 - 11) = *(_DWORD *)(v19 + 4);
              *((_DWORD *)v10 - 11) = *(_DWORD *)(v19 + 8);
              v20 = sub_10C01C(*(_DWORD *)(a1 + 48), v12 + 6);
              v21 = v12 + 7;
              v12 += 8;
              *((_DWORD *)v9 - 10) = *(_DWORD *)(v20 + 4);
              *((_DWORD *)v10 - 10) = *(_DWORD *)(v20 + 8);
              v22 = sub_10C01C(*(_DWORD *)(a1 + 48), v21);
              *((_DWORD *)v9 - 9) = *(_DWORD *)(v22 + 4);
              *((_DWORD *)v10 - 9) = *(_DWORD *)(v22 + 8);
            }
            while ( v12 != v11 );
          }
          v23 = (_DWORD *)(a2 + 4 * v12);
          v24 = (_DWORD *)(v4 + 4 * v12);
          do
          {
            v25 = sub_10C01C(*(_DWORD *)(a1 + 48), v12++);
            *v23++ = *(_DWORD *)(v25 + 4);
            *v24++ = *(_DWORD *)(v25 + 8);
          }
          while ( v7 > v12 );
        }
        else
        {
          v37 = result - 7;
          if ( result > 8 )
          {
            v38 = (char *)(a2 + 40);
            v39 = 1;
            do
            {
              v40 = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v4) + 4);
              v41 = v39;
              __pld(v38);
              v39 += 8;
              v38 += 32;
              *((_DWORD *)v38 - 18) = v40;
              *((_DWORD *)v38 - 17) = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v41) + 4);
              *((_DWORD *)v38 - 16) = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v4 + 2) + 4);
              *((_DWORD *)v38 - 15) = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v4 + 3) + 4);
              *((_DWORD *)v38 - 14) = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v4 + 4) + 4);
              *((_DWORD *)v38 - 13) = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v4 + 5) + 4);
              v42 = sub_10C01C(*(_DWORD *)(a1 + 48), v4 + 6);
              v43 = v4 + 7;
              v4 += 8;
              *((_DWORD *)v38 - 12) = *(_DWORD *)(v42 + 4);
              *((_DWORD *)v38 - 11) = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v43) + 4);
            }
            while ( v37 > v39 );
          }
          v44 = (_DWORD *)(a2 + 4 * v4);
          do
          {
            v45 = sub_10C01C(*(_DWORD *)(a1 + 48), v4++);
            *v44++ = *(_DWORD *)(v45 + 4);
          }
          while ( v7 > v4 );
        }
      }
      else if ( v4 )
      {
        v26 = result - 7;
        v27 = 0;
        if ( result > 8 )
        {
          v28 = (char *)(v4 + 40);
          v29 = 1;
          do
          {
            v30 = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v27) + 8);
            v31 = v29;
            __pld(v28);
            v29 += 8;
            v28 += 32;
            *((_DWORD *)v28 - 18) = v30;
            *((_DWORD *)v28 - 17) = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v31) + 8);
            *((_DWORD *)v28 - 16) = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v27 + 2) + 8);
            *((_DWORD *)v28 - 15) = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v27 + 3) + 8);
            *((_DWORD *)v28 - 14) = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v27 + 4) + 8);
            *((_DWORD *)v28 - 13) = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v27 + 5) + 8);
            v32 = sub_10C01C(*(_DWORD *)(a1 + 48), v27 + 6);
            v33 = v27 + 7;
            v27 += 8;
            *((_DWORD *)v28 - 12) = *(_DWORD *)(v32 + 8);
            *((_DWORD *)v28 - 11) = *(_DWORD *)(sub_10C01C(*(_DWORD *)(a1 + 48), v33) + 8);
          }
          while ( v29 < v26 );
        }
        v34 = (_DWORD *)(v4 + 4 * v27);
        do
        {
          v35 = sub_10C01C(*(_DWORD *)(a1 + 48), v27++);
          *v34++ = *(_DWORD *)(v35 + 8);
        }
        while ( v7 > v27 );
      }
      else
      {
        do
        {
          v36 = v4++;
          sub_10C01C(*(_DWORD *)(a1 + 48), v36);
        }
        while ( v7 != v4 );
      }
    }
    return 1;
  }
  return result;
}
