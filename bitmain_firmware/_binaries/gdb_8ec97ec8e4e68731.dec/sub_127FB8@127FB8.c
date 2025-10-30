char *__fastcall sub_127FB8(const char ***a1, char **a2, _BYTE *a3, _DWORD *a4, int a5)
{
  char *s; // r5
  int v7; // lr
  char v8; // t1
  unsigned int v9; // r8
  unsigned int v10; // r9
  const char **v11; // r7
  int v13; // r4
  int v14; // r2
  unsigned int v15; // r2
  __int64 v16; // r0
  const char **v17; // r11
  char *v18; // r6
  const char *v19; // r2
  const char *v20; // r12
  _BYTE *v21; // r11
  bool v22; // zf
  int v23; // r2
  int v24; // r2
  int v25; // r1
  _WORD *v26; // r11
  unsigned int v27; // r7
  int v28; // r2
  int v29; // r3
  int v30; // r1
  char *v31; // r0
  __int16 v32; // r12
  int v33; // r3
  unsigned int v34; // r2
  int v35; // r3
  unsigned int v37; // [sp+10h] [bp-1Ch]
  unsigned int v38; // [sp+10h] [bp-1Ch]
  int v39; // [sp+14h] [bp-18h]

  s = a3 + 1;
  v37 = *a3 & 0x7F;
  v39 = 0;
  if ( (*a3 & 0x80) != 0 )
  {
    v7 = 0;
    do
    {
      v8 = *s++;
      v7 += 7;
      v9 = v8 & 0x7F;
      v37 |= v9 << v7;
      v39 |= (v9 << (v7 - 32)) | (v9 >> (32 - v7));
    }
    while ( v8 < 0 );
  }
  v10 = v37;
  if ( v37 )
  {
    v11 = a1[1];
    v13 = *(_DWORD *)(*((_DWORD *)v11[20] + 12) + 4 * (v37 % 0x79));
    if ( !v13 )
LABEL_7:
      sub_946E0("Dwarf Error: could not find abbrev number %d [in module %s]", v37, **a1);
    while ( v37 != *(_DWORD *)v13 )
    {
      v13 = *(_DWORD *)(v13 + 16);
      if ( !v13 )
        goto LABEL_7;
    }
    v14 = *(unsigned __int16 *)(v13 + 10) + a5;
    if ( v14 > 1 )
      v15 = 16 * v14 + 24;
    else
      v15 = 40;
    v16 = *(_QWORD *)(v11 + 25);
    v17 = a1[4];
    if ( HIDWORD(v16) - (int)v16 < v15 )
    {
      v38 = v15;
      obstack_newchunk((struct obstack *)v11 + 2, v15);
      v16 = *(_QWORD *)(v11 + 25);
      v15 = v38;
    }
    v18 = (char *)v11[24];
    v19 = (const char *)(v16 + v15);
    v20 = v11[28];
    v21 = (_BYTE *)(a3 - (_BYTE *)v17);
    v11[25] = v19;
    v22 = v19 == v18;
    if ( v19 == v18 )
      LOBYTE(v16) = *((_BYTE *)v11 + 128);
    v23 = (int)&v20[(_DWORD)v19] & ~(unsigned int)v20;
    v11[25] = (const char *)v23;
    if ( v22 )
      *((_BYTE *)v11 + 128) = v16 | 2;
    if ( v23 - (int)v11[23] > (unsigned int)(HIDWORD(v16) - (_DWORD)v11[23]) )
    {
      v23 = HIDWORD(v16);
      v11[25] = (const char *)HIDWORD(v16);
    }
    v11[24] = (const char *)v23;
    memset(v18, 0, 0x28u);
    v24 = *(unsigned __int16 *)(v13 + 10);
    v25 = *(_DWORD *)(v13 + 4);
    *((_DWORD *)v18 + 2) = v21;
    v18[2] = v24;
    *(_WORD *)v18 = v25;
    *((_DWORD *)v18 + 1) = v10;
    if ( v24 )
    {
      v26 = v18 + 24;
      v27 = 0;
      do
      {
        v28 = *(_DWORD *)(v13 + 12);
        v29 = 16 * v27;
        v30 = (int)v26;
        v31 = &v18[16 * v27++];
        v32 = *(_WORD *)(v28 + v29);
        v33 = v28 + v29;
        v34 = *(unsigned __int16 *)(v33 + 2);
        v26 += 8;
        *((_WORD *)v31 + 12) = v32;
        s = sub_12735C(a1, v30, v34, v33, *(_QWORD *)(v33 + 8), s);
      }
      while ( *(unsigned __int16 *)(v13 + 10) > v27 );
    }
    v35 = *(unsigned __int16 *)(v13 + 8);
    *a2 = v18;
    *a4 = v35;
  }
  else
  {
    *a2 = 0;
    *a4 = 0;
  }
  return s;
}
