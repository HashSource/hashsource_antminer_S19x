int __fastcall sub_1312B8(_DWORD *a1, int a2, int *a3, int a4, int a5)
{
  int v8; // r4
  int result; // r0
  _DWORD *v10; // r3
  int v11; // r10
  int v12; // r9
  int v13; // r4
  int v14; // lr
  int v15; // r8
  _DWORD *v16; // r12
  int v17; // r1
  int v18; // r2
  int v19; // r7
  int v20; // r0
  int v21; // r3
  int *v22; // r1
  int v23; // t1
  int v24; // r0
  int v25; // r2
  char v26; // r6
  int v27; // r12
  int v28; // r8
  int v29; // r9
  int v30; // r10
  int v31; // r11
  int v32; // r5
  int v33; // lr
  int v34; // r5
  int *v35; // r4
  int i; // r6
  int v37; // r0
  int *v38; // r2
  int v39; // r3
  int v40; // r0
  int v41; // r3
  int v42; // r2
  _DWORD *v44; // [sp+4h] [bp-18h]
  _DWORD *v45; // [sp+4h] [bp-18h]
  int v46; // [sp+8h] [bp-14h]
  int v47; // [sp+8h] [bp-14h]
  int v49; // [sp+10h] [bp-Ch]
  int v50; // [sp+10h] [bp-Ch]

  v8 = 1 << a5;
  result = sub_B89D8((int)a1, a2);
  if ( result )
  {
    if ( a5 > 3 )
    {
      v26 = a5 - 2;
      v27 = 1 << (a5 - 2);
      v28 = (((a4 >> v26) - 1) & ~(a4 >> v26)) >> 31;
      v29 = ((((a4 >> v26) ^ 1) - 1) & ~((a4 >> v26) ^ 1)) >> 31;
      v30 = ((((a4 >> v26) ^ 2) - 1) & ~((a4 >> v26) ^ 2)) >> 31;
      v31 = ((((a4 >> v26) ^ 3) - 1) & ~((a4 >> v26) ^ 3)) >> 31;
      v32 = a4 & (v27 - 1);
      if ( a2 > 0 )
      {
        v33 = v32;
        v50 = 4 * v8;
        v45 = (_DWORD *)*a1;
        v47 = *a1 + 4 * a2;
        do
        {
          v34 = 0;
          if ( v27 > 0 )
          {
            v35 = a3;
            for ( i = 0; i != v27; ++i )
            {
              v37 = *v35;
              v38 = &v35[v27];
              v39 = v35[2 * v27];
              ++v35;
              v40 = v28 & v37 | v30 & v39 | v29 & *v38;
              v41 = v31 & v38[2 * v27];
              v42 = ((i ^ v33) - 1) & ~(i ^ v33);
              v34 |= (v41 | v40) & (v42 >> 31);
            }
          }
          a3 = (int *)((char *)a3 + v50);
          *v45++ = v34;
        }
        while ( v45 != (_DWORD *)v47 );
      }
    }
    else if ( a2 > 0 )
    {
      v10 = (_DWORD *)*a1;
      v11 = v8 - 7;
      v12 = 1 << a5;
      v49 = 4 * v8;
      v46 = 0;
      v44 = v10 - 1;
      do
      {
        v13 = 0;
        if ( v12 > 0 )
        {
          if ( v12 > 8 )
          {
            v14 = 0;
            v15 = 1;
            v16 = a3 + 14;
            do
            {
              v17 = *(v16 - 10) & (((((v14 + 4) ^ a4) - 1) & ~((v14 + 4) ^ a4)) >> 31);
              v18 = *(v16 - 8);
              v19 = *(v16 - 11) & (((((v14 + 3) ^ a4) - 1) & ~((v14 + 3) ^ a4)) >> 31)
                  | *(v16 - 12) & (((((v14 + 2) ^ a4) - 1) & ~((v14 + 2) ^ a4)) >> 31)
                  | *(v16 - 13) & ((((v15 ^ a4) - 1) & ~(v15 ^ a4)) >> 31)
                  | *(v16 - 14) & ((((v14 ^ a4) - 1) & ~(v14 ^ a4)) >> 31);
              v20 = *(v16 - 9) & (((((v14 + 5) ^ a4) - 1) & ~((v14 + 5) ^ a4)) >> 31);
              __pld(v16);
              v15 += 8;
              v21 = *(v16 - 7) & (((((v14 + 7) ^ a4) - 1) & ~((v14 + 7) ^ a4)) >> 31)
                  | v18 & (((((v14 + 6) ^ a4) - 1) & ~((v14 + 6) ^ a4)) >> 31)
                  | v20
                  | v19
                  | v17;
              v14 += 8;
              v16 += 8;
              v13 |= v21;
            }
            while ( v11 > v15 );
          }
          else
          {
            v14 = 0;
          }
          v22 = &a3[v14];
          do
          {
            v23 = *v22++;
            v24 = v14 ^ a4;
            v25 = (v14++ ^ a4) - 1;
            v13 |= v23 & ((v25 & ~v24) >> 31);
          }
          while ( v12 > v14 );
        }
        v44[1] = v13;
        ++v44;
        ++v46;
        a3 = (int *)((char *)a3 + v49);
      }
      while ( a2 != v46 );
    }
    result = 1;
    a1[1] = a2;
  }
  return result;
}
