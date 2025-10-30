unsigned int __fastcall sub_CEDA0(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4
  int v4; // r3
  unsigned int result; // r0
  int v6; // r3
  __int64 v7; // r0
  int v8; // lr
  int v9; // r5
  int v10; // lr
  _DWORD **v11; // r2
  _DWORD *v12; // r4
  int v13; // [sp-4h] [bp-4h]

  v2 = a1;
  if ( !a1 )
  {
LABEL_9:
    if ( a2 != 3 )
      return -1;
    sub_C7B74(0);
    return 2;
  }
  while ( 1 )
  {
    v4 = v2[7];
    if ( v4 == 1 )
      goto LABEL_8;
    if ( v4 )
      break;
    v6 = v2[2];
    if ( v6 )
    {
      result = (*(int (__fastcall **)(_DWORD *))(*(_DWORD *)(v6 + 4) + 32))(v2);
      if ( result <= 2 )
        return result;
    }
LABEL_8:
    v2 = (_DWORD *)*v2;
    if ( !v2 )
      goto LABEL_9;
  }
  if ( v4 != 2 )
  {
    v7 = sub_94700((int)"breakpoint.c", 4596, "print_bp_stop_message: unrecognized enum value");
    v13 = v8;
    *(_DWORD *)(v7 + 4) = HIDWORD(v7);
    *(_DWORD *)v7 = 0;
    v9 = *(_DWORD *)(HIDWORD(v7) + 16);
    *(_DWORD *)(v7 + 12) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 20) = 0;
    *(_WORD *)(v7 + 24) = 0;
    v10 = *(_DWORD *)(HIDWORD(v7) + 8);
    v12 = *v11;
    *(_DWORD *)(v7 + 8) = v9;
    *(_DWORD *)(v7 + 28) = 0;
    *(_DWORD *)(HIDWORD(v7) + 8) = v10 + 1;
    *v12 = v7;
    *v11 = (_DWORD *)v7;
    __asm { POP             {R4,R5,PC} }
  }
  return 0;
}
