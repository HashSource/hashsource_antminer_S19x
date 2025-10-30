int __fastcall sub_2CC28C(int a1, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v9; // r9
  int (*v10)(void); // r5
  unsigned int v11; // r2
  int v12; // r5
  int v13; // r0
  unsigned int v14; // r2

  if ( a4[1] != 8 )
  {
    v9 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 64);
    v10 = *(int (**)(void))(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 444) + 372);
    if ( !v10 || !v10() )
    {
      v11 = a3[7];
      if ( v11 )
      {
        if ( v11 >= *(_DWORD *)(*(_DWORD *)(a1 + 160) + 532) )
        {
          v12 = 0;
          sub_2A6A5C("%B: Invalid sh_link field (%d) in section number %d", a1);
          return v12;
        }
        v13 = sub_2CC144((int *)(a2 + 160), *(_DWORD **)(v9 + 4 * v11), v11);
        v12 = v13;
        if ( v13 )
        {
          a4[7] = v13;
          v12 = 1;
        }
        else
        {
          sub_2A6A5C("%B: Failed to find link section for section %d", a2, a5);
        }
      }
      else
      {
        v12 = 0;
      }
      v14 = a3[8];
      if ( !v14 )
        return v12;
      if ( (a3[2] & 0x40) != 0 )
      {
        v14 = sub_2CC144((int *)(a2 + 160), *(_DWORD **)(v9 + 4 * v14), v14);
        if ( !v14 )
        {
          sub_2A6A5C("%B: Failed to find info section for section %d", a2, a5);
          return v12;
        }
        a4[2] |= 0x40u;
      }
      a4[8] = v14;
    }
    return 1;
  }
  if ( !a4[7] )
    a4[7] = a3[7];
  if ( a4[8] )
    return 1;
  a4[8] = a3[8];
  return 1;
}
