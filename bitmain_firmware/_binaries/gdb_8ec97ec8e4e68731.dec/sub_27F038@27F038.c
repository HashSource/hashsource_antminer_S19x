int sub_27F038()
{
  int (__fastcall **v0)(int); // r5
  int result; // r0
  int v2; // r0
  const char *v3; // r5

  dword_4900C0 = dword_48AAAC;
  dword_48FF2C = dword_48AAB0;
  if ( off_48AAB4 )
    off_48AAB4();
  LOWORD(v0) = (unsigned __int16)&off_470784;
  result = dword_48AAA4;
  if ( dword_48AAB8 )
  {
    HIWORD(v0) = (unsigned int)&off_470784 >> 16;
    goto LABEL_6;
  }
  HIWORD(v0) = (unsigned int)&off_470784 >> 16;
  if ( *v0 != sub_28ECDC )
  {
LABEL_6:
    if ( dword_48AAA4 && dword_48AABC )
      v2 = sub_28CAD0();
    else
      v2 = sub_28CA7C();
    result = (*v0)(v2);
    goto LABEL_10;
  }
  if ( dword_48AAA4 && !dword_48AABC )
  {
    v3 = (const char *)sub_28C92C();
    fputs(v3, (FILE *)dword_48FF2C);
    fflush((FILE *)dword_48FF2C);
    result = sub_297758(v3);
  }
LABEL_10:
  if ( !dword_46DED4 )
    result = sub_281F6C(1, 105);
  if ( off_48AAC0 )
    result = ((int (*)(void))off_48AAC0)();
  if ( dword_48B6B8 )
    return sub_291120(dword_48B6B8);
  return result;
}
