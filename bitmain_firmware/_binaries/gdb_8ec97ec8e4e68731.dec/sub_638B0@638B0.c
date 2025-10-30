int __fastcall sub_638B0(int a1, _DWORD *a2)
{
  char *v3; // r4
  int v4; // r0
  int v5; // r5
  _BOOL4 v6; // r7
  int v7; // r8
  int *v8; // r2
  _DWORD *v10; // r0

  if ( *a2 )
    v3 = "start";
  else
    v3 = "run";
  v4 = sub_230F34(a1);
  v5 = dword_474864;
  if ( dword_474864 )
  {
    v6 = (*(int (**)(void))(v4 + 344))() != 0;
    v5 = v6;
  }
  else
  {
    v6 = 0;
  }
  v7 = *(_DWORD *)(a1 + 12);
  if ( v7 )
  {
    if ( v7 != ps_getpid_0(&dword_4878EC) )
    {
      v10 = (_DWORD *)((int (__fastcall *)(_DWORD))loc_23E730)(*(_DWORD *)(a1 + 12));
      if ( !v10 )
        sub_946E0("Inferior has no threads.");
      sub_23F9F0(v10[2], v10[3], v10[4]);
    }
  }
  else
  {
    ((void (__fastcall *)(int))loc_183698)(a1);
    sub_23F9F0(dword_475848, dword_47584C, dword_475850);
    ((void (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(a1 + 36));
  }
  v8 = (int *)&unk_35AF90;
  if ( !v6 )
    v8 = 0;
  sub_63680(v3, v5, v8);
  return 0;
}
