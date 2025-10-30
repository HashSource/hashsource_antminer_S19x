int __fastcall sub_2A2A94(int result)
{
  if ( result )
  {
    result = *(_DWORD *)(result + 4);
    if ( result )
      return *(_BYTE *)result != 36 && strncmp((const char *)result, "__tagsym$$", 0xAu) != 0;
  }
  return result;
}
