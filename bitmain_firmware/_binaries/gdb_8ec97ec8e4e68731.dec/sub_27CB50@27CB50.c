int __fastcall sub_27CB50(int result, int a2)
{
  if ( (*(_BYTE *)(result + 5) & 4) == 0 )
    return sub_946B0(
             "Compiled module \"%s\": multiple symbol definitions: %s",
             **(const char ***)(result + 56),
             *(const char **)(a2 + 4));
  return result;
}
