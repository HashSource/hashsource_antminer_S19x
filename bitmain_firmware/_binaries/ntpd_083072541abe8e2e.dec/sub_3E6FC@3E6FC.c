int __fastcall sub_3E6FC(int a1, int a2, int a3)
{
  struct sockaddr *v4; // r6
  unsigned int v6; // r9
  unsigned int v7; // r2
  int *v8; // r4
  int v9; // r3
  int v10; // t1
  char v11; // r3
  int v12; // r12

  v4 = (struct sockaddr *)a1;
  if ( (__rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF) > 1 )
  {
    sub_64E00(3, "reset_stats: err_nitems > 1");
    v11 = *(_BYTE *)(a3 + 3);
    v12 = 3;
  }
  else
  {
    v6 = bswap32(*(_DWORD *)(a3 + 8));
    v7 = v6 & 0xFFFFFF80;
    if ( (v6 & 0xFFFFFF80) != 0 )
    {
      sub_64E00(3, "reset_stats: reset leaves %#lx", v7);
      v11 = *(_BYTE *)(a3 + 3);
      v12 = 3;
    }
    else
    {
      v8 = &reset_entries;
      v9 = reset_entries;
      if ( reset_entries )
      {
        do
        {
          if ( (v9 & v6) != 0 )
            a1 = ((int (__fastcall *)(int, int, unsigned int))v8[1])(a1, a2, v7);
          v10 = v8[2];
          v8 += 2;
          v9 = v10;
        }
        while ( v10 );
      }
      v11 = *(_BYTE *)(a3 + 3);
      v12 = 0;
    }
  }
  return sub_3AD58(v4, a2, *(_BYTE *)(a3 + 2), v11, v12);
}
