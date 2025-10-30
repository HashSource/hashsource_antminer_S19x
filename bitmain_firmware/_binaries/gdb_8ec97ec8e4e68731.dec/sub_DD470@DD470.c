int __fastcall sub_DD470(_BYTE *a1)
{
  int v1; // r4
  int v2; // r0
  _BYTE *v3; // r0
  _BYTE *v4; // r5
  int *v5; // r4
  int *v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r3
  int v9; // r5
  int v10; // r0
  _DWORD *v11; // r4
  int v12; // r1
  int v13; // r0
  int v14; // r3
  int v15; // r1
  int v16; // r3
  int v17; // r1
  int v18; // r2
  _BYTE *v20; // [sp+2Ch] [bp-50h] BYREF
  int v21; // [sp+30h] [bp-4Ch] BYREF
  int v22; // [sp+34h] [bp-48h] BYREF
  _BYTE v23[4]; // [sp+38h] [bp-44h] BYREF
  int v24; // [sp+3Ch] [bp-40h]
  int v25; // [sp+40h] [bp-3Ch]
  int v26; // [sp+44h] [bp-38h]
  int v27; // [sp+48h] [bp-34h]
  _BYTE v28[4]; // [sp+4Ch] [bp-30h] BYREF
  int v29; // [sp+50h] [bp-2Ch]
  int v30; // [sp+54h] [bp-28h]
  int v31; // [sp+58h] [bp-24h]
  int v32; // [sp+5Ch] [bp-20h]
  void *ptr; // [sp+60h] [bp-1Ch] BYREF
  _BYTE v34[20]; // [sp+68h] [bp-14h] BYREF

  v20 = a1;
  v23[0] = 0;
  v23[1] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28[0] = 0;
  v28[1] = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( sub_232564() < 0 )
    sub_946E0("This target does not support hardware ranged breakpoints.");
  v1 = sub_C6A54();
  v2 = sub_232564();
  if ( off_489A04(&dword_4899A0, 2, v1 + v2, 0) < 0 )
    sub_946E0("Hardware breakpoints used exceeds limit.");
  v3 = (_BYTE *)sub_9360C(v20);
  v4 = v3;
  v20 = v3;
  if ( !v3 || !*v3 )
    sub_946E0("No address range specified.");
  sub_19DBE0(&v21, &v20, off_46D5A4[0], 0);
  sub_DD2C0(v21, (int)v23);
  if ( *v20 != 44 )
    sub_946E0("Too few arguments.");
  if ( v26 == v25 )
    sub_946E0("Could not find location of the beginning of the range.");
  if ( (unsigned int)(v26 - v25) > 0x1F || (v5 = *(int **)(v25 + 4), *(_DWORD *)(v25 + 8) - (_DWORD)v5 != 40) )
    sub_946E0("Cannot create a ranged breakpoint with multiple locations.");
  ptr = v34;
  sub_CB204(&ptr, v4, (int)v20++);
  v20 = (_BYTE *)sub_9360C(v20);
  sub_19DBE0(&v22, &v20, off_46D5A4[0], 0);
  ((void (__fastcall *)(int, int, _DWORD, int, int, _BYTE *, _DWORD, _DWORD))loc_19BDF0)(
    v22,
    1,
    0,
    v5[1],
    v5[4],
    v28,
    0,
    0);
  if ( v30 == v31 )
    sub_946E0("Could not find location of the end of the range.");
  if ( (unsigned int)(v31 - v30) > 0x1F || (v6 = *(int **)(v30 + 4), *(_DWORD *)(v30 + 8) - (_DWORD)v6 != 40) )
    sub_946E0("Cannot create a ranged breakpoint with multiple locations.");
  v7 = sub_C8B2C(*v6, v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v6[7], v6[8], v6[9]);
  v8 = v5[5];
  if ( v8 > v7 )
    sub_946E0("Invalid address range, end precedes start.");
  v9 = 1 - v8 + v7;
  if ( v9 < 0 )
    sub_946E0("Address range too large.");
  if ( v9 == 1 )
  {
    sub_DAA34((int)ptr, 2);
    if ( v22 )
      ((void (__fastcall *)(int *))loc_19D154)(&v22);
    if ( ptr != v34 )
      sub_339E64(ptr);
    if ( v21 )
      goto LABEL_24;
  }
  else
  {
    v10 = sub_B894C(v7);
    v11 = (_DWORD *)sub_D02E0(
                      v10,
                      *v5,
                      v5[1],
                      v5[2],
                      v5[3],
                      v5[4],
                      v5[5],
                      v5[6],
                      v5[7],
                      v5[8],
                      v5[9],
                      2,
                      (int)&unk_478454);
    sub_C8514(dword_478360 + 1);
    v12 = v11[19];
    v13 = dword_478360;
    v11[5] = 3;
    v14 = v21;
    v11[6] = v13;
    v21 = 0;
    v11[19] = v14;
    if ( v12 )
      ((void (__fastcall *)(_DWORD *))loc_19D154)(v11 + 19);
    v15 = v11[21];
    v16 = v22;
    v22 = 0;
    v11[21] = v16;
    if ( v15 )
      ((void (__fastcall *)(_DWORD *))loc_19D154)(v11 + 21);
    *(_DWORD *)(v11[7] + 56) = v9;
    sub_C7A04((int)v11);
    sub_1B9BD8(v11);
    sub_D72EC(1, v17, v18);
    if ( v22 )
      ((void (__fastcall *)(int *))loc_19D154)(&v22);
    if ( ptr != v34 )
      sub_339E64(ptr);
    if ( v21 )
LABEL_24:
      ((void (__fastcall *)(int *))loc_19D154)(&v21);
  }
  sub_199294(v28);
  return sub_199294(v23);
}
