void *__fastcall sub_CF9D4(size_t a1, const void *a2)
{
  if ( a2 )
  {
    sub_CF908(a1, a2, 0x100u);
    return (void *)a2;
  }
  else
  {
    sub_CF908(a1, &unk_6E1844, 0x100u);
    return &unk_6E1844;
  }
}
