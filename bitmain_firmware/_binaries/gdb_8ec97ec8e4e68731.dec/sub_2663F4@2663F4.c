void __fastcall sub_2663F4(int a1, int a2)
{
  if ( a2 )
  {
    if ( dword_46DE54 == dword_46DE58 )
    {
      sub_259F10("Input and output radices set to decimal %u, hex %x, octal %o.\n", dword_46DE54, dword_46DE54);
    }
    else
    {
      sub_259F10("Input radix set to decimal %u, hex %x, octal %o.\n", dword_46DE54, dword_46DE54, dword_46DE54);
      sub_259F10("Output radix set to decimal %u, hex %x, octal %o.\n", dword_46DE58, dword_46DE58);
    }
  }
}
