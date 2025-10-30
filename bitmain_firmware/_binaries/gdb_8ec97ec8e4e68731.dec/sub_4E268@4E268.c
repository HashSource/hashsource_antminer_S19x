int __fastcall sub_4E268(int a1)
{
  int v2; // r0
  int v3; // r7
  int v4; // r0
  int v5; // r6
  int v6; // r0
  int result; // r0
  _BYTE *v8; // [sp+4h] [bp-110h] BYREF
  int v9; // [sp+8h] [bp-10Ch]
  _BYTE v10[264]; // [sp+Ch] [bp-108h] BYREF

  v2 = sub_1DD58C(a1);
  v3 = sub_163E78(v2);
  ((void (__fastcall *)(_BYTE *, int))loc_1DD598)(v10, a1);
  v4 = sub_98F68(v10);
  v5 = v4;
  if ( dword_46AF88 == 1 )
  {
    v8 = v10;
    v9 = 260;
    v6 = ptrace(PTRACE_SETOPTIONS|PTRACE_POKETEXT, v4, 1024, &v8);
  }
  else
  {
    v6 = ptrace(PTRACE_SYSCALL|PTRACE_PEEKUSER, v4, 0, v10);
  }
  if ( v6 < 0 )
    sub_258B04("Unable to fetch VFP registers (for update).");
  sub_4EF78(a1, v10, *(_DWORD *)(v3 + 16));
  if ( dword_46AF88 == 1 )
  {
    v8 = v10;
    v9 = 260;
    result = ptrace(PTRACE_GETEVENTMSG|PTRACE_POKETEXT, v5, 1024, &v8);
  }
  else
  {
    result = ptrace(PTRACE_SYSCALL|PTRACE_POKETEXT, v5, 0, v10);
  }
  if ( result < 0 )
    sub_258B04("Unable to store VFP registers.");
  return result;
}
