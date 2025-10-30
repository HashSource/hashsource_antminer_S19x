int __fastcall sub_2D03F0(int a1, int *a2, int a3)
{
  unsigned int v3; // r3
  const char *v4; // r3
  unsigned int v8; // r6
  unsigned int v9; // r7
  unsigned int v10; // r8
  void *v11; // r0
  void *v12; // r9
  int v13; // r3

  v3 = *a2;
  if ( *a2 != 4 )
  {
    if ( (unsigned int)*a2 <= 4 )
    {
      switch ( v3 )
      {
        case 1u:
          v4 = "load";
          return sub_2D0150(a1, a2, a3, v4);
        case 0u:
          v4 = "null";
          return sub_2D0150(a1, a2, a3, v4);
        case 2u:
          v4 = "dynamic";
          return sub_2D0150(a1, a2, a3, v4);
        case 3u:
          v4 = "interp";
          return sub_2D0150(a1, a2, a3, v4);
      }
    }
    else
    {
      if ( v3 == 1685382480 )
      {
        v4 = "eh_frame_hdr";
        return sub_2D0150(a1, a2, a3, v4);
      }
      if ( v3 > 0x6474E550 )
      {
        if ( v3 == 1685382481 )
        {
          v4 = "stack";
          return sub_2D0150(a1, a2, a3, v4);
        }
        if ( v3 == 1685382482 )
        {
          v4 = "relro";
          return sub_2D0150(a1, a2, a3, v4);
        }
      }
      else
      {
        if ( v3 == 5 )
        {
          v4 = "shlib";
          return sub_2D0150(a1, a2, a3, v4);
        }
        if ( v3 == 6 )
        {
          v4 = "phdr";
          return sub_2D0150(a1, a2, a3, v4);
        }
      }
    }
    return (*(int (__fastcall **)(int, int *, int, char *))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 88))(
             a1,
             a2,
             a3,
             "proc");
  }
  if ( !sub_2D0150(a1, a2, a3, "note") )
    return 0;
  v8 = a2[5];
  if ( v8 - 1 > 0xFFFFFFFD )
    return 1;
  v9 = a2[2];
  v10 = a2[7];
  if ( sub_2A8A04(a1, v9, 0) )
    return 0;
  v11 = sub_2AB368(v8 + 1);
  v12 = v11;
  if ( !v11 )
    return 0;
  *((_BYTE *)v11 + v8) = 0;
  if ( v8 != sub_2A87D8((int)v11, v8, a1) || !sub_2CC698(a1, (unsigned int)v12, v8, v13, v9, 0, v10) )
  {
    free(v12);
    return 0;
  }
  free(v12);
  return 1;
}
