int sub_B8FF4()
{
  if ( !dword_478220 )
    return sub_259F10("Local .gdbinit file was not found.\n");
  if ( dword_478224 )
    return sub_259F10("Local .gdbinit file \"%s\" has been loaded.\n");
  return sub_259F10("Local .gdbinit file \"%s\" has not been loaded.\n");
}
