int __fastcall sub_3AC6C(int a1, int a2)
{
  int v2; // r8
  int v3; // r9
  int v4; // r0
  int (__fastcall *v5)(int, _DWORD); // r3
  __int64 v6; // r0
  _BOOL4 v7; // r3
  _BYTE *v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  _BYTE *v12; // r0
  _BYTE *v13; // r5
  _DWORD *v14; // r0
  _BYTE buf[88]; // [sp+Ch] [bp-58h] BYREF

LABEL_1:
  v2 = a1;
  v3 = a2;
  while ( 1 )
  {
    v4 = *(_DWORD *)(v2 + 8);
    v5 = *(int (__fastcall **)(int, _DWORD))(*(_DWORD *)(v2 + 12) + 84);
    if ( !v5 )
      goto LABEL_7;
    LODWORD(v6) = v5(v2, *(_DWORD *)(v2 + 8));
    v7 = (int)v6 <= 79;
    if ( (_DWORD)v6 == -1 )
      v7 = 0;
    if ( !v7 )
    {
      v4 = *(_DWORD *)(v2 + 8);
LABEL_7:
      LODWORD(v6) = read(v4, buf, 0x50u);
      if ( (_DWORD)v6 == -1 )
        return v6;
      goto LABEL_8;
    }
    if ( !(_DWORD)v6 )
      return v6;
    LODWORD(v6) = read(*(_DWORD *)(v2 + 8), buf, v6);
    if ( (_DWORD)v6 == -1 )
      return v6;
LABEL_8:
    if ( !((unsigned int)v6 | v3) )
      return v6;
    if ( ((unsigned __int8)v3 & ((_DWORD)v6 == 0)) != 0 )
      break;
    if ( (unsigned int)(v6 - 1) > 0x4F )
    {
      v6 = sub_94700(
             "ser-base.c",
             302,
             "%s: Assertion `%s' failed.",
             "void ser_base_read_error_fd(serial*, int)",
             "s > 0 && s <= GDB_MI_MSG_WIDTH");
      if ( *(_DWORD *)(HIDWORD(v6) + 8) == -1 )
        return v6;
      a1 = HIDWORD(v6);
      a2 = 0;
      goto LABEL_1;
    }
    v8 = buf;
    buf[(_DWORD)v6] = 0;
    while ( 1 )
    {
      v12 = (_BYTE *)sub_338BD4(v8, &word_356638);
      v13 = v12;
      if ( !v12 )
        break;
      *v12 = 0;
      v9 = (_DWORD *)((int (*)(void))sub_242FB4)();
      v10 = sub_256850(v8, *v9);
      v11 = (_DWORD *)sub_242FB4(v10);
      v8 = v13 + 1;
      sub_256850(&word_356638, *v11);
    }
    v14 = (_DWORD *)sub_242FB4(0);
    sub_256850(v8, *v14);
  }
  if ( sub_1FE130(v2) )
    sub_152E2C(*(_DWORD *)(v2 + 8));
  LODWORD(v6) = close(*(_DWORD *)(v2 + 8));
  *(_DWORD *)(v2 + 8) = -1;
  return v6;
}
