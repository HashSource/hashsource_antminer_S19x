size_t __fastcall sub_2934C8(const char *a1, int a2)
{
  size_t v3; // r4
  const char *v5; // r10
  int v6; // r0
  size_t v7; // r0
  wchar_t pwc; // [sp+4h] [bp-4h] BYREF
  mbstate_t v10; // [sp+8h] [bp+0h] BYREF
  mbstate_t v11; // [sp+10h] [bp+8h]

  v3 = 0;
  v10.__wch = 0;
  v11.__count = 0;
  v10.__count = 0;
  v11.__wch = 0;
  if ( a2 > 0 )
  {
    v5 = a1 - 1;
    do
    {
      dword_48AAA0 |= 0x40u;
      v6 = sub_29334C();
      dword_48AAA0 &= ~0x40u;
      if ( v6 < 0 )
        break;
      ++v3;
      *++v5 = v6;
      v7 = mbrtowc(&pwc, a1, v3, &v10);
      if ( v7 == -1 )
        break;
      if ( v7 != -2 )
      {
        if ( !v7 )
        {
          v3 = 1;
          *a1 = 0;
        }
        return v3;
      }
      v10 = v11;
    }
    while ( a2 != v3 );
  }
  return v3;
}
