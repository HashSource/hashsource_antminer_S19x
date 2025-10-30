int __fastcall sub_2A9680(int a1, int a2, int *a3)
{
  size_t v3; // r5
  void *v7; // r9
  int v8; // r7
  void *v9; // r0
  void *v10; // r10
  size_t n; // r12
  int v12; // r3
  int v13; // r11
  int v14; // r0
  int v15; // r1
  char v16; // r2
  int v17; // r0
  int v18; // r1
  int v19; // r4
  const void *v21; // r1
  int v22; // r2
  int v23; // r0
  int v24; // [sp+14h] [bp-8h]

  if ( (*(_BYTE *)(a1 + 40) & 0x18) == 0x10 || (v3 = *(_DWORD *)(a2 + 40)) == 0 )
  {
    v3 = *(_DWORD *)(a2 + 36);
    if ( !v3 )
    {
      v19 = 1;
      *a3 = 0;
      return v19;
    }
  }
  v7 = (void *)*a3;
  v8 = (*(unsigned __int8 *)(a2 + 24) >> 4) & 3;
  if ( v8 == 1 )
  {
    v21 = *(const void **)(a2 + 108);
    if ( v21 )
    {
      if ( !v7 )
      {
        v23 = sub_2AB368(v3, v21);
        v7 = (void *)v23;
        if ( !v23 )
          return 0;
        *a3 = v23;
        v21 = *(const void **)(a2 + 108);
      }
      v19 = 1;
      if ( v7 != v21 )
        memcpy(v7, v21, v3);
      return v19;
    }
  }
  else if ( v8 )
  {
    if ( v8 != 2 )
      sub_2A6BF0((int)"compress.c", 333, (int)"bfd_get_full_section_contents");
    v9 = (void *)sub_2AB368(*(_DWORD *)(a2 + 44), a2);
    v10 = v9;
    if ( v9 )
    {
      n = *(_DWORD *)(a2 + 44);
      v12 = *(_DWORD *)(a2 + 40);
      *(_BYTE *)(a2 + 24) &= 0xCFu;
      *(_DWORD *)(a2 + 40) = 0;
      v13 = *(_DWORD *)(a2 + 36);
      *(_DWORD *)(a2 + 36) = n;
      v24 = v12;
      v14 = sub_2ADEDC(a1, a2, v9, v12, 0, 0, n);
      v16 = *(_BYTE *)(a2 + 24);
      *(_DWORD *)(a2 + 36) = v13;
      *(_DWORD *)(a2 + 40) = v24;
      *(_BYTE *)(a2 + 24) = v16 & 0xCF | 0x20;
      if ( v14 )
      {
        if ( v7 || (v7 = (void *)sub_2AB368(v3, v15)) != 0 )
        {
          v17 = sub_2A81C4(a1, a2);
          if ( v17 )
            v18 = v17;
          else
            v18 = 12;
          if ( sub_2A9594((int)v10 + v18, *(_DWORD *)(a2 + 44) - v18, (int)v7, v3) )
          {
            v19 = 1;
            free(v10);
            *a3 = (int)v7;
            return v19;
          }
          ((void (__fastcall *)(int))loc_2A6C48)(17);
          if ( (void *)*a3 != v7 )
            free(v7);
        }
      }
      v19 = 0;
      free(v10);
      return v19;
    }
  }
  else if ( v7 || (v7 = (void *)sub_2AB368(v3, a2)) != 0 )
  {
    v19 = sub_2ADEDC(a1, a2, v7, 0, 0, 0, v3);
    if ( v19 )
    {
      *a3 = (int)v7;
      return 1;
    }
    if ( (void *)*a3 != v7 )
    {
      free(v7);
      return v19;
    }
  }
  else if ( sub_2A6910() == 6 )
  {
    v22 = a2;
    v19 = 0;
    sub_2A6A5C("error: %B(%A) is too large (%#Lx bytes)", a1, v22, v3);
    return v19;
  }
  return 0;
}
