int __fastcall sub_60E80(int a1, int a2)
{
  int v4; // r0
  int v6; // [sp+4h] [bp-8h]

  v6 = dword_46DC04;
  ((void (*)(void))sub_22F048)();
  sub_2594B0(*(_DWORD *)(a2 + 32), "thread-group-added,id=\"i%d\"", *(_DWORD *)(a1 + 8));
  v4 = sub_25680C(*(_DWORD *)(a2 + 32));
  if ( v6 == 1 )
  {
    sub_22F048(v4);
    return 0;
  }
  else if ( v6 )
  {
    if ( v6 == 2 )
      sub_22EFF4(v4);
    return 0;
  }
  else
  {
    sub_22EF7C(v4);
    return 0;
  }
}
