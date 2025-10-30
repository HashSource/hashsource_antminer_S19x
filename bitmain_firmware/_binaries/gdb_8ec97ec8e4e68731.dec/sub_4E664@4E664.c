int __fastcall sub_4E664(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r1
  int v5; // r12
  _BYTE *v6; // lr
  _BYTE *v7; // r3
  int v8; // r2
  enum __ptrace_request v9; // r0
  _DWORD v11[2]; // [sp+4h] [bp-110h] BYREF
  _BYTE v12[264]; // [sp+Ch] [bp-108h] BYREF

  v2 = sub_1DD58C(a1);
  v3 = sub_163E78(v2);
  ((void (__fastcall *)(_BYTE *, int))loc_1DD598)(v12, a1);
  v4 = sub_98F68(v12);
  if ( dword_46AF88 == 1 )
  {
    v5 = 260;
    v6 = v12;
    v7 = v11;
    v8 = 1024;
    v9 = PTRACE_SETOPTIONS|PTRACE_POKETEXT;
  }
  else
  {
    v7 = v12;
    v8 = 0;
    v9 = PTRACE_SYSCALL|PTRACE_PEEKUSER;
  }
  if ( dword_46AF88 == 1 )
  {
    v11[0] = v6;
    v11[1] = v5;
  }
  if ( ptrace(v9, v4, v8, v7) < 0 )
    sub_258B04("Unable to fetch VFP registers.");
  return sub_4EF24(a1, v12, *(_DWORD *)(v3 + 16));
}
