int __fastcall sub_210DCC(int result)
{
  int v1; // r4
  int v2; // r2
  char v3; // r3
  int v4; // r6
  int *v5; // r5
  int v6; // r0
  unsigned int v7; // r6
  int v8; // r0
  int *v9; // r3
  unsigned int v10; // r12
  int v11; // r1
  unsigned int v12; // r2
  int v13; // r3
  int v14; // r3
  char v15; // r2
  __int64 v16; // r0

  v1 = *(_DWORD *)(result + 40);
  if ( (*(_BYTE *)(v1 + 68) & 2) == 0 )
  {
    v2 = *(_DWORD *)(result + 36);
    *(_BYTE *)(v1 + 68) |= 2u;
    if ( ((*(_DWORD *)(v2 + 40) >> 5) & 2) != 0 )
    {
      v3 = *(_BYTE *)(v1 + 68) | 1;
      *(_DWORD *)(v1 + 60) = *(_DWORD *)(v2 + 116);
      *(_BYTE *)(v1 + 68) = v3;
    }
    else if ( ((*(_DWORD *)(v2 + 40) >> 5) & 0x40) != 0 && (v14 = *(_DWORD *)(v2 + 116)) != 0 )
    {
      v15 = *(_BYTE *)(v1 + 68);
      *(_DWORD *)(v1 + 60) = v14;
      *(_BYTE *)(v1 + 68) = v15 | 1;
    }
    else
    {
      *(_BYTE *)(v1 + 68) &= ~1u;
    }
    if ( (*(_BYTE *)(v1 + 68) & 1) != 0 )
    {
      v4 = *(_DWORD *)(v1 + 60);
      v5 = (int *)result;
      v6 = sub_1B7250(result);
      v7 = ((int (__fastcall *)(int, int, int *))loc_169ED8)(v6, v4, &dword_4899A0);
      v8 = sub_1B7250((int)v5);
      result = ((int (__fastcall *)(int, unsigned int))loc_169FA0)(v8, v7);
      v9 = (int *)v5[42];
      v10 = v5[43];
      *(_DWORD *)(v1 + 60) = result;
      if ( (unsigned int)v9 >= v10 )
      {
LABEL_10:
        v13 = v5[38];
        if ( v13 == -1 )
        {
          v16 = sub_94700((int)"symfile.c", 944, "sect_index_text not initialized");
          return sub_210F08(v16, HIDWORD(v16));
        }
        else
        {
          *(_DWORD *)(v1 + 64) = v13;
        }
      }
      else
      {
        while ( 1 )
        {
          v11 = *v9;
          if ( *v9 )
          {
            v12 = *(_DWORD *)(v11 + 28);
            if ( v12 <= v7 )
            {
              result = *(_DWORD *)(v11 + 36);
              if ( v12 + result > v7 )
                break;
            }
          }
          v9 += 3;
          if ( (unsigned int)v9 >= v10 )
            goto LABEL_10;
        }
        result = sub_162FDC(v5[9], v11);
        *(_DWORD *)(v1 + 64) = result;
      }
    }
  }
  return result;
}
