unsigned int *__fastcall sub_1749B4(_DWORD *a1, int a2, unsigned __int8 *a3)
{
  _DWORD *v6; // r7
  _DWORD *v7; // r8
  unsigned int v8; // r0
  unsigned __int8 *v9; // r1
  _DWORD *v10; // r6
  unsigned __int8 *v11; // r3
  int v12; // r1
  int v13; // lr
  unsigned __int8 *v14; // r3
  int v15; // r12
  unsigned __int8 *v16; // r3
  int v17; // lr
  int v18; // r3
  char *v19; // r8
  int v20; // r4
  int v21; // r7
  unsigned int v22; // r2
  int v23; // r3
  int v24; // r3
  int v25; // r2
  int v26; // r3
  _DWORD *v27; // r7
  unsigned int *result; // r0
  int v29; // r3
  unsigned int v30; // [sp+0h] [bp-Ch] BYREF
  int v31; // [sp+4h] [bp-8h]

  v6 = a1;
  v7 = a1 + 18;
  memcpy(a1, &unk_1E4164, 0x1048u);
  if ( a2 > 72 )
    v8 = (unsigned int)(a3 + 72);
  else
    v8 = (unsigned int)&a3[a2];
  v9 = a3;
  v10 = a1;
  do
  {
    v11 = v9 + 1;
    v12 = *v9;
    if ( v8 <= (unsigned int)v11 )
      v11 = a3;
    v13 = *v11;
    v14 = v11 + 1;
    if ( v8 <= (unsigned int)v14 )
      v14 = a3;
    v15 = *v14;
    v16 = v14 + 1;
    if ( v8 <= (unsigned int)v16 )
      v16 = a3;
    v17 = v13 | (v12 << 8);
    v9 = v16 + 1;
    if ( v8 <= (unsigned int)(v16 + 1) )
      v9 = a3;
    *v10++ ^= *v16 | ((v15 | (v17 << 8)) << 8);
  }
  while ( v10 != v7 );
  v30 = 0;
  v31 = 0;
  do
  {
    sub_173D20(&v30, a1);
    v18 = v31;
    *v6 = v30;
    v6[1] = v18;
    v6 += 2;
  }
  while ( v6 != v7 );
  v19 = (char *)(a1 + 35);
  v20 = 512;
  v21 = 0;
  do
  {
    sub_173D20(&v30, a1);
    v22 = v30;
    v23 = v31;
    __pld(v19);
    v21 += 8;
    *((_DWORD *)v19 - 17) = v22;
    v20 -= 4;
    *((_DWORD *)v19 - 16) = v23;
    v19 += 32;
    sub_173D20(&v30, a1);
    v24 = v31;
    *((_DWORD *)v19 - 23) = v30;
    *((_DWORD *)v19 - 22) = v24;
    sub_173D20(&v30, a1);
    v25 = v31;
    *((_DWORD *)v19 - 21) = v30;
    *((_DWORD *)v19 - 20) = v25;
    sub_173D20(&v30, a1);
    v26 = v31;
    *((_DWORD *)v19 - 19) = v30;
    *((_DWORD *)v19 - 18) = v26;
  }
  while ( v21 != 1016 );
  v27 = a1 + 1034;
  do
  {
    result = sub_173D20(&v30, a1);
    v29 = v31;
    --v20;
    *v27 = v30;
    v27[1] = v29;
    v27 += 2;
  }
  while ( v20 );
  return result;
}
