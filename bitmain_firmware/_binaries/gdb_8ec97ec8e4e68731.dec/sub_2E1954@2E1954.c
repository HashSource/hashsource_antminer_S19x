int __fastcall sub_2E1954(int a1, int *a2)
{
  int v2; // r4
  int v4; // r3
  int v5; // r0
  int v6; // r7
  int (*v7)(void); // r3
  int result; // r0
  int v9; // r1
  unsigned __int8 v10; // r3
  int v11; // r2
  bool v12; // r3
  char v14; // r3
  int v15; // r5
  char v16; // r2
  int i; // r3
  int v18; // r3
  char v19; // r1
  unsigned __int8 v20; // r12
  int v21; // r1
  int v22; // r2
  int v23; // r3
  unsigned __int8 v24; // r3

  v2 = a1;
  v4 = *(unsigned __int8 *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 52) & 1) == 0 )
  {
    if ( (unsigned int)(v4 - 3) > 1 || (*(_BYTE *)(a1 + 51) & 2) != 0 )
      goto LABEL_3;
    v21 = *(_DWORD *)(a1 + 20);
    v22 = *(_DWORD *)(v21 + 148);
    if ( v22 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v22 + 4) + 4) == 5 )
      {
LABEL_3:
        v5 = *a2;
        goto LABEL_4;
      }
    }
    else if ( (char **)v21 != &off_470950 || (*(_BYTE *)(a1 + 51) & 8) != 0 )
    {
      goto LABEL_3;
    }
    *(_BYTE *)(a1 + 51) |= 2u;
    goto LABEL_3;
  }
  while ( v4 == 6 )
  {
    v2 = *(_DWORD *)(v2 + 20);
    v4 = *(unsigned __int8 *)(v2 + 12);
  }
  if ( (unsigned int)(v4 - 3) > 1
    || (v23 = *(_DWORD *)(*(_DWORD *)(v2 + 20) + 148)) != 0 && *(_DWORD *)(*(_DWORD *)(v23 + 4) + 4) == 5 )
  {
    *(_BYTE *)(v2 + 51) |= 0x11u;
  }
  else
  {
    *(_BYTE *)(v2 + 51) |= 2u;
  }
  v5 = *a2;
  if ( *(_DWORD *)(v2 + 32) == -1 && (*(_BYTE *)(v2 + 51) & 0xC) != 0 )
  {
    result = sub_2E0858(v5, v2);
    if ( !result )
    {
      a2[1] = 1;
      return result;
    }
    goto LABEL_3;
  }
LABEL_4:
  v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 28) + 56) + 4) + 444);
  v7 = *(int (**)(void))(v6 + 228);
  if ( v7 )
  {
    result = v7();
    if ( !result )
      return result;
    v5 = *a2;
  }
  v9 = *(unsigned __int8 *)(v2 + 12);
  v10 = *(_BYTE *)(v2 + 49) & 3;
  v11 = v10;
  v12 = v10 != 0;
  if ( v9 == 3 )
  {
    v19 = *(_BYTE *)(v2 + 51);
    if ( (v19 & 0xB) == 1
      && ((unsigned int)&dword_10040 & (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 20) + 148) + 40) >> 5)) == 0 )
    {
      v19 |= 2u;
      *(_BYTE *)(v2 + 51) = v19;
    }
    v20 = *(_BYTE *)v5;
    if ( (*(_BYTE *)v5 & 3u) > 1 )
      goto LABEL_42;
  }
  else
  {
    if ( v9 == 2 && v12 )
      goto LABEL_12;
    v20 = *(_BYTE *)v5;
    v19 = *(_BYTE *)(v2 + 51);
    if ( (*(_BYTE *)v5 & 3u) > 1 )
    {
LABEL_42:
      v14 = *(_BYTE *)(v2 + 53);
      if ( v19 < 0
        && (v20 & 1) != 0
        && *(_DWORD *)(*(_DWORD *)(v5 + 28) + 40) == 1
        && ((*(_BYTE *)(v2 + 53) & 4) == 0
         && ((v20 & 4) != 0
          || (*(_BYTE *)(v2 + 53) & 0x10) != 0
          || (*(_BYTE *)(v5 + 5) & 0x10) != 0 && (*(_BYTE *)(v2 + 52) & 0x10) == 0)
         || v11)
        && (v19 & 2) != 0 )
      {
        (*(void (**)(void))(v6 + 224))();
        v14 = *(_BYTE *)(v2 + 53);
      }
      goto LABEL_13;
    }
  }
  v24 = *(_BYTE *)(v2 + 52);
  if ( (v24 & 6) != 6 || ((v20 | v24) & 0x10) != 0 || (v19 & 6) != 2 )
    goto LABEL_42;
LABEL_12:
  (*(void (__fastcall **)(int, int, int))(v6 + 224))(v5, v2, 1);
  v14 = *(_BYTE *)(v2 + 53);
LABEL_13:
  if ( (v14 & 0x20) == 0 )
    return 1;
  v15 = v2;
  do
    v15 = *(_DWORD *)(v15 + 60);
  while ( (*(_BYTE *)(v15 + 53) & 0x20) != 0 );
  v16 = *(_BYTE *)(v15 + 51);
  if ( (v16 & 2) != 0 )
  {
    for ( i = *(_DWORD *)(v15 + 60); i != v15; i = *(_DWORD *)(i + 60) )
      *(_BYTE *)(i + 53) &= ~0x20u;
    return 1;
  }
  while ( 1 )
  {
    v18 = *(unsigned __int8 *)(v2 + 12);
    if ( v18 != 6 )
      break;
    v2 = *(_DWORD *)(v2 + 20);
  }
  if ( (unsigned int)(v18 - 3) > 1 )
  {
    sub_2A6BBC("elflink.c", 2822);
    v16 = *(_BYTE *)(v15 + 51);
  }
  if ( (v16 & 8) == 0 )
    sub_2A6BBC("elflink.c", 2823);
  if ( *(_BYTE *)(v15 + 12) != 3 )
    sub_2A6BBC("elflink.c", 2824);
  (*(void (__fastcall **)(int, int, int))(v6 + 220))(*a2, v15, v2);
  return 1;
}
