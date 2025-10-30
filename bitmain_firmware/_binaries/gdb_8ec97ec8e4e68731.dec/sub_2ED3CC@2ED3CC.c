int __fastcall sub_2ED3CC(int a1, int a2, int (__fastcall *a3)(int, int, int, int, int), _DWORD *a4, unsigned int *a5)
{
  int v5; // r12
  unsigned int v6; // r4
  int result; // r0
  int v8; // r4
  char v9; // r6
  int v10; // r3

  v5 = a4[1];
  v6 = *(_DWORD *)(v5 + 4) >> a4[8];
  if ( !v6 )
    return 0;
  if ( a4[5] > v6 && !(*(unsigned __int8 *)(a4[3] + 20 * v6 + 12) >> 4) )
    return a3(a2, a1, v5, 0, a4[3] + 20 * v6);
  v8 = *(_DWORD *)(a4[7] + 4 * (v6 - a4[6]));
  if ( v8 )
  {
    while ( (unsigned int)*(unsigned __int8 *)(v8 + 12) - 6 <= 1 )
      v8 = *(_DWORD *)(v8 + 20);
    v9 = *(_BYTE *)(v8 + 53);
    *(_BYTE *)(v8 + 52) |= 0x20u;
    if ( (v9 & 0x20) != 0 )
    {
      v10 = v8;
      do
        v10 = *(_DWORD *)(v10 + 60);
      while ( (*(_BYTE *)(v10 + 53) & 0x20) != 0 );
      *(_BYTE *)(v10 + 52) |= 0x20u;
    }
    if ( a5 && (v9 & 0x10) != 0 )
    {
      result = *(_DWORD *)(v8 + 68);
      *a5 = ((*(unsigned __int8 *)(result + 24) ^ 8u) >> 3) & 1;
    }
    else
    {
      return a3(a2, a1, v5, v8, 0);
    }
  }
  else
  {
    (*(void (**)(const char *, ...))(*(_DWORD *)(a1 + 24) + 44))("%F%P: corrupt input: %B\n", *(_DWORD *)(a2 + 148), a5);
    return 0;
  }
  return result;
}
