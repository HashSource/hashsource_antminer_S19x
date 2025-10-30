int __fastcall sub_13063C(int *a1, int a2, _DWORD *a3, int a4)
{
  int v4; // r7
  _DWORD *v5; // r9
  unsigned int v6; // lr
  int v7; // r6
  int v8; // r2
  _DWORD *v9; // r2
  int v10; // r1
  int v11; // r12
  int v12; // r3
  int v13; // r5
  int v14; // r4
  int v15; // r10
  int v16; // r3
  int v17; // r11
  int v18; // r5
  int v19; // r3
  int v20; // r10
  int v21; // r4
  int v22; // r3
  int v23; // r4
  int v24; // r11
  int v25; // r3
  int v26; // r4
  int v27; // r3
  bool v28; // cc
  int v29; // r5
  unsigned int v30; // r10
  _DWORD *v31; // r4
  int v32; // r1
  int v34; // [sp+8h] [bp-Ch]
  int v35; // [sp+Ch] [bp-8h]

  v4 = a2;
  if ( a2 || (v4 = a3[1]) != 0 )
  {
    v5 = (_DWORD *)a3[7];
    if ( v5 )
    {
      v6 = *(_DWORD *)(v4 + 4);
      if ( a1[2] >= (int)v6 )
      {
        v7 = a1[1];
        if ( v6 )
        {
          v8 = *a1;
          v34 = *a1;
          if ( v6 <= 8 )
          {
            v30 = 0;
          }
          else
          {
            v9 = (_DWORD *)(v8 + 80);
            v10 = 1 - v7;
            v11 = 0;
            v35 = a4;
            do
            {
              v12 = *(v9 - 18);
              v13 = *(v9 - 20);
              v14 = *(v9 - 19);
              __pld(v9);
              v9 += 8;
              v15 = v12 & ((v10 + 1) >> 31);
              v16 = *(v9 - 25);
              v17 = v10 + 4;
              *(v9 - 26) = v15;
              *(v9 - 28) = v13 & ((v10 - 1) >> 31);
              v18 = v16 & ((v10 + 2) >> 31);
              v19 = *(v9 - 24);
              *(v9 - 27) = v14 & (v10 >> 31);
              v20 = v10 + 6;
              *(v9 - 25) = v18;
              v21 = v19 & ((v10 + 3) >> 31);
              v22 = *(v9 - 23);
              *(v9 - 24) = v21;
              v23 = v10 + 5;
              v10 += 8;
              v24 = v22 & (v17 >> 31);
              v25 = *(v9 - 22);
              *(v9 - 23) = v24;
              v26 = v25 & (v23 >> 31);
              v27 = *(v9 - 21);
              *(v9 - 22) = v26;
              v28 = v6 - 7 > v11 + 9;
              v29 = v27 & (v20 >> 31);
              v30 = v11 + 8;
              v11 += 8;
              *(v9 - 21) = v29;
            }
            while ( v28 );
            a4 = v35;
            v8 = v34;
          }
          v31 = (_DWORD *)(v8 + 4 * v30);
          do
          {
            v32 = v30 - v7;
            ++v30;
            *v31++ &= v32 >> 31;
          }
          while ( v6 > v30 );
        }
        a1[1] = (v6 ^ v7) & ((int)(v6 - v7) >> 31) ^ v6;
      }
      return sub_B93C0(a1, (int)a1, v4, v5, a4);
    }
    else
    {
      return sub_133F3C(a1, a1, v4, a3[3], a4);
    }
  }
  else
  {
    sub_D0048(3, 101, 107, (int)"crypto/bn/bn_blind.c", 175);
    return 0;
  }
}
