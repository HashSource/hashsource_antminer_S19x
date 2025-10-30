void __noreturn sub_639D0()
{
  int v0; // r4
  int v1; // r0
  _DWORD *v2; // r0

  v0 = sub_191AD0();
  if ( dword_474874 )
    sub_256850(dword_474874, *(_DWORD *)(v0 + 36));
  v1 = sub_256850("^exit\n", *(_DWORD *)(v0 + 36));
  v2 = (_DWORD *)sub_242FDC(v1);
  sub_690A8(*v2, *(_DWORD *)(v0 + 36));
  sub_25680C(*(_DWORD *)(v0 + 36));
  sub_2446B8(0, 0);
}
