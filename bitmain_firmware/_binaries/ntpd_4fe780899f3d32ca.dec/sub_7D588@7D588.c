int __fastcall sub_7D588(char a1, char **a2)
{
  int result; // r0

  dword_1072C8 = (int)"Str";
  dword_1072CC = (int)"YES";
  dword_1072D0 = (int)"Num";
  dword_1072D8 = (int)"KWd";
  dword_1072DC = (int)"Mbr";
  dword_107300 = (int)"Tim";
  dword_1072D4 = (int)"Fil";
  dword_1072E0 = (int)"T/F";
  dword_1072E4 = (int)"Cpx";
  dword_1072E8 = (int)"opt";
  dword_1072EC = (int)"no ";
  dword_1072F0 = (int)"\n%s\n\n%s";
  dword_1072F4 = (int)"     ";
  dword_1072F8 = (int)"  ";
  switch ( a1 & 0x12 )
  {
    case 0:
      result = 24;
      *a2 = off_B85E8[0];
      dword_1072FC = (int)" %3s %-14s %s";
      break;
    case 2:
      result = 24;
      *a2 = off_B85EC[0];
      dword_1072FC = (int)" %3s %-14s %s";
      break;
    case 0x10:
      result = 19;
      *a2 = off_B8590[0];
      dword_1072FC = (int)off_B8598[0];
      break;
    case 0x12:
      result = 19;
      *a2 = off_B8594[0];
      dword_1072FC = (int)off_B8598[0];
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
