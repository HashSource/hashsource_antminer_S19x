int __fastcall sub_1B6904(int a1, int a2)
{
  int result; // r0
  int v5; // r1
  char v6; // r2
  int v7; // r3
  int v8; // r4
  int v9; // r3
  int v10; // r0
  bool v11; // zf
  int v12; // r3
  char v13; // r3

  if ( !a2 )
    goto LABEL_4;
  result = sub_162558(a2, (_DWORD *)dword_487B60);
  if ( result )
    return result;
  if ( !sub_163058(a2) )
  {
    v8 = sub_2ACBF4(a2, 16420);
    sub_16254C(a2, (_DWORD *)dword_487B60, v8);
  }
  else
  {
LABEL_4:
    v5 = *(_DWORD *)(a1 + 64);
    v6 = 35;
    v7 = *(_DWORD *)(a1 + 60);
    if ( (unsigned int)(v5 - v7) <= 0x4023 )
    {
      obstack_newchunk((struct obstack *)(a1 + 48), 16420);
      v7 = *(_DWORD *)(a1 + 60);
      v5 = *(_DWORD *)(a1 + 64);
    }
    v8 = *(_DWORD *)(a1 + 56);
    v9 = v7 + 16420;
    v10 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 60) = v9;
    v11 = v9 == v8;
    if ( v9 == v8 )
      v6 = *(_BYTE *)(a1 + 88);
    v12 = (v9 + v10) & ~v10;
    *(_DWORD *)(a1 + 60) = v12;
    if ( v11 )
      *(_BYTE *)(a1 + 88) = v6 | 2;
    if ( v12 - *(_DWORD *)(a1 + 52) > (unsigned int)(v5 - *(_DWORD *)(a1 + 52)) )
    {
      v12 = v5;
      *(_DWORD *)(a1 + 60) = v5;
    }
    *(_DWORD *)(a1 + 56) = v12;
  }
  if ( v8 )
  {
    obstack_begin((struct obstack *)v8, 0, 0, (void *(*)(int))sub_93028, sub_1B6268);
    v13 = *(_BYTE *)(v8 + 92);
    *(_DWORD *)(v8 + 44) = 0;
    *(_DWORD *)(v8 + 48) = 0;
    *(_BYTE *)(v8 + 92) = v13 & 0xFE;
    *(_DWORD *)(v8 + 52) = 0;
    *(_DWORD *)(v8 + 56) = 0;
    *(_DWORD *)(v8 + 60) = 0;
    *(_DWORD *)(v8 + 64) = 0;
    *(_DWORD *)(v8 + 68) = 0;
    *(_DWORD *)(v8 + 72) = 0;
    *(_DWORD *)(v8 + 76) = 0;
    *(_DWORD *)(v8 + 80) = 0;
    *(_DWORD *)(v8 + 84) = 0;
    *(_DWORD *)(v8 + 88) = 0;
    memset((void *)(v8 + 96), 0, 0x1FDCu);
    memset((void *)(v8 + 8252), 0, 0x1FDCu);
    *(_DWORD *)(v8 + 16408) = 0;
    *(_DWORD *)(v8 + 16412) = 0;
    *(_DWORD *)(v8 + 16416) = 0;
  }
  if ( a2 )
    *(_DWORD *)(v8 + 52) = sub_B8324(a2);
  *(_DWORD *)(v8 + 44) = sub_C1938(0, 0);
  *(_DWORD *)(v8 + 48) = sub_C1938(0, 0);
  *(_DWORD *)(v8 + 76) = 0;
  return v8;
}
