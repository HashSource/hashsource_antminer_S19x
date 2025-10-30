void sub_1774C()
{
  int v0; // r6
  int v1; // r4
  void *v2; // r0

  v0 = dword_A05EC;
  if ( dword_A05EC )
  {
    v1 = 0;
    *(_DWORD *)(dword_A05EC + 64) = 0;
    *(_DWORD *)(v0 + 68) = 0;
    *(_DWORD *)(v0 + 72) = 0;
    *(_DWORD *)(v0 + 76) = 0;
    *(_DWORD *)(v0 + 80) = 0;
    *(_DWORD *)(v0 + 84) = 0;
    *(_DWORD *)(v0 + 88) = 0;
    *(_DWORD *)(v0 + 92) = 0;
    *(_BYTE *)(v0 + 96) = 0;
    do
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * v1 + 4) == 1 )
      {
        v2 = *(void **)(v0 + 4 * v1);
        if ( v2 )
          memset(v2, 0, 0x100u);
      }
      ++v1;
    }
    while ( v1 != 16 );
  }
}
