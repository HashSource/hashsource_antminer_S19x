void __fastcall __noreturn sub_244A50(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  int v6; // r0
  int v7; // r0

  sub_92E40(v3);
  if ( a2 == 1 )
  {
    v6 = sub_339E78(a1);
    v7 = sub_154B38(*(_DWORD *)(*(_DWORD *)v2 + 80), *(_DWORD *)v6, *(_DWORD *)(v6 + 4), *(const char **)(v6 + 8));
    sub_339EF8(v7);
    JUMPOUT(0x244740);
  }
  sub_339E78(a1);
  sub_92E60();
}
