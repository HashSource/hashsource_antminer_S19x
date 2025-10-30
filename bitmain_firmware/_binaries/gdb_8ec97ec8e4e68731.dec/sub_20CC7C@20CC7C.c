void __fastcall sub_20CC7C(int a1, int a2)
{
  int v2; // r6
  int v5; // r0
  int v6; // [sp+Ch] [bp+Ch]

  sub_92E40(v2);
  if ( a2 == 1 )
  {
    v5 = sub_339E78(a1);
    v6 = *(_DWORD *)(v5 + 8);
    sub_339EF8(v5);
    if ( v6 )
      JUMPOUT(0x20CA54);
    JUMPOUT(0x20CA64);
  }
  sub_339E78(a1);
  sub_92E60();
}
