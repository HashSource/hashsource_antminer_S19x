int __fastcall sub_7F0F4(int a1, void ***a2)
{
  void **v4; // r4
  unsigned int v5; // r3
  void (__fastcall *v6)(int, int); // r6
  void **v7; // r12
  int v9; // r2
  bool v10; // zf
  int v11; // r3
  int v12; // r2
  int v13; // r3
  unsigned __int16 v14; // r1
  void **v15; // r0
  int v16; // r0
  unsigned int v17; // r3
  unsigned int v18; // r1
  unsigned int v19; // r3
  int v20; // r1
  unsigned __int16 v21; // r1

  v4 = *a2;
  v5 = (unsigned int)(*a2)[4];
  v6 = (void (__fastcall *)(int, int))(*a2)[10];
  if ( (v5 & 0x40) != 0 )
  {
    free(v4[6]);
    v5 = (unsigned int)v4[4];
  }
  v7 = a2[1];
  v4[6] = v7;
  if ( (*(_DWORD *)(a1 + 12) & 0x80000) != 0 && (v5 & 0x100) != 0 )
    return 1;
  v9 = *((unsigned __int16 *)v4 + 4);
  if ( v9 == 0x8000 )
  {
    v12 = (int)v4;
    v21 = *(_WORD *)v4;
    v16 = (int)a2[2];
    *((_WORD *)v4 + 3) = *((_WORD *)v4 + 1);
    *((_WORD *)v4 + 2) = v21;
    goto LABEL_12;
  }
  v10 = (v5 & 4) == 0;
  v11 = *(_DWORD *)(a1 + 68);
  v12 = v11 + (v9 << 6);
  if ( !v10 )
  {
    v20 = *(unsigned __int16 *)(v12 + 4);
    if ( *(unsigned __int16 *)v4 != v20 )
    {
      fprintf(stderr, off_B94E8, *(_DWORD *)(v12 + 52), v4[13], *(_DWORD *)(v11 + (v20 << 6) + 52));
      return -1;
    }
    goto LABEL_18;
  }
  v13 = *(unsigned __int16 *)v4;
  *(_WORD *)(v12 + 4) = 0x8000;
  if ( v13 == 0x8000 )
  {
LABEL_18:
    v16 = (int)a2[2];
    goto LABEL_11;
  }
  v14 = *((_WORD *)v4 + 1);
  v15 = a2[2];
  *(_WORD *)(v12 + 4) = v13;
  *(_WORD *)(v12 + 6) = v14;
  v16 = (unsigned int)v15 | 0x10;
  a2[2] = (void **)v16;
LABEL_11:
  v5 = *(_DWORD *)(v12 + 16);
  *(_DWORD *)(v12 + 24) = v7;
LABEL_12:
  v17 = v16 & 0xF00000FF | v5 & 0xFFFFF00;
  *(_DWORD *)(v12 + 16) = v17;
  if ( (v17 & 4) != 0
    && (v18 = *(unsigned __int16 *)(v12 + 12),
        v19 = (unsigned __int16)(*(_WORD *)(v12 + 14) + 1),
        *(_WORD *)(v12 + 14) = v19,
        v18 < v19) )
  {
    if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
      sub_7F010(a1, v12);
    return -1;
  }
  else
  {
    if ( v6 )
      v6(a1, v12);
    return 0;
  }
}
