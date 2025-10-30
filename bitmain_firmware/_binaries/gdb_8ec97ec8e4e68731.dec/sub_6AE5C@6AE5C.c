void __fastcall sub_6AE5C(const char *a1, int *a2)
{
  _DWORD *v3; // r4
  int v4; // r7
  int v5; // r8
  int v6; // r6
  int v7; // r5
  int v8; // r12
  int v9; // r0
  int v10; // r7
  int v11; // r2
  int v12; // r0
  int v13; // r0
  int v14; // r0
  _DWORD *v15; // r6
  __int64 v16; // r0
  int v17; // r4
  int v18; // r5
  int v19; // r3
  int v20; // t1
  int v21; // r0
  int *v22; // [sp+0h] [bp-44h] BYREF
  int *v23; // [sp+4h] [bp-40h]
  const char *v24; // [sp+8h] [bp-3Ch]
  char *v25; // [sp+Ch] [bp-38h]
  int v26; // [sp+10h] [bp-34h]
  int v27; // [sp+14h] [bp-30h]
  _DWORD v28[3]; // [sp+18h] [bp-2Ch] BYREF

  v23 = a2;
  v24 = a1;
  strlen(a1);
  sprintf((char *)&v22, "%s@got.plt", a1);
  v3 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v3 )
    return;
  v25 = ".plt";
  v22 = &dword_4899A0;
  while ( 1 )
  {
    v4 = v3[9];
    v5 = sub_1B7250(v3);
    v6 = *(_DWORD *)(sub_1780B4(v5) + 152);
    v7 = *(_DWORD *)(v6 + 20);
    sub_1B141C((int)v28, (char *)&v22);
    if ( !v28[0] || (*(_BYTE *)(v28[0] + 32) & 0xF) != 3 )
      goto LABEL_3;
    v8 = *(__int16 *)(v28[0] + 22);
    v26 = *(_DWORD *)(v28[0] + 8);
    if ( v8 == -1 )
      break;
    v9 = v4;
    v27 = v28[0];
    v10 = *(_DWORD *)(*(_DWORD *)(v28[1] + 144) + 4 * v8);
    if ( sub_2AD7AC(v9, v25) )
    {
      v11 = *(_DWORD *)(v27 + 24);
      if ( v11 == v7 && !sub_230020(v26 + v10, &v22, v11) )
      {
        v12 = sub_15AEA8(&v22, v6);
        v13 = ((int (__fastcall *)(int, int, int *))loc_169ED8)(v5, v12, v22);
        v14 = ((int (__fastcall *)(int, int))loc_169FA0)(v5, v13);
        if ( v23 )
          *v23 = v14;
        if ( sub_6A600(v24, v14) )
          return;
      }
    }
LABEL_3:
    v3 = (_DWORD *)*v3;
    if ( !v3 )
      return;
  }
  v16 = sub_94700("elfread.c", 798, "Section index is uninitialized");
  v15 = (_DWORD *)HIDWORD(v16);
  LODWORD(v16) = *(_DWORD *)(HIDWORD(v16) + 4);
  if ( *(_DWORD *)HIDWORD(v16) != (_DWORD)v16 )
  {
    v17 = *(_DWORD *)HIDWORD(v16) - 4;
    v18 = v16 - 4;
    do
    {
      v20 = *(_DWORD *)(v17 + 4);
      v17 += 4;
      v19 = v20;
      v21 = v20;
      if ( v20 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 4))(v21);
    }
    while ( v17 != v18 );
    LODWORD(v16) = *v15;
  }
  if ( (_DWORD)v16 )
    sub_339E64((void *)v16);
  sub_349268(v15);
}
