void __fastcall sub_15DA4(int a1)
{
  void *v1; // r8
  _DWORD *v2; // r4
  ssize_t v3; // r0
  int v4; // r7
  unsigned int v5; // r3
  int v6; // r3
  _DWORD buf[1279]; // [sp+4h] [bp-1404h] BYREF

  v1 = (void *)a1;
  if ( disable_dynamic_updates )
    goto LABEL_16;
  v2 = buf;
  v3 = read(*(_DWORD *)(a1 + 4), buf, 0x1400u);
  if ( v3 < 0 )
  {
    if ( *_errno_location() == 105 )
    {
      sub_65D40(3, "routing socket reports: %m");
      return;
    }
    sub_65D40(3, "routing socket reports: %m - disabling");
    a1 = (int)v1;
LABEL_16:
    sub_15CE8(a1);
    free(v1);
    return;
  }
  if ( v3 > 15 && buf[0] > 0xFu )
  {
    v4 = v3;
    if ( (unsigned int)v3 >= buf[0] )
    {
      do
      {
        if ( (unsigned __int16)(*((_WORD *)v2 + 2) - 3) <= 0x16u )
        {
          v6 = 1 << (*((_BYTE *)v2 + 4) - 3);
          if ( (v6 & 0x666000) != 0 )
          {
            sub_41C38(current_time + 2);
          }
          else if ( (v6 & 1) != 0 )
          {
            return;
          }
        }
        v5 = (*v2 + 3) & 0xFFFFFFFC;
        v4 -= v5;
        v2 = (_DWORD *)((char *)v2 + v5);
      }
      while ( v4 > 15 && *v2 > 0xFu && *v2 <= (unsigned int)v4 );
    }
  }
}
