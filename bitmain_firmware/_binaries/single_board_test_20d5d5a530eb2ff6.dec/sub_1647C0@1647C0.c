int __fastcall sub_1647C0(int a1)
{
  int v1; // r3
  int v4; // r6
  void *v5; // r0
  int v6; // r7
  int v7; // r2
  int *v8; // r0
  __int16 v9; // r2
  int *v10; // r0
  unsigned int v11; // r3
  void *v12; // r0
  int v13; // r3
  int v14; // r3

  v1 = *(_DWORD *)(a1 + 12);
  switch ( v1 )
  {
    case 905:
      *(_DWORD *)(a1 + 112) = sub_D31E0();
      v4 = 40;
      v6 = 192;
      *(_DWORD *)(a1 + 116) = sub_D3230();
      v7 = 24;
      break;
    case 906:
      *(_DWORD *)(a1 + 112) = sub_D3250();
      v4 = 48;
      v12 = sub_D32A0();
      v6 = 256;
      v7 = 32;
      *(_DWORD *)(a1 + 116) = v12;
      break;
    case 904:
      *(_DWORD *)(a1 + 112) = sub_D3180();
      v4 = 32;
      v5 = sub_D31C0();
      v6 = 128;
      v7 = 16;
      *(_DWORD *)(a1 + 116) = v5;
      break;
    default:
      return 0;
  }
  v8 = *(int **)(a1 + 100);
  *(_DWORD *)(a1 + 120) = v7;
  *(_DWORD *)(a1 + 240) = &off_21FEE8;
  if ( v8 )
  {
    if ( *(_DWORD *)(a1 + 104) )
      goto LABEL_8;
    goto LABEL_18;
  }
  v8 = (int *)sub_D7A5C();
  v14 = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 100) = v8;
  if ( !v14 )
  {
LABEL_18:
    v13 = sub_D7A5C();
    v8 = *(int **)(a1 + 100);
    *(_DWORD *)(a1 + 104) = v13;
    if ( !v8 || !v13 )
      return 0;
    goto LABEL_8;
  }
  if ( !v8 )
    return 0;
LABEL_8:
  if ( !sub_D8440(v8, *(_DWORD **)(a1 + 112), 0, 0, 0, 1)
    || !sub_D8440(*(int **)(a1 + 104), *(_DWORD **)(a1 + 116), 0, 0, 0, 1) )
  {
    return 0;
  }
  v9 = *(_WORD *)(a1 + 20);
  *(_DWORD *)(a1 + 32) = v6;
  *(_DWORD *)(a1 + 88) = v4;
  *(_DWORD *)(a1 + 240) = &off_21FEE8;
  if ( (v9 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 40) = v4;
    *(_DWORD *)(a1 + 44) = v4;
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 56) = v4;
    *(_DWORD *)(a1 + 60) = v4;
  }
  else
  {
    v10 = *(int **)(a1 + 108);
    if ( !v10 )
    {
      v10 = (int *)sub_D7A5C();
      *(_DWORD *)(a1 + 108) = v10;
      if ( !v10 )
        return 0;
    }
    if ( !sub_D8440(v10, *(_DWORD **)(a1 + 112), 0, (int)&unk_1DE904, 0, 1) )
      return 0;
    v11 = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 44) = 0x7FFFFFFF;
    *(_DWORD *)(a1 + 52) = 0x7FFFFFFF;
    *(_DWORD *)(a1 + 40) = v11;
    *(_DWORD *)(a1 + 56) = 0x7FFFFFFF;
    *(_DWORD *)(a1 + 60) = 0x7FFFFFFF;
    *(_DWORD *)(a1 + 48) = v11 >> 1;
  }
  *(_DWORD *)(a1 + 36) = 0x10000;
  return 1;
}
