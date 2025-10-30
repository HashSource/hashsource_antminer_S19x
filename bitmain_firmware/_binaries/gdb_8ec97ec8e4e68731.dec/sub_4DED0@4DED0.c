int __fastcall sub_4DED0(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r0
  int result; // r0
  _BYTE *v6; // [sp+0h] [bp-50h] BYREF
  int v7; // [sp+4h] [bp-4Ch]
  _BYTE v8[72]; // [sp+8h] [bp-48h] BYREF

  ((void (__fastcall *)(_BYTE *, int))loc_1DD598)(v8, a1);
  v2 = sub_98F68(v8);
  v3 = v2;
  if ( dword_46AF88 == 1 )
  {
    v6 = v8;
    v7 = 72;
    v4 = ptrace(PTRACE_SETOPTIONS|PTRACE_POKETEXT, v2, 1, &v6);
  }
  else
  {
    v4 = ptrace(PTRACE_GETREGS, v2, 0, v8);
  }
  if ( v4 < 0 )
    sub_258B04("Unable to fetch general registers.");
  sub_4EE88(a1, v8, dword_469618);
  if ( dword_46AF88 == 1 )
  {
    v6 = v8;
    v7 = 72;
    result = ptrace(PTRACE_GETEVENTMSG|PTRACE_POKETEXT, v3, 1, &v6);
  }
  else
  {
    result = ptrace(PTRACE_SETREGS, v3, 0, v8);
  }
  if ( result < 0 )
    sub_258B04("Unable to store general registers.");
  return result;
}
