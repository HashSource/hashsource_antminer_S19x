int __fastcall sub_7E87C(char a1, _DWORD *a2)
{
  int v2; // r0
  char *v3; // r1
  char *v4; // lr
  char *v5; // r7

  v2 = a1 & 3;
  *a2 = off_B9598;
  v3 = off_B9464;
  v4 = off_B9460;
  v5 = off_B945C;
  dword_1082F0 = (int)&unk_A09D4;
  dword_1082EC = (int)off_B9464;
  dword_1082F4 = (int)off_B9460;
  dword_1082FC = (int)off_B945C;
  dword_108310 = (int)&unk_A09D4;
  dword_108300 = (int)"=Mbr";
  dword_108324 = (int)"=Tim";
  dword_1082F8 = (int)"=file";
  dword_108308 = (int)"=Cplx";
  dword_10830C = (int)"[=arg]";
  dword_108314 = (int)"\n%s\n\n";
  dword_108304 = (int)off_B9458;
  dword_108318 = (int)"      ";
  dword_10831C = (int)"   ";
  if ( v2 == 2 )
  {
    dword_108320 = (int)"%s";
    *off_B9458 = 32;
    *v5 = 32;
    *v4 = 32;
    *v3 = 32;
    dword_10830C = (int)" [arg]";
    return 8;
  }
  else if ( v2 == 3 || v2 == 1 )
  {
    dword_108320 = (int)"--%2$s%1$s";
    return 22;
  }
  else
  {
    dword_108320 = (int)"%2$s%1$s";
    return 22;
  }
}
