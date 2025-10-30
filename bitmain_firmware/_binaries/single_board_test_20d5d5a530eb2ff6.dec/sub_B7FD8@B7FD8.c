void *__fastcall sub_B7FD8(int a1, void *a2, size_t a3)
{
  void *v3; // r4

  v3 = a2;
  if ( a2 )
  {
    *_errno_location() = 0;
    v3 = (void *)read(*(_DWORD *)(a1 + 32), v3, a3);
    sub_B66FC(a1, 15);
    if ( (int)v3 <= 0 )
    {
      if ( sub_B7FBC((int)v3) )
      {
        sub_B6710(a1, 9);
      }
      else if ( !v3 )
      {
        *(_DWORD *)(a1 + 24) |= 0x800u;
      }
    }
  }
  return v3;
}
