int __fastcall sub_7E9D0(char a1, _DWORD *a2)
{
  int result; // r0

  dword_1082EC = (int)"Str";
  dword_1082F0 = (int)"YES";
  dword_1082F4 = (int)"Num";
  dword_1082FC = (int)"KWd";
  dword_108300 = (int)"Mbr";
  dword_108324 = (int)"Tim";
  dword_1082F8 = (int)"Fil";
  dword_108304 = (int)"T/F";
  dword_108308 = (int)"Cpx";
  dword_10830C = (int)"opt";
  dword_108310 = (int)"no ";
  dword_108314 = (int)"\n%s\n\n%s";
  dword_108318 = (int)"     ";
  dword_10831C = (int)"  ";
  switch ( a1 & 0x12 )
  {
    case 0:
      result = 24;
      *a2 = off_B95EC;
      dword_108320 = (int)" %3s %-14s %s";
      break;
    case 2:
      result = 24;
      *a2 = off_B95F0;
      dword_108320 = (int)" %3s %-14s %s";
      break;
    case 0x10:
      result = 19;
      *a2 = off_B9594;
      dword_108320 = (int)off_B959C;
      break;
    case 0x12:
      result = 19;
      *a2 = off_B9598;
      dword_108320 = (int)off_B959C;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
