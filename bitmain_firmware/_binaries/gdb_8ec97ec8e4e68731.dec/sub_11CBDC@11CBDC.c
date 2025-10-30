int __fastcall sub_11CBDC(int a1, int a2, char a3, int a4, int a5)
{
  int v7; // r0
  int v10; // r1
  char v11; // r3
  int v12; // r5
  int v13; // r1
  int v14; // r2
  bool v15; // zf
  int v16; // r1
  int v17; // r0
  int v18; // r1
  _DWORD *v19; // r2
  int v20; // r3
  int v21; // r12
  bool v22; // zf
  int v23; // r3
  char v25; // r3

  v7 = *(_DWORD *)(a1 + 64);
  v10 = *(_DWORD *)(a1 + 60);
  v11 = v7 - v10;
  if ( (unsigned int)(v7 - v10) <= 0x1F )
  {
    obstack_newchunk((struct obstack *)(a1 + 48), 32);
    v10 = *(_DWORD *)(a1 + 60);
    v7 = *(_DWORD *)(a1 + 64);
  }
  v12 = *(_DWORD *)(a1 + 56);
  v13 = v10 + 32;
  v14 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 60) = v13;
  v15 = v13 == v12;
  if ( v13 == v12 )
    v11 = *(_BYTE *)(a1 + 88);
  v16 = (v13 + v14) & ~v14;
  *(_DWORD *)(a1 + 60) = v16;
  if ( v15 )
    *(_BYTE *)(a1 + 88) = v11 | 2;
  if ( v16 - *(_DWORD *)(a1 + 52) > (unsigned int)(v7 - *(_DWORD *)(a1 + 52)) )
  {
    v16 = v7;
    *(_DWORD *)(a1 + 60) = v7;
  }
  *(_DWORD *)(a1 + 56) = v16;
  *(_DWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 16) = 0;
  *(_DWORD *)(v12 + 24) = 0;
  *(_DWORD *)(v12 + 28) = 0;
  v17 = *(_DWORD *)(a1 + 64);
  v18 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)v12 = a4;
  *(_DWORD *)(v12 + 4) = a5;
  *(_DWORD *)(v12 + 20) = a1;
  *(_DWORD *)(v12 + 12) = a2;
  if ( (unsigned int)(v17 - v18) <= 0xB )
  {
    obstack_newchunk((struct obstack *)(a1 + 48), 12);
    v18 = *(_DWORD *)(a1 + 60);
    v17 = *(_DWORD *)(a1 + 64);
  }
  v19 = *(_DWORD **)(a1 + 56);
  v20 = v18 + 12;
  v21 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 60) = v18 + 12;
  v22 = v18 + 12 == (_DWORD)v19;
  if ( (_DWORD *)(v18 + 12) == v19 )
    LOBYTE(v18) = *(_BYTE *)(a1 + 88);
  v23 = (v20 + v21) & ~v21;
  *(_DWORD *)(a1 + 60) = v23;
  if ( v22 )
    *(_BYTE *)(a1 + 88) = v18 | 2;
  if ( v23 - *(_DWORD *)(a1 + 52) > (unsigned int)(v17 - *(_DWORD *)(a1 + 52)) )
  {
    v23 = v17;
    *(_DWORD *)(a1 + 60) = v17;
  }
  *(_DWORD *)(a1 + 56) = v23;
  *v19 = 0;
  v19[1] = 0;
  v19[2] = 0;
  v25 = *(_BYTE *)(v12 + 10);
  *(_DWORD *)(v12 + 24) = v19;
  *(_BYTE *)(v12 + 10) = v25 & 0xF7 | (8 * (a3 & 1));
  return v12;
}
