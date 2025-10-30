int sub_27FD28()
{
  int v0; // r1
  int v1; // r0
  int v2; // r0
  int v4; // r0
  int v5; // r1
  int *v6; // r3
  int v7; // r0
  int v8; // r0

  if ( !dword_48AAEC )
  {
    v4 = dword_48AAAC;
    v5 = dword_48AAB0;
    LOWORD(v6) = dword_48AAA0 | 1;
    dword_48AAA0 |= 1u;
    if ( !dword_48AAAC )
    {
      v6 = &stdin;
      v4 = stdin;
      dword_48AAAC = stdin;
    }
    if ( !dword_48AAB0 )
      LOWORD(v6) = 5328;
    dword_4900C0 = v4;
    if ( !dword_48AAB0 )
    {
      HIWORD(v6) = 71;
      v5 = *v6;
      dword_48AAB0 = *v6;
    }
    dword_48FF2C = v5;
    if ( !dword_48AAD4 )
    {
      dword_48AAF0 = 256;
      dword_48AAD4 = (int)sub_93028(0x100u);
    }
    if ( !dword_48AAF4 )
      dword_48AAF4 = (int)j_getenv("TERM");
    sub_293F08();
    if ( dword_46DEE8 )
      sub_284630(off_46DED0);
    v7 = sub_283450();
    sub_296A14(v7);
    sub_28A908(0);
    if ( dword_48AAF8 && dword_4707A0 )
    {
      --dword_490144;
      dword_490130 -= dword_49014C;
    }
    sub_28AB14();
    sub_27EEB4(&unk_46FF30);
    sub_27EEB4(&unk_46E718);
    if ( byte_46E7F0 == 1 )
      sub_28953C("\x1B", 0, &unk_46E718);
    v8 = sub_27EEB4(&dword_46DF10);
    if ( dword_4707A4 )
      sub_29465C(v8);
    if ( !dword_48AD14 )
      dword_48AD14 = (int)off_47076C[0];
    dword_48AAA0 = dword_48AAA0 & 0xFFFFFFFC | 2;
    ++dword_48AAEC;
  }
  v0 = dword_48AAD4;
  dword_4900D4 = 0;
  dword_4900DC = 0;
  dword_4900D8 = 0;
  *(_BYTE *)dword_48AAD4 = 0;
  dword_48AAC4 = v0;
  dword_48FF30 = 0;
  dword_48AAA0 &= ~0x1000000u;
  v1 = sub_2971F4();
  v2 = sub_28D2D8(v1);
  dword_48AAD0 = 0;
  byte_48AAFC = 0;
  if ( !dword_46DED4 )
    sub_280FDC(v2);
  sub_2976FC(1, 1);
  return 0;
}
