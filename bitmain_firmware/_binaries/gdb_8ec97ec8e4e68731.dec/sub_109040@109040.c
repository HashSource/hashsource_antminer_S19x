int __fastcall sub_109040(int a1, int a2, int a3, _DWORD *a4, int a5, int a6, unsigned int a7)
{
  int *v7; // r10
  _DWORD *v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r1
  int v15; // r0
  int v16; // r1
  unsigned __int64 v17; // r0
  int v18; // r0
  int v19; // r2
  int v20; // r11
  int v21; // r1
  unsigned int v22; // r3
  int v23; // r0
  int v24; // r1
  int v25; // r12
  bool v26; // zf
  int v27; // r1
  int v28; // r12
  unsigned int v29; // r1
  int v30; // r0
  int v31; // r0
  _DWORD *v32; // r6
  int v33; // r8
  int v34; // r0
  int v35; // r8
  int v36; // r0
  int v37; // r8
  int v38; // r0
  int v39; // r1
  int v40; // r12
  __int64 v41; // r2
  int v42; // r12
  int v44; // r6
  int v45; // r0
  int v46; // r8
  int v47; // r0
  int v48; // r6
  int v49; // r1
  int v51; // [sp+Ch] [bp-8h]

  v7 = *(int **)(a1 + 36);
  v51 = *v7;
  v11 = (_DWORD *)sub_1B6B24(a1, dword_47B26C);
  v12 = dword_47B26C;
  *v11 = a2;
  v13 = sub_1B6B24(a1, v12);
  v14 = dword_47B26C;
  *(_DWORD *)(v13 + 4) = a3;
  v15 = sub_1B6B24(a1, v14);
  v16 = dword_47B26C;
  *(_DWORD *)(v15 + 32) = 12;
  *(_DWORD *)(sub_1B6B24(a1, v16) + 16) = a7;
  LODWORD(v17) = sub_2A8BE8(v7);
  if ( a7 > v17 )
    sub_946E0("ridiculous string table size: %d bytes", a7);
  v18 = sub_1B6B24(a1, dword_47B26C);
  v19 = *(_DWORD *)(a1 + 64);
  v20 = v18;
  v21 = *(_DWORD *)(a1 + 60);
  v22 = a7 + 1;
  if ( a7 + 1 > v19 - v21 )
  {
    obstack_newchunk((struct obstack *)(a1 + 48), a7 + 1);
    v21 = *(_DWORD *)(a1 + 60);
    v19 = *(_DWORD *)(a1 + 64);
    v22 = a7 + 1;
  }
  v23 = *(_DWORD *)(a1 + 56);
  v24 = v21 + v22;
  v25 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 60) = v24;
  v26 = v24 == v23;
  if ( v24 == v23 )
    LOBYTE(v22) = *(_BYTE *)(a1 + 88);
  v27 = (v24 + v25) & ~v25;
  *(_DWORD *)(a1 + 60) = v27;
  if ( v26 )
    *(_BYTE *)(a1 + 88) = v22 | 2;
  v28 = *(_DWORD *)(a1 + 204);
  if ( v27 - *(_DWORD *)(a1 + 52) > (unsigned int)(v19 - *(_DWORD *)(a1 + 52)) )
  {
    v27 = v19;
    *(_DWORD *)(a1 + 60) = v19;
  }
  *(_DWORD *)(a1 + 56) = v27;
  v29 = v28 + 1 + a7;
  *(_DWORD *)(v20 + 12) = v23;
  *(_DWORD *)(a1 + 204) = v29;
  if ( sub_2A8A04(v7, v29, a5, a6, 0) < 0
    || (v30 = sub_1B6B24(a1, dword_47B26C), a7 != sub_2A87D8(*(_DWORD *)(v30 + 12), a7, v7)) )
  {
    sub_258B04(v51);
  }
  v31 = sub_20C158();
  sub_E6A20(v31);
  if ( dword_489444 )
  {
    free((void *)dword_489444);
    dword_489444 = 0;
  }
  dword_48966C = 10;
  dword_489444 = (int)sub_93028(0x28u);
  byte_47898C = 1;
  if ( *a4 )
  {
    v32 = a4;
    *(_DWORD *)(sub_1B6B24(a1, dword_47B26C) + 8) = 0;
    do
    {
      v33 = *(_DWORD *)(v32[1] + 36);
      v34 = sub_1B6B24(a1, dword_47B26C);
      v35 = sub_347418(v33, *(_DWORD *)(v34 + 32));
      v36 = sub_1B6B24(a1, dword_47B26C);
      v32 = (_DWORD *)*v32;
      *(_DWORD *)(v36 + 8) += v35;
    }
    while ( v32 );
    v37 = a4[1];
    v38 = sub_1B6B24(a1, dword_47B26C);
    v39 = *a4;
    v40 = a4[1];
    v41 = *(_QWORD *)(v37 + 80);
    dword_47B248 = 0;
    v42 = *(_DWORD *)(v40 + 36);
    dword_47B24C = v39;
    *(_QWORD *)(v38 + 24) = v41;
    dword_47B244 = v42;
  }
  else
  {
    v44 = *(_DWORD *)(a4[1] + 36);
    v45 = sub_1B6B24(a1, dword_47B26C);
    v46 = sub_347418(v44, *(_DWORD *)(v45 + 32));
    v47 = sub_1B6B24(a1, dword_47B26C);
    v48 = a4[1];
    v49 = dword_47B26C;
    *(_DWORD *)(v47 + 8) = v46;
    *(_QWORD *)(sub_1B6B24(a1, v49) + 24) = *(_QWORD *)(v48 + 80);
  }
  return sub_107848((_DWORD *)a1);
}
