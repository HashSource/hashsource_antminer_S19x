int __fastcall sub_17FFD4(int a1, int a2)
{
  int v4; // r0
  void *v5; // r6
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v10; // r0

  v4 = sub_22F048(a1);
  ((void (__fastcall *)(int))loc_2359FC)(v4);
  dword_4878F8 = 0;
  v5 = sub_92E28();
  v6 = sub_1DDBBC(v5);
  dword_4878F8 = sub_1DFB3C(v6);
  sub_92E40((int)v5);
  if ( *(_DWORD *)(dword_487D2C + 8) )
  {
    v7 = *(_DWORD *)(dword_487D2C + 52);
    v8 = sub_201A50(a2);
    if ( *(_DWORD *)(dword_487D2C + 52) == v7 )
    {
      if ( dword_48A514 )
        v8 = sub_946B0("platform-specific solib_create_inferior_hook did not load initial shared libraries.");
      v10 = sub_16F654(v8);
      if ( !((int (__fastcall *)(int))loc_16D884)(v10) )
        sub_201664(0, 0, dword_46DBA8);
    }
  }
  sub_DC424();
  return sub_1B9390(a1, a2);
}
