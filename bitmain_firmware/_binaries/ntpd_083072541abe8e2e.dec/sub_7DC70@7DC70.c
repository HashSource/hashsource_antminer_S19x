int __fastcall sub_7DC70(int a1, void ***a2)
{
  void **v4; // r4
  unsigned int v5; // r3
  void (__fastcall *v6)(int, int); // r5
  int v7; // r0
  void **v8; // lr
  int v10; // r2
  int v11; // r1
  int v12; // r12
  int v13; // r2
  void **v14; // r12
  unsigned int v15; // r3
  unsigned int v16; // r1
  unsigned int v17; // r3
  int v18; // r3
  unsigned __int16 v19; // lr

  v4 = *a2;
  v5 = (unsigned int)(*a2)[4];
  v6 = (void (__fastcall *)(int, int))(*a2)[10];
  if ( (v5 & 0x40) != 0 )
  {
    free(v4[6]);
    v5 = (unsigned int)v4[4];
  }
  v7 = *(_DWORD *)(a1 + 12);
  v8 = a2[1];
  v4[6] = v8;
  if ( (v7 & 0x80000) != 0 && (v5 & 0x100) != 0 )
    return 1;
  v10 = *((unsigned __int16 *)v4 + 4);
  v11 = *(unsigned __int16 *)v4;
  if ( v10 == 0x8000 )
  {
    v19 = *((_WORD *)v4 + 1);
    v13 = (int)v4;
    v14 = a2[2];
    *((_WORD *)v4 + 2) = v11;
    *((_WORD *)v4 + 3) = v19;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 68);
    v13 = v12 + (v10 << 6);
    if ( (v5 & 4) != 0 )
    {
      v18 = *(unsigned __int16 *)(v13 + 4);
      if ( v18 != v11 )
      {
        fprintf(stderr, off_B84E4[0], *(_DWORD *)(v13 + 52), v4[13], *(_DWORD *)(v12 + (v18 << 6) + 52));
        return -1;
      }
      v14 = a2[2];
    }
    else
    {
      v14 = a2[2];
      if ( v11 != 0x8000 )
        LOWORD(v5) = *((_WORD *)v4 + 1);
      *(_WORD *)(v13 + 4) = 0x8000;
      if ( v11 != 0x8000 )
      {
        v14 = (void **)((unsigned int)v14 | 0x10);
        *(_WORD *)(v13 + 4) = v11;
        *(_WORD *)(v13 + 6) = v5;
        a2[2] = v14;
      }
    }
    v5 = *(_DWORD *)(v13 + 16);
    *(_DWORD *)(v13 + 24) = v8;
  }
  v15 = v5 & 0xFFFFF00 | (unsigned int)v14 & 0xF00000FF;
  *(_DWORD *)(v13 + 16) = v15;
  if ( (v15 & 4) != 0
    && (v16 = *(unsigned __int16 *)(v13 + 12),
        v17 = (unsigned __int16)(*(_WORD *)(v13 + 14) + 1),
        *(_WORD *)(v13 + 14) = v17,
        v16 < v17) )
  {
    if ( (v7 & 4) != 0 )
      sub_7DB8C(a1, v13);
    return -1;
  }
  else
  {
    if ( v6 )
      v6(a1, v13);
    return 0;
  }
}
