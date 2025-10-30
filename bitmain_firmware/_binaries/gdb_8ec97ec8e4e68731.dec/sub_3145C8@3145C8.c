void __fastcall sub_3145C8(const void *a1, size_t a2, int a3)
{
  size_t v6; // r5
  unsigned int v7; // r3
  int v8; // r7
  void *v9; // r0

  v6 = *(_DWORD *)(a3 + 8);
  v7 = a2 + 1 + *(_DWORD *)(a3 + 4);
  v8 = *(_DWORD *)(a3 + 12);
  if ( v7 <= v6 )
  {
    if ( v8 )
      return;
LABEL_4:
    memcpy((void *)(*(_DWORD *)a3 + *(_DWORD *)(a3 + 4)), a1, a2);
    *(_BYTE *)(*(_DWORD *)a3 + a2 + *(_DWORD *)(a3 + 4)) = v8;
    *(_DWORD *)(a3 + 4) += a2;
    return;
  }
  if ( !v8 )
  {
    if ( v6 || (v6 = 2, v7 > 2) )
    {
      do
        v6 *= 2;
      while ( v7 > v6 );
    }
    v9 = realloc(*(void **)a3, v6);
    if ( !v9 )
    {
      free(*(void **)a3);
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)(a3 + 12) = 1;
      return;
    }
    v8 = *(_DWORD *)(a3 + 12);
    *(_DWORD *)a3 = v9;
    *(_DWORD *)(a3 + 8) = v6;
    if ( v8 )
      return;
    goto LABEL_4;
  }
}
