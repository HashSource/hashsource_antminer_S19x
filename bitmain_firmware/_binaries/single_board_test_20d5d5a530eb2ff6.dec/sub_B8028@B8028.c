ssize_t __fastcall sub_B8028(int a1, const void *a2, size_t a3)
{
  ssize_t v6; // r4

  *_errno_location() = 0;
  v6 = write(*(_DWORD *)(a1 + 32), a2, a3);
  sub_B66FC(a1, 15);
  if ( v6 <= 0 && sub_B7FBC(v6) )
    sub_B6710(a1, 10);
  return v6;
}
