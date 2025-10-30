int __fastcall sub_20B9C8(char *s, int a2)
{
  int v4; // r3
  size_t v5; // r6
  void *v6; // r0
  int v7; // r2
  int v8; // r3
  int result; // r0
  int v10; // r12
  int v11; // r1
  bool v12; // zf
  int v13; // r3

  if ( dword_489658 && dword_47AC88 > 0 )
    sub_F43B4(&off_46D334, "Invalid symbol data: common block within common block");
  v4 = dword_4788E8;
  dword_48965C = dword_4788E8;
  if ( dword_4788E8 )
    v4 = *(_DWORD *)(dword_4788E8 + 4);
  dword_489660 = v4;
  v5 = strlen(s);
  v6 = *(void **)(a2 + 60);
  if ( v5 + 1 > *(_DWORD *)(a2 + 64) - (int)v6 )
  {
    obstack_newchunk((struct obstack *)(a2 + 48), v5 + 1);
    v6 = *(void **)(a2 + 60);
  }
  memcpy(v6, s, v5);
  v7 = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a2 + 60) = v7 + v5 + 1;
  *(_BYTE *)(v7 + v5) = 0;
  v8 = *(_DWORD *)(a2 + 60);
  result = *(_DWORD *)(a2 + 56);
  v10 = *(_DWORD *)(a2 + 72);
  v11 = *(_DWORD *)(a2 + 64);
  v12 = v8 == result;
  dword_489658 = result;
  if ( v8 == result )
    LOBYTE(v7) = *(_BYTE *)(a2 + 88);
  v13 = (v8 + v10) & ~v10;
  *(_DWORD *)(a2 + 60) = v13;
  if ( v12 )
    *(_BYTE *)(a2 + 88) = v7 | 2;
  if ( v13 - *(_DWORD *)(a2 + 52) > (unsigned int)(v11 - *(_DWORD *)(a2 + 52)) )
  {
    v13 = v11;
    *(_DWORD *)(a2 + 60) = v11;
  }
  *(_DWORD *)(a2 + 56) = v13;
  return result;
}
