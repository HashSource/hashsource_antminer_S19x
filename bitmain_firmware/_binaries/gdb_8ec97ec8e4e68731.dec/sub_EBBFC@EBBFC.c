bool __fastcall sub_EBBFC(const char *a1)
{
  return !strcmp(a1, "wchar_t") || !strcmp(a1, "char16_t") || strcmp(a1, "char32_t") == 0;
}
