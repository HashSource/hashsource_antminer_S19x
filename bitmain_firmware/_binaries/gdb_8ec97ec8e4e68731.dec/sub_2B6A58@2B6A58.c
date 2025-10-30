int __fastcall sub_2B6A58(int a1, int a2)
{
  _DWORD *v2; // r6
  int v6; // r3
  char v7; // r2
  int v8; // r2
  int v9; // r7
  int v10; // r1
  char v11; // r2
  int v12; // r5

  v2 = *(_DWORD **)(a1 + 28);
  if ( v2[11] != 4 )
    return 0;
  if ( v2[14] )
  {
    v6 = *(unsigned __int8 *)(a2 + 48);
    if ( (*(_BYTE *)(a2 + 51) & 0x80) != 0 )
    {
LABEL_22:
      if ( *(int *)(a2 + 40) <= 0 )
        goto LABEL_29;
      if ( v6 == 10 )
        return 1;
      goto LABEL_24;
    }
    if ( v6 == 10 )
    {
      if ( *(int *)(a2 + 40) > 0 )
        return 1;
LABEL_29:
      v11 = *(_BYTE *)(a2 + 51);
      *(_DWORD *)(a2 + 76) = 0;
      *(_DWORD *)(a2 + 80) = 0;
      *(_DWORD *)(a2 + 84) = 0;
      *(_BYTE *)(a2 + 51) = v11 & 0x7F;
      *(_DWORD *)(a2 + 40) = -1;
      return 1;
    }
    if ( (*(_BYTE *)(a2 + 53) & 0x20) != 0 )
    {
      if ( (v6 & 0xF7) != 2 )
      {
        *(_DWORD *)(a2 + 40) = -1;
        *(_DWORD *)(a2 + 76) = 0;
        *(_DWORD *)(a2 + 80) = 0;
        *(_DWORD *)(a2 + 84) = 0;
        goto LABEL_32;
      }
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 51) & 0xB) != 9 )
        goto LABEL_8;
      if ( (v6 & 0xF7) != 2 )
      {
        *(_DWORD *)(a2 + 76) = 0;
        *(_DWORD *)(a2 + 80) = 0;
        *(_DWORD *)(a2 + 84) = 0;
        *(_DWORD *)(a2 + 40) = -1;
        goto LABEL_11;
      }
    }
    if ( *(int *)(a2 + 40) <= 0 )
      goto LABEL_29;
LABEL_24:
    if ( !sub_2E2EE8(a2, a1, 1) && ((*(_BYTE *)(a2 + 49) & 3) == 0 || *(_BYTE *)(a2 + 12) != 2) )
      return 1;
    goto LABEL_29;
  }
LABEL_8:
  sub_2A6BBC("elf32-arm.c", 15139);
  v6 = *(unsigned __int8 *)(a2 + 48);
  if ( (v6 & 0xF7) == 2 || *(char *)(a2 + 51) < 0 )
    goto LABEL_22;
  v7 = *(_BYTE *)(a2 + 53);
  *(_DWORD *)(a2 + 76) = 0;
  *(_DWORD *)(a2 + 40) = -1;
  *(_DWORD *)(a2 + 80) = 0;
  *(_DWORD *)(a2 + 84) = 0;
  if ( (v7 & 0x20) == 0 )
  {
LABEL_11:
    if ( (*(_BYTE *)(a2 + 52) & 0x40) != 0 && (*(_BYTE *)a1 & 1) == 0 && !v2[13] )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(a2 + 20) + 20);
      if ( (v8 & 8) != 0 )
      {
        v9 = v2[61];
        v10 = v2[62];
      }
      else
      {
        v9 = v2[59];
        v10 = v2[60];
      }
      if ( (*(_BYTE *)a1 & 8) == 0 && (v8 & 1) != 0 )
      {
        if ( *(_DWORD *)(a2 + 44) )
        {
          sub_2B68BC(*(_DWORD *)(a1 + 28), v10, 1);
          *(_BYTE *)(a2 + 51) |= 0x40u;
        }
      }
      return sub_2E2D14(a1, a2, v9);
    }
    return 1;
  }
LABEL_32:
  v12 = a2;
  do
    v12 = *(_DWORD *)(v12 + 60);
  while ( (*(_BYTE *)(v12 + 53) & 0x20) != 0 );
  if ( *(_BYTE *)(v12 + 12) != 3 )
    sub_2A6BBC("elf32-arm.c", 15189);
  *(_QWORD *)(a2 + 20) = *(_QWORD *)(v12 + 20);
  return 1;
}
