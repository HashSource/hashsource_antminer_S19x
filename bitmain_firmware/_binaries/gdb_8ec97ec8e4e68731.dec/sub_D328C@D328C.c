void __fastcall sub_D328C(int a1, int a2)
{
  _DWORD *v2; // r5
  _BYTE *v4; // r12
  _BYTE *v6; // lr
  size_t v7; // r10
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  char *v12; // r4
  int v13; // r8
  int v14; // r9
  __int64 v15; // r0
  int v16; // r2
  int v17; // r9
  void *v18; // r3
  char v19; // r9
  void *v20; // r0
  _BYTE *v21; // r1
  _BYTE *v22; // r2
  int v23; // r8
  unsigned int v24; // r3
  size_t v25; // r10
  void *v26; // r0
  int v27; // r1
  int v28; // r2
  _BYTE *v29; // r8
  int v30; // r3
  char v31; // t1
  char v32; // t1
  void *v33; // r0
  bool v34; // zf
  void *v35; // r0
  char v36; // [sp+8h] [bp-54h]
  char v37; // [sp+Ch] [bp-50h]
  int v38; // [sp+14h] [bp-48h]
  __int64 v39; // [sp+18h] [bp-44h]
  int v40; // [sp+20h] [bp-3Ch]
  _DWORD v41[4]; // [sp+24h] [bp-38h] BYREF
  __int64 v42; // [sp+34h] [bp-28h] BYREF
  void *v43; // [sp+3Ch] [bp-20h] BYREF
  char *v44; // [sp+40h] [bp-1Ch]
  char *v45; // [sp+44h] [bp-18h]
  void *ptr; // [sp+48h] [bp-14h] BYREF
  unsigned int v47; // [sp+4Ch] [bp-10h]
  unsigned int v48; // [sp+50h] [bp-Ch]
  int v49; // [sp+54h] [bp-8h]

  v2 = (_DWORD *)(a1 + 104);
  v4 = *(_BYTE **)(a1 + 128);
  v6 = *(_BYTE **)(a1 + 132);
  v7 = 0;
  v8 = *(_DWORD *)(a1 + 104);
  v9 = v2[1];
  v10 = v2[2];
  v11 = v2[3];
  v12 = (char *)v41;
  v43 = 0;
  v13 = v6 - v4;
  v14 = *(_DWORD *)(a1 + 88);
  v41[0] = v8;
  v41[1] = v9;
  v41[2] = v10;
  v41[3] = v11;
  v15 = *(_QWORD *)(a1 + 92);
  LODWORD(v42) = *(_DWORD *)(a1 + 120);
  v16 = *(_DWORD *)(a1 + 100);
  v38 = v14;
  v36 = *(_BYTE *)(a1 + 41);
  v17 = *(_DWORD *)(a1 + 124);
  v18 = (void *)*(unsigned __int8 *)(a1 + 36);
  v44 = 0;
  HIDWORD(v42) = v17;
  v37 = (char)v18;
  if ( !((v6 - v4) >> 2) )
    v18 = (void *)((v6 - v4) >> 2);
  v45 = 0;
  if ( !((v6 - v4) >> 2) )
    v7 = v6 - v4;
  v39 = v15;
  v40 = v16;
  v19 = *(_BYTE *)(a1 + 39);
  if ( (v6 - v4) >> 2 )
  {
    if ( (unsigned int)((v6 - v4) >> 2) > 0x3FFFFFFF )
      sub_33D01C();
    v20 = sub_9836C(v6 - v4);
    v4 = *(_BYTE **)(a1 + 128);
    v18 = v20;
    v6 = *(_BYTE **)(a1 + 132);
    v7 = v6 - v4;
  }
  v45 = (char *)v18 + v13;
  v43 = v18;
  v44 = (char *)v18;
  if ( v4 != v6 )
    v18 = memmove(v18, v4, v7);
  v21 = *(_BYTE **)(a1 + 140);
  v22 = *(_BYTE **)(a1 + 144);
  v44 = (char *)v18 + v7;
  ptr = 0;
  v23 = v22 - v21;
  v47 = 0;
  v24 = (v22 - v21) >> 2;
  v48 = 0;
  if ( v24 )
  {
    if ( v24 > 0x3FFFFFFF )
      sub_33D01C();
    v26 = sub_9836C(v22 - v21);
    v21 = *(_BYTE **)(a1 + 140);
    v24 = (unsigned int)v26;
    v22 = *(_BYTE **)(a1 + 144);
    v25 = v22 - v21;
  }
  else
  {
    v25 = v22 - v21;
  }
  v48 = v24 + v23;
  ptr = (void *)v24;
  v47 = v24;
  if ( v22 != v21 )
    v24 = (unsigned int)memmove((void *)v24, v21, v25);
  v27 = *(_DWORD *)(a1 + 152);
  v28 = *(_DWORD *)(a1 + 16);
  v47 = v24 + v25;
  v49 = v27;
  if ( (unsigned int)(*(_DWORD *)(v28 + 12) - 27) <= 2 && *(_BYTE *)(a1 + 41) )
  {
LABEL_32:
    sub_94700(
      (int)"breakpoint.c",
      11782,
      "%s: Assertion `%s' failed.",
      "void swap_insertion(bp_location*, bp_location*)",
      "!left->duplicate");
    v35 = v43;
    if ( v43 )
      sub_339E64(v43);
    sub_338FFC(v35);
  }
  if ( (unsigned int)(*(_DWORD *)(*(_DWORD *)(a2 + 16) + 12) - 27) <= 2 && *(_BYTE *)(a2 + 41) )
  {
    sub_94700(
      (int)"breakpoint.c",
      11784,
      "%s: Assertion `%s' failed.",
      "void swap_insertion(bp_location*, bp_location*)",
      "!right->duplicate");
    goto LABEL_32;
  }
  v29 = (_BYTE *)(a2 + 104);
  v30 = a2 + 103;
  *(_BYTE *)(a1 + 39) = *(_BYTE *)(a2 + 39);
  *(_BYTE *)(a1 + 41) = *(_BYTE *)(a2 + 41);
  *(_BYTE *)(a1 + 36) = *(_BYTE *)(a2 + 36);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 100);
  do
  {
    v31 = *(_BYTE *)++v30;
    *(_BYTE *)v2 = v31;
    v2 = (_DWORD *)((char *)v2 + 1);
  }
  while ( v2 != (_DWORD *)(a1 + 120) );
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a2 + 124);
  sub_DF71C(a1 + 128, a2 + 128);
  sub_DF71C(a1 + 140, a2 + 140);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
  *(_BYTE *)(a2 + 41) = v36;
  *(_BYTE *)(a2 + 39) = v19;
  *(_DWORD *)(a2 + 88) = v38;
  *(_BYTE *)(a2 + 36) = v37;
  *(_QWORD *)(a2 + 92) = v39;
  *(_DWORD *)(a2 + 100) = v40;
  do
  {
    v32 = *v12++;
    *v29++ = v32;
  }
  while ( &v42 != (__int64 *)v12 );
  *(_QWORD *)(a2 + 120) = v42;
  sub_DF71C(a2 + 128, &v43);
  sub_DF71C(a2 + 140, &ptr);
  v33 = ptr;
  v34 = ptr == 0;
  *(_DWORD *)(a2 + 152) = v49;
  if ( !v34 )
    sub_339E64(v33);
  if ( v43 )
    sub_339E64(v43);
}
