int __fastcall sub_2C9B28(int a1, void (*a2)(void), int a3)
{
  int *v4; // r9
  int v6; // r10
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int **v11; // r4
  _DWORD *v12; // r7
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r9
  _DWORD *v23; // r9
  int v24; // r9
  int v25; // r7
  int *v26; // t1
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r0
  int v37; // r1
  int v38; // r2
  int v40; // r0
  int **v41; // [sp+0h] [bp-84h]
  void *ptr; // [sp+8h] [bp-7Ch] BYREF
  _DWORD v43[13]; // [sp+Ch] [bp-78h] BYREF
  int v44; // [sp+40h] [bp-44h] BYREF
  int v45; // [sp+44h] [bp-40h]
  int v46; // [sp+48h] [bp-3Ch]
  int v47; // [sp+4Ch] [bp-38h]
  int v48; // [sp+50h] [bp-34h]
  int v49; // [sp+54h] [bp-30h]
  int v50; // [sp+58h] [bp-2Ch]
  int v51; // [sp+5Ch] [bp-28h]
  int v52; // [sp+60h] [bp-24h]
  int v53; // [sp+64h] [bp-20h]
  int v54; // [sp+68h] [bp-1Ch]
  int v55; // [sp+6Ch] [bp-18h]
  int v56; // [sp+70h] [bp-14h]
  int v57; // [sp+74h] [bp-10h]
  int v58; // [sp+78h] [bp-Ch]
  int v59; // [sp+7Ch] [bp-8h]

  v4 = *(int **)(a1 + 160);
  v6 = a1 + 4;
  v8 = v4[1];
  v9 = v4[2];
  v10 = v4[3];
  v11 = (int **)v4[16];
  v12 = (_DWORD *)v4[17];
  v44 = *v4;
  v45 = v8;
  v46 = v9;
  v47 = v10;
  v13 = v4[5];
  v14 = v4[6];
  v15 = v4[7];
  v48 = v4[4];
  v49 = v13;
  v50 = v14;
  v51 = v15;
  v16 = v4[9];
  v17 = v4[10];
  v18 = v4[11];
  v52 = v4[8];
  v53 = v16;
  v54 = v17;
  v55 = v18;
  v19 = v4[13];
  v20 = v4[14];
  v21 = v4[15];
  v56 = v4[12];
  v57 = v19;
  v58 = v20;
  v59 = v21;
  v50 = 0;
  v49 = 0;
  sub_2C946C(a1 + 4, &v44, v43);
  ((void (__fastcall *)(_DWORD *, int, int))a2)(v43, 52, a3);
  v22 = v4[12];
  if ( v22 )
  {
    v23 = &v12[8 * v22];
    do
    {
      sub_2C99E8(a1, v12, (int)&v44);
      v12 += 8;
      ((void (__fastcall *)(int *, int, int))a2)(&v44, 32, a3);
    }
    while ( v12 != v23 );
  }
  v24 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 532);
  if ( v24 )
  {
    v25 = 0;
    v41 = &v11[v24];
    do
    {
      v26 = *v11++;
      v27 = v26[1];
      v28 = v26[2];
      v29 = v26[3];
      v44 = *v26;
      v45 = v27;
      v46 = v28;
      v47 = v29;
      v30 = v26[5];
      v31 = v26[6];
      v32 = v26[7];
      v48 = v26[4];
      v49 = v30;
      v50 = v31;
      v51 = v32;
      v33 = v26[9];
      v34 = v26[10];
      v35 = v26[11];
      v52 = v26[8];
      v53 = v33;
      v54 = v34;
      v55 = v35;
      v36 = v26[12];
      v37 = v26[13];
      v48 = 0;
      v49 = 0;
      v56 = v36;
      v57 = v37;
      sub_2C9248(v6, &v44, (int)v43);
      ((void (__fastcall *)(_DWORD *, int, int))a2)(v43, 40, a3);
      if ( v45 != 8 )
      {
        ptr = 0;
        if ( v56
          || (v40 = sub_2CFEF4(a1, v25, v38)) != 0
          && (*(_DWORD *)(v40 + 108) || (*(_DWORD *)(v40 + 20) &= ~0x4000u, sub_2ADFDC(a1, v40, (int *)&ptr)) && ptr) )
        {
          a2();
          if ( ptr )
            free(ptr);
        }
      }
      ++v25;
    }
    while ( v41 != v11 );
  }
  return 1;
}
