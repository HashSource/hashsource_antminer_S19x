int __fastcall sub_5AC60(void *a1, int a2, _DWORD *a3, void *a4)
{
  _WORD size[3]; // [sp+16h] [bp-16h] BYREF
  size_t v8; // [sp+1Ch] [bp-10h]
  size_t n; // [sp+20h] [bp-Ch]
  void *src; // [sp+24h] [bp-8h]

  src = a1;
  n = 1;
  v8 = 4;
  memcpy((char *)size + 1, a1, sizeof(char));
  src = (char *)src + 1;
  memcpy(a4, src, 4u);
  src = (char *)src + v8;
  memcpy(a3, src, 0x1C0u);
  src = (char *)src + 448;
  LOBYTE(size[0]) = *(_BYTE *)src;
  src = (char *)src + 1;
  *(_DWORD *)&size[1] = calloc(1u, LOBYTE(size[0]));
  memcpy(*(void **)&size[1], src, LOBYTE(size[0]));
  a3[72] = *(_DWORD *)&size[1];
  src = (char *)src + LOBYTE(size[0]);
  LOBYTE(size[0]) = *(_BYTE *)src;
  src = (char *)src + 1;
  *(_DWORD *)&size[1] = calloc(1u, LOBYTE(size[0]));
  memcpy(*(void **)&size[1], src, LOBYTE(size[0]));
  a3[77] = *(_DWORD *)&size[1];
  src = (char *)src + LOBYTE(size[0]);
  LOBYTE(size[0]) = *(_BYTE *)src;
  src = (char *)src + 1;
  *(_DWORD *)&size[1] = calloc(1u, LOBYTE(size[0]));
  memcpy(*(void **)&size[1], src, LOBYTE(size[0]));
  a3[80] = *(_DWORD *)&size[1];
  src = (char *)src + LOBYTE(size[0]);
  *(_DWORD *)&size[1] = calloc(1u, 1u);
  a3[82] = *(_DWORD *)&size[1];
  a3[65] = *(_DWORD *)(dword_90F34 + 4 * HIBYTE(size[0]));
  a3[63] = *(_DWORD *)dword_91F50;
  a3[64] = **(_DWORD **)dword_91F50;
  return 0;
}
