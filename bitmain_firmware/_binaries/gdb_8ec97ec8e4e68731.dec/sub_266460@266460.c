void __fastcall sub_266460(int a1, int a2)
{
  switch ( a2 )
  {
    case 10:
      dword_46DE80 = 0;
      break;
    case 16:
      dword_46DE80 = 120;
      break;
    case 8:
      dword_46DE80 = 111;
      break;
    default:
      dword_46DEA8 = dword_46DE58;
      sub_946E0("Unsupported output radix ``decimal %u''; output radix unchanged.", a2);
  }
  dword_46DE58 = a2;
  dword_46DEA8 = a2;
  if ( a1 )
    sub_259F10("Output radix now set to decimal %u, hex %x, octal %o.\n", a2, a2, a2);
}
