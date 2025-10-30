void __fastcall sub_10931C(int a1, int a2, int a3, int a4, unsigned int a5)
{
  int *v6; // r7
  void *v8; // r0
  _DWORD *v9; // r3
  unsigned int v10; // r1
  void *v11; // r10
  unsigned int v12; // r9
  int v13; // r12
  unsigned int v14; // r0
  unsigned int v15; // r2
  unsigned int v16; // r11
  unsigned int *v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r1
  int v21; // r0
  int v22; // r9
  int v23; // r0
  int v24; // r9
  int v25; // r0
  int v26; // r1
  int v27; // r0
  int v28; // r1
  int v29; // r0
  int v30; // r1
  unsigned __int64 v31; // r0
  int v32; // r0
  int v33; // r2
  int v34; // r3
  int v35; // r11
  char v36; // r1
  int v37; // r0
  int v38; // r3
  int v39; // r12
  unsigned int v40; // lr
  int v41; // r1
  unsigned int v42; // r3
  int v43; // r12
  int v44; // r1
  int v45; // r0
  int v46; // r0
  void *v47; // r0
  int v48; // lr
  int v51; // [sp+14h] [bp-8h]

  v6 = *(int **)(a1 + 36);
  v51 = *v6;
  v8 = sub_9253C((int)nullsub_39, 0);
  v9 = (_DWORD *)v6[25];
  if ( !v9 )
LABEL_30:
    sub_946E0("Can't find any code sections in symbol file");
  v10 = 0;
  v11 = v8;
  v12 = 0;
  v13 = 0;
  do
  {
    while ( (v9[5] & 0x10) == 0 )
    {
LABEL_7:
      v9 = (_DWORD *)v9[3];
      if ( !v9 )
        goto LABEL_11;
    }
    v14 = v9[7];
    v15 = v14 + v9[9];
    if ( v13 )
    {
      if ( v12 >= v14 )
        v12 = v9[7];
      if ( v10 < v15 )
        v10 = v14 + v9[9];
      goto LABEL_7;
    }
    v9 = (_DWORD *)v9[3];
    v10 = v15;
    v12 = v14;
    v13 = 1;
  }
  while ( v9 );
LABEL_11:
  if ( !v13 )
    goto LABEL_30;
  v16 = v10 - v12;
  v17 = (unsigned int *)sub_1B6B24(a1, dword_47B26C);
  v18 = dword_47B26C;
  *v17 = v12;
  v19 = sub_1B6B24(a1, v18);
  v20 = dword_47B26C;
  *(_DWORD *)(v19 + 4) = v16;
  v21 = sub_1B6B24(a1, v20);
  v22 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(v21 + 32) = 12;
  v23 = sub_1B6B24(a1, dword_47B26C);
  v24 = sub_347418(v22, *(_DWORD *)(v23 + 32));
  v25 = sub_1B6B24(a1, dword_47B26C);
  v26 = dword_47B26C;
  *(_DWORD *)(v25 + 8) = v24;
  v27 = sub_1B6B24(a1, v26);
  v28 = dword_47B26C;
  *(_DWORD *)(v27 + 16) = a5;
  v29 = sub_1B6B24(a1, v28);
  v30 = dword_47B26C;
  *(_QWORD *)(v29 + 24) = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(sub_1B6B24(a1, v30) + 60) = a2;
  LODWORD(v31) = sub_2A8BE8(v6);
  if ( a5 > v31 )
    sub_946E0("ridiculous string table size: %d bytes", a5);
  v32 = sub_1B6B24(a1, dword_47B26C);
  v33 = *(_DWORD *)(a1 + 64);
  v34 = *(_DWORD *)(a1 + 60);
  v35 = v32;
  v36 = v33 - v34;
  if ( a5 + 1 > v33 - v34 )
  {
    obstack_newchunk((struct obstack *)(a1 + 48), a5 + 1);
    v34 = *(_DWORD *)(a1 + 60);
    v33 = *(_DWORD *)(a1 + 64);
  }
  v37 = *(_DWORD *)(a1 + 56);
  v38 = v34 + a5 + 1;
  v39 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 60) = v38;
  if ( v38 == v37 )
    v36 = *(_BYTE *)(a1 + 88);
  v40 = v33 - v39;
  if ( v38 == v37 )
    *(_BYTE *)(a1 + 88) = v36 | 2;
  v41 = (v38 + *(_DWORD *)(a1 + 72)) & ~*(_DWORD *)(a1 + 72);
  v42 = v41 - v39;
  v43 = *(_DWORD *)(a1 + 204);
  *(_DWORD *)(a1 + 60) = v41;
  if ( v42 > v40 )
  {
    v41 = v33;
    *(_DWORD *)(a1 + 60) = v33;
  }
  *(_DWORD *)(a1 + 56) = v41;
  v44 = a5 + v43 + 1;
  *(_DWORD *)(v35 + 12) = v37;
  *(_DWORD *)(a1 + 204) = v44;
  if ( sub_2A8A04(v6, v44, a3, a4, 0) < 0
    || (v45 = sub_1B6B24(a1, dword_47B26C), a5 != sub_2A87D8(*(_DWORD *)(v45 + 12), a5, v6)) )
  {
    sub_258B04(v51);
  }
  v46 = sub_20C158();
  sub_E6A20(v46);
  if ( dword_489444 )
  {
    free((void *)dword_489444);
    dword_489444 = 0;
  }
  dword_48966C = 10;
  v47 = sub_93028(0x28u);
  v48 = *(_DWORD *)(a2 + 36);
  dword_489444 = (int)v47;
  byte_47898C = 1;
  dword_47B244 = v48;
  dword_47B248 = 0;
  dword_47B240 = ((int (__fastcall *)(int, int, _DWORD))loc_214DE8)(a1, a2, 0);
  if ( dword_47B240 )
    sub_9253C((int)sub_2589B8, (int)&dword_47B240);
  sub_107848((_DWORD *)a1);
  sub_92620(v11);
}
