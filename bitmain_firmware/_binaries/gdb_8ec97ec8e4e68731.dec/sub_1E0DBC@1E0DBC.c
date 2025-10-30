void sub_1E0DBC()
{
  int v0; // r3
  int v1; // r2

  LOWORD(v0) = dword_4886E4;
  if ( dword_4886E4 )
  {
    LOWORD(v0) = (unsigned __int16)&off_46DB04;
    v1 = 17004;
  }
  else
  {
    v1 = (int)"Ctrl-C";
  }
  if ( dword_4886E4 )
  {
    HIWORD(v0) = (unsigned int)&off_46DB04 >> 16;
    HIWORD(v1) = 61;
  }
  else
  {
    v0 = 56068;
  }
  if ( !dword_4886E4 )
    HIWORD(v0) = 70;
  *(_DWORD *)v0 = v1;
}
