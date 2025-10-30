ssize_t __fastcall sub_B8068(int a1, char *s)
{
  size_t v4; // r6
  ssize_t v5; // r4

  v4 = strlen(s);
  *_errno_location() = 0;
  v5 = write(*(_DWORD *)(a1 + 32), s, v4);
  sub_B66FC(a1, 15);
  if ( v5 <= 0 && sub_B7FBC(v5) )
    sub_B6710(a1, 10);
  return v5;
}
