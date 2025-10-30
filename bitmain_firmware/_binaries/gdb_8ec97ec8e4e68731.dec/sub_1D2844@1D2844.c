void __fastcall sub_1D2844(int a1, unsigned int a2)
{
  _BYTE *v2; // r6
  _BYTE *v4; // r9
  int v5; // r7
  char *v6; // r0
  _BYTE *v7; // r10
  char *v8; // r4

  if ( a2 > 0x3FFFFFFF )
    sub_33D184("vector::reserve");
  v2 = *(_BYTE **)a1;
  if ( a2 > (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 2 )
  {
    v4 = *(_BYTE **)(a1 + 4);
    v5 = 4 * a2;
    if ( a2 )
    {
      v6 = (char *)sub_9836C(4 * a2);
      v7 = *(_BYTE **)a1;
      v8 = v6;
    }
    else
    {
      v8 = 0;
      v7 = *(_BYTE **)a1;
    }
    if ( v2 != v4 )
      memmove(v8, v2, v4 - v2);
    if ( v7 )
      sub_339E64(v7);
    *(_DWORD *)(a1 + 4) = &v8[v4 - v2];
    *(_DWORD *)(a1 + 8) = &v8[v5];
    *(_DWORD *)a1 = v8;
  }
}
