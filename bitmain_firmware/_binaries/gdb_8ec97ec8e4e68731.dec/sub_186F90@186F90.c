void sub_186F90()
{
  if ( (dword_489AF0 & 1) == 0 )
  {
    off_46D590[0] = "off";
    sub_946E0("Target '%s' cannot support this command.", (const char *)dword_4899A4);
  }
}
