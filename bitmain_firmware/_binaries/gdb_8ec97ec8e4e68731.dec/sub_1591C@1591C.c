int __fastcall sub_1591C(int a1, int a2, int a3)
{
  int v6; // r4

  v6 = sub_191AD0();
  sub_256850(a1, *(_DWORD *)(v6 + 36));
  sub_256850("^error,msg=\"", *(_DWORD *)(v6 + 36));
  if ( a3 )
    sub_258F78(a3, 34, *(_DWORD *)(v6 + 36));
  else
    sub_256850("unknown error", *(_DWORD *)(v6 + 36));
  sub_256850("\"", *(_DWORD *)(v6 + 36));
  if ( a2 == 13 )
    sub_256850(",code=\"undefined-command\"", *(_DWORD *)(v6 + 36));
  return sub_256850(&word_356638, *(_DWORD *)(v6 + 36));
}
