bool __fastcall sub_2FE9F0(int a1, int a2, _DWORD *a3, int a4)
{
  int v4; // r12
  size_t n; // r7
  int v9; // r5
  size_t v10; // r8
  void *v11; // r9
  int v12; // r8
  int v13; // r0
  char *v15; // r0
  unsigned __int8 *v16; // r1
  char *v17; // r3
  char *v18; // r0

  v4 = *(_DWORD *)(a4 + 4);
  if ( v4 != 1 )
  {
    if ( v4 != 2 )
      sub_2A6BF0((int)"linker.c", 2440, (int)"_bfd_default_link_order");
    if ( (a3[5] & 0x100) != 0 )
    {
      n = *(_DWORD *)(a4 + 12);
      if ( !n )
        return 1;
    }
    else
    {
      sub_2A6BBC("linker.c", 2463);
      n = *(_DWORD *)(a4 + 12);
      if ( !n )
        return 1;
    }
    v10 = *(_DWORD *)(a4 + 16);
    if ( v10 )
    {
      if ( n <= v10 )
      {
        v11 = *(void **)(a4 + 20);
LABEL_8:
        v12 = *(_DWORD *)(a4 + 8);
        v13 = sub_2A6904(a1);
        v9 = sub_2ADDE8(a1, a3, v11, 0, (unsigned int)(v13 * v12), n);
        if ( v11 != *(void **)(a4 + 20) )
          free(v11);
        return v9;
      }
      v15 = (char *)sub_2AB368(n);
      v11 = v15;
      if ( v15 )
      {
        v16 = *(unsigned __int8 **)(a4 + 20);
        if ( v10 == 1 )
        {
          memset(v15, *v16, n);
        }
        else
        {
          v17 = v15;
          while ( 1 )
          {
            n -= v10;
            v18 = (char *)memcpy(v17, v16, v10);
            v17 = &v18[v10];
            if ( v10 > n )
              break;
            v16 = *(unsigned __int8 **)(a4 + 20);
          }
          if ( n )
            memcpy(&v18[v10], *(const void **)(a4 + 20), n);
          n = *(_DWORD *)(a4 + 12);
        }
        goto LABEL_8;
      }
    }
    else
    {
      v11 = (void *)(*(int (__fastcall **)(size_t, bool, int))(*(_DWORD *)(a1 + 132) + 44))(
                      n,
                      *(_DWORD *)(*(_DWORD *)(a1 + 4) + 8) == 0,
                      (a3[5] >> 4) & 1);
      if ( v11 )
        goto LABEL_8;
    }
    return 0;
  }
  return sub_2FCFDC(a1, a2, a3, (_DWORD *)a4, 0);
}
