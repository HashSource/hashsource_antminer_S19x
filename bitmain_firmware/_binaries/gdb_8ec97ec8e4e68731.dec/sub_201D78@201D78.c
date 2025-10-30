int __fastcall sub_201D78(int a1, int a2)
{
  void *v4; // r5
  bool v6; // zf

  v4 = (void *)dword_487A40;
  if ( !strncmp((const char *)dword_487A40, "remote:", 7u) )
  {
    v6 = dword_4893AC == 0;
    qmemcpy(v4, "target:", 7);
    if ( v6 )
    {
      sub_946B0("\"%s\" is deprecated, use \"%s\" instead.", "remote:", "target:");
      sub_946B0("sysroot set to \"%s\".", (const char *)dword_487A40);
      dword_4893AC = 1;
    }
  }
  return sub_201A80(a1, a2);
}
