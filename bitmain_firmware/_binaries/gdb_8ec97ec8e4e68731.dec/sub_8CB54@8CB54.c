int __fastcall sub_8CB54(int a1, const char *a2, char a3)
{
  int v6; // r4
  int v7; // r1
  int v8; // r3
  char v9; // r2
  int v10; // r8
  int v11; // r3
  int v12; // r0
  bool v13; // zf
  int v14; // r3
  size_t v15; // r0

  v6 = dword_4751A4;
  v7 = *(_DWORD *)(dword_4751A4 + 16);
  v8 = *(_DWORD *)(dword_4751A4 + 12);
  v9 = v7 - v8;
  if ( (unsigned int)(v7 - v8) <= 0x3F )
  {
    obstack_newchunk((struct obstack *)dword_4751A4, 64);
    v8 = *(_DWORD *)(v6 + 12);
    v7 = *(_DWORD *)(v6 + 16);
  }
  v10 = *(_DWORD *)(v6 + 8);
  v11 = v8 + 64;
  v12 = *(_DWORD *)(v6 + 24);
  *(_DWORD *)(v6 + 12) = v11;
  v13 = v11 == v10;
  if ( v11 == v10 )
    v9 = *(_BYTE *)(v6 + 40);
  v14 = (v11 + v12) & ~v12;
  *(_DWORD *)(v6 + 12) = v14;
  if ( v13 )
    *(_BYTE *)(v6 + 40) = v9 | 2;
  if ( v14 - *(_DWORD *)(v6 + 4) > (unsigned int)(v7 - *(_DWORD *)(v6 + 4)) )
  {
    v14 = v7;
    *(_DWORD *)(v6 + 12) = v7;
  }
  *(_DWORD *)(v6 + 8) = v14;
  memset((void *)(v10 + 4), 0, 0x3Cu);
  *(_DWORD *)(v10 + 16) = a1;
  *(_BYTE *)(v10 + 8) = 2 * (a3 & 1);
  *(_DWORD *)v10 = 81;
  v15 = strlen(a2);
  *(_DWORD *)(v10 + 40) = a2;
  *(_DWORD *)(v10 + 44) = v15;
  return v10;
}
