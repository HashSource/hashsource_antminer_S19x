int sub_2582DC()
{
  __int64 v0; // r0

  v0 = *(_QWORD *)&dword_48A9B4;
  if ( dword_48A9B4 <= 0 )
    LODWORD(v0) = 0x7FFFFFFF;
  if ( dword_48A9B8 <= 0 )
    HIDWORD(v0) = 0x7FFFFFFF;
  return sub_2943A0(v0, HIDWORD(v0));
}
