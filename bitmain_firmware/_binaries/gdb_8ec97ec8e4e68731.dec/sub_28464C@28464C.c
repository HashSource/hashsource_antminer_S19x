int sub_28464C()
{
  int v0; // r6
  int v2; // r0
  int v3; // r0
  int v4; // r0

  v0 = dword_48AC38;
  if ( dword_48AC38 )
    return 0;
  v2 = fileno((FILE *)dword_48AAAC);
  if ( (sub_284090(v2, (struct termios *)&unk_48AC3C) & 0x80000000) != 0 )
    return -1;
  unk_48AC7C = unk_48AC40;
  unk_48AC80 = unk_48AC44;
  dword_48AC84 = unk_48AC48 & 0xFFFFFFFE;
  unk_48AC88 = unk_48AC4C;
  unk_48AC8C = unk_48AC50;
  unk_48AC90 = unk_48AC54;
  unk_48AC94 = unk_48AC58;
  unk_48AC98 = unk_48AC5C;
  unk_48AC9C = unk_48AC60;
  unk_48ACA0 = unk_48AC64;
  unk_48ACA4 = unk_48AC68;
  unk_48ACA8 = unk_48AC6C;
  unk_48ACAC = unk_48AC70;
  unk_48ACB0 = unk_48AC74;
  dword_48AC78 = unk_48AC3C & 0xFFFFFBFF;
  v3 = fileno((FILE *)dword_48AAAC);
  if ( sub_283FA4(v3, (struct termios *)&dword_48AC78) >= 0 )
  {
    dword_48AC38 = 1;
    return v0;
  }
  v4 = fileno((FILE *)dword_48AAAC);
  return sub_283FA4(v4, (struct termios *)&unk_48AC3C);
}
