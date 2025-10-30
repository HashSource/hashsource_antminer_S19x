void __fastcall sub_5F754(int a1, _DWORD *a2)
{
  int v4; // r4
  _DWORD *v5; // r0

  v4 = sub_26FCD8(a1);
  if ( (v4 == -1 && (sub_98F78(&dword_4878EC, &dword_475848) || sub_23F1A8(dword_4878EC, dword_4878F0, dword_4878F4))
     || (v5 = (_DWORD *)sub_23E3C4(v4)) == 0
     || sub_23F1A8(v5[2], v5[3], v5[4]))
    && (!*a2 || sub_271918(a1)) )
  {
    sub_5F2F4(a1, a2[1], 0);
  }
}
