void __fastcall sub_1797E8(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v6; // r0
  int v7; // r0
  int v8; // r6

  v6 = (_DWORD *)sub_26BC70(*a1);
  v7 = sub_171258(v6);
  if ( **(_BYTE **)(v7 + 24) == 3 )
  {
    v8 = v7;
    sub_170040(v7);
    if ( v8 != a4 )
      *a1 = sub_2647C8(a4, *a1);
    JUMPOUT(0x179728);
  }
  sub_946E0("Only classes can have virtual functions.");
}
