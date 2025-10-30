int *__fastcall sub_2062E0(int *a1, int a2)
{
  int v2; // r2
  int v3; // r5
  int v5; // r1
  int v6; // r7
  void *v7; // r0
  char *v8; // r6
  int *v10; // r5
  int v11; // r8
  int v12; // r4
  int v13; // r6
  int v14; // r1
  char *v15; // r0
  int v16; // r2

  v2 = *a1;
  v3 = a1[1];
  if ( *a1 == -1 )
    return 0;
  if ( v2 < 0 || dword_489438 <= v2 )
  {
    if ( dword_47AC88 > 0 )
      sub_F43B4(
        &off_46D334,
        "Invalid symbol data: type number (%d,%d) out of range at symtab pos %d.",
        v2,
        a1[1],
        dword_478988);
LABEL_14:
    v10 = &dword_489434;
    dword_489434 = *(_DWORD *)(sub_1780C4(a2) + 64);
    return v10;
  }
  if ( v2 )
  {
    v11 = *(_DWORD *)(dword_489444 + 4 * v2);
    if ( *(_DWORD *)(sub_1B6B24(a2, (_DWORD *)dword_47B26C) + 40) > v11 )
    {
      v12 = *(_DWORD *)(sub_1B6B24(a2, (_DWORD *)dword_47B26C) + 36) + 16 * v11;
      v13 = *(_DWORD *)(v12 + 12);
      if ( v3 >= v13 )
      {
        v14 = *(_DWORD *)(v12 + 12);
        do
          v14 *= 2;
        while ( v14 <= v3 );
        *(_DWORD *)(v12 + 12) = v14;
        v15 = (char *)sub_93050(*(void **)(v12 + 8), 4 * v14);
        v16 = *(_DWORD *)(v12 + 12);
        *(_DWORD *)(v12 + 8) = v15;
        memset(&v15[4 * v13], 0, 4 * (v16 - v13));
      }
      return (int *)(*(_DWORD *)(v12 + 8) + 4 * v3);
    }
    sub_946B0("GDB internal error: bad real_filenum");
    goto LABEL_14;
  }
  if ( v3 < 0 )
  {
    dword_489430 = sub_205D34(a1[1], a2);
    return &dword_489430;
  }
  v5 = dword_48943C;
  if ( dword_48943C > v3 )
  {
    v8 = (char *)dword_489440;
  }
  else
  {
    v6 = dword_48943C;
    if ( dword_48943C
      || (dword_48943C = 160, v7 = sub_93028(0x280u), v5 = dword_48943C, dword_489440 = (int)v7, dword_48943C <= v3) )
    {
      do
        v5 *= 2;
      while ( v5 <= v3 );
      v7 = (void *)dword_489440;
      dword_48943C = v5;
    }
    v8 = (char *)sub_93050(v7, 4 * v5);
    dword_489440 = (int)v8;
    memset(&v8[4 * v6], 0, 4 * (dword_48943C - v6));
  }
  return (int *)&v8[4 * v3];
}
