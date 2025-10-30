int __fastcall sub_7D420(char a1, char **a2)
{
  int v2; // r0

  v2 = a1 & 3;
  *a2 = off_B8594[0];
  dword_1072CC = (int)&unk_9F3D4;
  dword_1072C8 = (int)off_B8460[0];
  dword_1072D8 = (int)off_B8458[0];
  dword_1072D0 = (int)off_B845C[0];
  dword_1072EC = (int)&unk_9F3D4;
  dword_1072DC = (int)"=Mbr";
  dword_107300 = (int)"=Tim";
  dword_1072D4 = (int)"=file";
  dword_1072E4 = (int)"=Cplx";
  dword_1072E8 = (int)"[=arg]";
  dword_1072F0 = (int)"\n%s\n\n";
  dword_1072F4 = (int)"      ";
  dword_1072F8 = (int)"   ";
  dword_1072E0 = (int)off_B8454[0];
  if ( v2 == 2 )
  {
    dword_1072FC = (int)"%s";
    *off_B8454[0] = 32;
    *off_B8458[0] = 32;
    *off_B845C[0] = 32;
    *off_B8460[0] = 32;
    dword_1072E8 = (int)" [arg]";
    return 8;
  }
  else if ( v2 == 3 || v2 == 1 )
  {
    dword_1072FC = (int)"--%2$s%1$s";
    return 22;
  }
  else
  {
    dword_1072FC = (int)"%2$s%1$s";
    return 22;
  }
}
