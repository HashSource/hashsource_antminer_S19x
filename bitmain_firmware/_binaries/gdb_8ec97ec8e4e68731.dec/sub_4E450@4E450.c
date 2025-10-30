int __fastcall sub_4E450(int a1)
{
  int v2; // r1
  int v3; // r12
  _BYTE *v4; // lr
  enum __ptrace_request v5; // r0
  _BYTE *v7; // [sp+0h] [bp-50h]
  int v8; // [sp+4h] [bp-4Ch]
  _BYTE v9[72]; // [sp+8h] [bp-48h] BYREF

  ((void (__fastcall *)(_BYTE *, int))loc_1DD598)(v9, a1);
  v2 = sub_98F68(v9);
  if ( dword_46AF88 == 1 )
  {
    v3 = 72;
    v4 = v9;
    v5 = PTRACE_SETOPTIONS|PTRACE_POKETEXT;
  }
  else
  {
    v5 = PTRACE_GETREGS;
  }
  if ( dword_46AF88 == 1 )
  {
    v7 = v4;
    v8 = v3;
  }
  if ( ptrace(v5, v2) < 0 )
    sub_258B04("Unable to fetch general registers.");
  return sub_4EDF8(a1, v9, dword_469618, &dword_469618, v7, v8);
}
