int __fastcall sub_1AF0D0(int result)
{
  if ( off_46D9C4 == &dword_487AF4 )
  {
    off_46D9C4 = &dword_487B34;
    if ( dword_487AF4 != dword_487AF8 )
    {
      if ( result )
        sub_946B0("Switching to manual control of memory regions; use \"mem auto\" to fetch regions from the target again.");
      return sub_1AFB9C(&dword_487B34);
    }
  }
  return result;
}
