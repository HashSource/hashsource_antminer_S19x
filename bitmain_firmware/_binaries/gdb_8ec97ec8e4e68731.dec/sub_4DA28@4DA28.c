int __fastcall sub_4DA28(int a1)
{
  int v2; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r3
  int v7; // r6
  int *v8; // r5
  int *v9; // r3
  int v10; // [sp+4h] [bp-68h] BYREF
  _DWORD v11[2]; // [sp+8h] [bp-64h] BYREF
  char v12; // [sp+10h] [bp-5Ch] BYREF

  v10 = 0;
  if ( dword_46AF88 == -1 )
  {
    v4 = sub_98F68(&dword_4878EC);
    v11[0] = &v12;
    v11[1] = 72;
    v5 = ptrace(PTRACE_SETOPTIONS|PTRACE_POKETEXT, v4, 1, v11);
    if ( v5 < 0 )
      dword_46AF88 = 0;
    else
      v6 = 1;
    if ( v5 >= 0 )
      dword_46AF88 = v6;
  }
  if ( sub_BC304(a1, 16, &v10) != 1 )
    return (*(int (**)(void))(*(_DWORD *)a1 + 408))();
  if ( (v10 & 0x200) != 0 )
    return dword_4717D8;
  if ( (v10 & 0x40) == 0 )
    return (*(int (**)(void))(*(_DWORD *)a1 + 408))();
  if ( (v10 & 0x1000) != 0 )
  {
    v2 = dword_4717E4;
  }
  else
  {
    if ( (v10 & 0x6000) == 0x2000 )
      LOWORD(v9) = 6112;
    else
      LOWORD(v9) = 6108;
    HIWORD(v9) = 71;
    v2 = *v9;
  }
  v7 = sub_98F68(&dword_4878EC);
  v8 = _errno_location();
  *v8 = 0;
  if ( ptrace(PTRACE_SYSCALL|PTRACE_PEEKUSER, v7) < 0 && *v8 == 5 )
    return 0;
  return v2;
}
