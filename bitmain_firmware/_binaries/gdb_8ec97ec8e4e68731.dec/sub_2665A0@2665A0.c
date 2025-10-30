void __fastcall sub_2665A0(int a1, int a2)
{
  int v2; // r1

  if ( (unsigned int)dword_46DEAC <= 1 )
  {
    v2 = dword_46DEAC;
    dword_46DEAC = dword_46DE54;
    sub_946E0("Nonsense input radix ``decimal %u''; input radix unchanged.", v2);
  }
  dword_46DE54 = dword_46DEAC;
  if ( a2 )
    sub_259F10("Input radix now set to decimal %u, hex %x, octal %o.\n", dword_46DEAC, dword_46DEAC, dword_46DEAC);
}
