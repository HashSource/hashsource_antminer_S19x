char *__fastcall sub_12413C(char *a1, _DWORD *a2, int a3)
{
  char *v3; // r4
  size_t v6; // r4
  void *v7; // r0
  int v8; // r2
  char *v9; // r3
  int v10; // r0
  bool v11; // zf
  int v12; // r3
  void *src; // [sp+0h] [bp-1Ch] BYREF
  size_t n; // [sp+4h] [bp-18h]
  char v15; // [sp+8h] [bp-14h] BYREF

  v3 = a1;
  if ( a1 && *a2 == 4 )
  {
    sub_FFE48((int)&src, a1);
    if ( n && sub_33CAA0((int)&src, v3) )
    {
      v6 = n;
      v7 = *(void **)(a3 + 12);
      if ( *(_DWORD *)(a3 + 16) - (int)v7 < n + 1 )
      {
        obstack_newchunk((struct obstack *)a3, n + 1);
        v7 = *(void **)(a3 + 12);
      }
      memcpy(v7, src, v6);
      v8 = *(_DWORD *)(a3 + 12);
      *(_DWORD *)(a3 + 12) = v8 + v6 + 1;
      *(_BYTE *)(v8 + v6) = 0;
      v9 = *(char **)(a3 + 12);
      v3 = *(char **)(a3 + 8);
      v10 = *(_DWORD *)(a3 + 16);
      v11 = v3 == v9;
      if ( v3 == v9 )
        LOBYTE(v8) = *(_BYTE *)(a3 + 40);
      v12 = (unsigned int)&v9[*(_DWORD *)(a3 + 24)] & ~*(_DWORD *)(a3 + 24);
      *(_DWORD *)(a3 + 12) = v12;
      if ( v11 )
        *(_BYTE *)(a3 + 40) = v8 | 2;
      if ( v12 - *(_DWORD *)(a3 + 4) > (unsigned int)(v10 - *(_DWORD *)(a3 + 4)) )
      {
        v12 = v10;
        *(_DWORD *)(a3 + 12) = v10;
      }
      *(_DWORD *)(a3 + 8) = v12;
    }
    if ( src != &v15 )
      sub_339E64(src);
  }
  return v3;
}
