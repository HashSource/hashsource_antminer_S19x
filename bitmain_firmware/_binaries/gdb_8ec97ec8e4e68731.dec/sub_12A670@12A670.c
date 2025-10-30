void __fastcall sub_12A670(int a1)
{
  int *v2; // r0
  int v3; // r12
  int v4; // r1
  int v5; // r7
  int v6; // r5
  size_t v7; // r2
  int v8; // r6
  int v9; // lr
  int v10; // r1
  int v11; // r5
  int v12; // r0
  int v13; // r3
  void *v14; // r1
  int v15; // [sp+14h] [bp-10h] BYREF
  int v16; // [sp+18h] [bp-Ch] BYREF
  void *src; // [sp+1Ch] [bp-8h] BYREF

  v15 = 10;
  v16 = 0;
  src = sub_93028(0x28u);
  sub_1208FC((char *)a1, dword_4872D8, dword_4872D8 + 20, 0, &v15, &v16, &src);
  v2 = sub_126E78();
  if ( v2 )
    sub_1208FC((char *)a1, (int)(v2 + 5), (int)v2, 1, &v15, &v16, &src);
  v3 = *(_DWORD *)(a1 + 64);
  v4 = *(_DWORD *)(a1 + 60);
  v5 = dword_4872D8;
  v6 = 4 * v16;
  if ( 4 * v16 > (unsigned int)(v3 - v4) )
  {
    obstack_newchunk((struct obstack *)(a1 + 48), 4 * v16);
    v8 = dword_4872D8;
    v4 = *(_DWORD *)(a1 + 60);
    v3 = *(_DWORD *)(a1 + 64);
    v7 = 4 * v16;
  }
  else
  {
    v7 = 4 * v16;
    v8 = dword_4872D8;
  }
  v9 = *(_DWORD *)(a1 + 56);
  v10 = v4 + v6;
  v11 = *(_DWORD *)(a1 + 72);
  v12 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 60) = v10;
  if ( v10 == v9 )
    *(_BYTE *)(a1 + 88) |= 2u;
  v13 = (v10 + v11) & ~v11;
  *(_DWORD *)(a1 + 60) = v13;
  v14 = src;
  if ( v13 - v12 > (unsigned int)(v3 - v12) )
  {
    v13 = v3;
    *(_DWORD *)(a1 + 60) = v3;
  }
  *(_DWORD *)(a1 + 56) = v13;
  *(_DWORD *)(v5 + 348) = v9;
  memcpy(*(void **)(v8 + 348), v14, v7);
  if ( src )
    free(src);
  *(_DWORD *)(v8 + 352) = v16;
}
