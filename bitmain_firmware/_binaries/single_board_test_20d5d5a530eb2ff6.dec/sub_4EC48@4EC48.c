size_t __fastcall sub_4EC48(int a1, void *dest, size_t n)
{
  size_t v5; // r4
  size_t v6; // r1
  size_t v7; // r6
  _DWORD *v8; // r8

  if ( n > 0x10000 )
  {
    v6 = *(_DWORD *)(a1 + 16400);
    if ( v6 >= 0x10000 )
    {
      v7 = 0x10000;
      v5 = 0x10000;
      goto LABEL_6;
    }
    v5 = *(_DWORD *)(a1 + 16400);
    v7 = v5;
  }
  else
  {
    v5 = n;
    v6 = *(_DWORD *)(a1 + 16400);
    if ( n > v6 )
    {
      v5 = *(_DWORD *)(a1 + 16400);
      v7 = v5;
    }
    else
    {
      v7 = n;
    }
  }
  v8 = (_DWORD *)(a1 + 0x4000);
  if ( v5 )
  {
LABEL_6:
    v8 = (_DWORD *)(a1 + 0x4000);
    dest = memmove(dest, (const void *)(v6 - v7 + *(_DWORD *)(a1 + 0x4000)), v7);
  }
  *v8 = dest;
  *(_DWORD *)(a1 + 16400) = v7;
  return v5;
}
