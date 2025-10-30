int __fastcall sub_42044(int a1, int a2, int a3)
{
  int v4; // r6
  int v5; // r0
  _DWORD *v6; // r5
  void *v7; // r3
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int *v11; // r0
  int v12; // r5
  const char *v13; // r0
  int v14; // r5
  const char *v15; // r0
  int v16; // r4
  const char *v17; // r0
  int v18; // [sp+Ch] [bp-1Ch] BYREF
  int v19; // [sp+10h] [bp-18h]
  int v20; // [sp+14h] [bp-14h]
  int v21; // [sp+1Ch] [bp-Ch]
  int v22; // [sp+20h] [bp-8h]
  int v23; // [sp+24h] [bp-4h]

  v18 = a1;
  v19 = a2;
  v20 = a3;
  if ( sub_41080(a1, a2, a3) )
    return 0;
  v4 = sub_98F68(&v18);
  v5 = ptrace(PTRACE_ATTACH, v4, 0, 0);
  if ( v5 < 0 )
  {
    v11 = _errno_location();
    v12 = *v11;
    if ( *v11 == 3 || v12 == 1 && (v11 = (int *)sub_4B938(v4)) != 0 )
    {
      if ( dword_47202C )
      {
        v16 = *(_DWORD *)sub_242FC8(v11);
        v17 = (const char *)sub_6FF98(v12);
        sub_2594B0(v16, "Cannot attach to lwp %d: thread is gone (%d: %s)\n", v4, v12, v17);
      }
      return 1;
    }
    else
    {
      v13 = (const char *)sub_4BDC0(v18, v19, v20, v12);
      sub_946B0("Cannot attach to lwp %d: %s", v4, v13);
      return 1;
    }
  }
  else
  {
    if ( dword_47202C )
    {
      v14 = *(_DWORD *)sub_242FC8(v5);
      v15 = (const char *)sub_23095C(v18, v19, v20);
      sub_2594B0(v14, "PTRACE_ATTACH %s, 0, 0 (OK)\n", v15);
    }
    v21 = v18;
    v22 = v19;
    v23 = v20;
    v6 = (_DWORD *)((int (*)(void))loc_41A74)();
    v7 = off_47218C;
    if ( off_47218C )
      ((void (*)(void))off_47218C)();
    v8 = *v6;
    v9 = v6[1];
    v10 = v6[2];
    v6[4] = 1;
    v6[3] = 1;
    v6[6] = 1;
    sub_23FC70(v8, v9, v10, v7);
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, int))loc_23EFC0)(*v6, v6[1], v6[2], 1);
    sub_23F298(*v6, v6[1], v6[2], 1);
    return 1;
  }
}
