void __fastcall sub_85140(void *dest)
{
  int v2; // r4
  int v3; // r9
  _DWORD *v4; // r0
  unsigned int v5; // r3
  int v6; // r3
  int v7; // r4

  while ( 1 )
  {
    v2 = *((_DWORD *)dest + 17);
    v3 = *((_DWORD *)dest + 25);
    do
    {
      v5 = *(_DWORD *)(v2 + 16);
      if ( (v5 & 0x40) != 0 )
      {
        free(*(void **)(v2 + 24));
        v6 = *(_DWORD *)(v2 + 16);
        *(_DWORD *)(v2 + 24) = 0;
        v5 = v6 & 0xFFFFFFBF;
        *(_DWORD *)(v2 + 16) = v5;
      }
      if ( (unsigned __int16)v5 >> 12 == 6 )
      {
        v4 = *(_DWORD **)(v2 + 28);
        if ( v4 )
          sub_7C38C(v4);
      }
      --v3;
      *(_DWORD *)(v2 + 28) = 0;
      v2 += 64;
    }
    while ( v3 > 0 );
    v7 = *((_DWORD *)dest + 20);
    if ( !v7 )
      break;
    memcpy(dest, *((const void **)dest + 20), 0x84u);
    memcpy(*((void **)dest + 17), (const void *)(v7 + 132), *(_DWORD *)(v7 + 100) << 6);
    free(*((void **)dest + 20));
    *((_DWORD *)dest + 20) = 0;
  }
}
