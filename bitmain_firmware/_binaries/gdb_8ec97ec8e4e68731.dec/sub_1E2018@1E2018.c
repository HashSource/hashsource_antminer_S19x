int __fastcall sub_1E2018(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r3
  int v7; // r4

  v2 = sub_23F9F0(a1[2], a1[3], a1[4]);
  v3 = sub_15F70C(v2);
  dword_4878F8 = sub_15DDFC(v3);
  v4 = sub_15F70C(dword_4878F8);
  sub_20DB1C(v4);
  v5 = a1[38];
  a1[42] = 0;
  if ( v5 == 1 )
  {
    v7 = a1[39];
    if ( sub_188FC4(v7) )
      sub_1B8CE0(v7);
  }
  return sub_1B8C20(0, 1);
}
