int __fastcall sub_484D8(int result, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r0
  int *v4; // lr
  char *v5; // r12
  int v6; // r3
  int v7; // r4
  int v8; // r1
  int v9; // t1
  unsigned int v10; // lr
  char *v11; // r3
  unsigned int v12; // t1
  int *v13; // r0
  int **v14; // r3
  int *v15; // r2
  int *v16; // t1
  int v17; // r6
  int v18; // r3
  int v19; // r4
  int v20; // r10
  int v21; // r9
  int v22; // r5
  int v23; // r8
  int v24; // r7
  int v25; // r11
  int v26; // r2
  int v27; // r12
  int v28; // r3
  int v29; // lr
  int v30; // r1
  int **v31; // r1
  int *v32; // r3
  int *v33; // t1
  bool v34; // zf
  unsigned __int8 *v35; // [sp+4h] [bp-164h]
  int *v36; // [sp+8h] [bp-160h]
  unsigned __int8 *v37; // [sp+14h] [bp-154h]
  int *v38; // [sp+18h] [bp-150h]
  int *v39; // [sp+1Ch] [bp-14Ch] BYREF
  int v40; // [sp+20h] [bp-148h]
  int v41; // [sp+24h] [bp-144h]
  int v42; // [sp+28h] [bp-140h]
  int v43; // [sp+2Ch] [bp-13Ch]
  int v44; // [sp+30h] [bp-138h]
  int v45; // [sp+34h] [bp-134h]
  int v46; // [sp+38h] [bp-130h]
  int v47; // [sp+3Ch] [bp-12Ch] BYREF
  _DWORD v48[15]; // [sp+40h] [bp-128h] BYREF
  char v49; // [sp+7Ch] [bp-ECh] BYREF
  char v50; // [sp+100h] [bp-68h] BYREF

  if ( a3 > 0 )
  {
    v38 = (int *)(result + 136);
    v35 = a2;
    v37 = &a2[64 * a3];
    v39 = (int *)(result + 168);
    do
    {
      v3 = v35;
      v4 = &v47;
      v5 = (char *)v48;
      do
      {
        v6 = v3[1];
        v7 = v3[2];
        v8 = v3[3];
        v9 = *v3;
        v3 += 4;
        v4[1] = (v6 << 16) | (v7 << 8) | v8 | (v9 << 24);
        ++v4;
      }
      while ( &v49 != (char *)v4 );
      do
      {
        v10 = *((_DWORD *)v5 + 14);
        v11 = v5;
        v12 = *((_DWORD *)v5 + 1);
        v5 += 4;
        *((_DWORD *)v5 + 15) = (__ROR4__(v10, 19) ^ __ROR4__(v10, 17) ^ (v10 >> 10))
                             + *((_DWORD *)v11 + 9)
                             + *(_DWORD *)v11
                             + (__ROR4__(v12, 18) ^ __ROR4__(v12, 7) ^ (v12 >> 3));
      }
      while ( &v50 != v5 );
      v13 = v39;
      v14 = &v39;
      v15 = v38;
      do
      {
        v16 = (int *)*v15++;
        v14[1] = v16;
        ++v14;
      }
      while ( v13 != v15 );
      v36 = v15;
      v17 = 0;
      v18 = v47;
      v19 = v44;
      v20 = v45;
      v21 = v46;
      v22 = v40;
      v23 = v41;
      v24 = v42;
      v25 = v43;
      while ( 1 )
      {
        v26 = (__ROR4__(v19, 11) ^ __ROR4__(v19, 6) ^ __ROR4__(v19, 25)) + (v21 & ~v19 ^ v20 & v19) + v48[v17];
        v27 = dword_9E324[v17++];
        v28 = v26 + v27 + v18;
        v29 = v25 + v28;
        v30 = (__ROR4__(v22, 13) ^ __ROR4__(v22, 2) ^ __ROR4__(v22, 22)) + ((v24 ^ v23) & v22 ^ v24 & v23) + v28;
        v25 = v24;
        v18 = v21;
        if ( v17 == 64 )
          break;
        v24 = v23;
        v21 = v20;
        v23 = v22;
        v20 = v19;
        v22 = v30;
        v19 = v29;
      }
      v40 = v30;
      v31 = &v39;
      v32 = v38;
      v47 = v21;
      v44 = v29;
      v45 = v19;
      v46 = v20;
      v41 = v22;
      v42 = v23;
      v43 = v24;
      do
      {
        result = *v32;
        v33 = v31[1];
        ++v31;
        *v32++ += (int)v33;
      }
      while ( v36 != v32 );
      v34 = v37 == v35 + 64;
      v35 += 64;
    }
    while ( !v34 );
  }
  return result;
}
