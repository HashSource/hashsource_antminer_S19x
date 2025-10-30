void __fastcall sub_15B14(int a1)
{
  void *v1; // r7
  _DWORD *v2; // r5
  ssize_t v3; // r0
  int v4; // r7
  unsigned int v5; // r3
  _DWORD buf[1279]; // [sp+4h] [bp-1408h] BYREF

  v1 = (void *)a1;
  if ( disable_dynamic_updates )
    goto LABEL_9;
  v2 = buf;
  v3 = read(*(_DWORD *)(a1 + 4), buf, 0x1400u);
  if ( v3 < 0 )
  {
    if ( *_errno_location() == 105 )
    {
      sub_64E00(3, "routing socket reports: %m");
      return;
    }
    sub_64E00(3, "routing socket reports: %m - disabling");
    a1 = (int)v1;
LABEL_9:
    sub_15A58(a1);
    free(v1);
    return;
  }
  if ( v3 > 15 && buf[0] > 0xFu )
  {
    v4 = v3;
    if ( buf[0] <= (unsigned int)v3 )
    {
      while ( 2 )
      {
        switch ( *((_WORD *)v2 + 2) )
        {
          case 3:
            return;
          case 0x10:
          case 0x11:
          case 0x14:
          case 0x15:
          case 0x18:
          case 0x19:
            sub_40E80(current_time + 2);
            goto LABEL_13;
          default:
LABEL_13:
            v5 = (*v2 + 3) & 0xFFFFFFFC;
            v4 -= v5;
            v2 = (_DWORD *)((char *)v2 + v5);
            if ( v4 <= 15 || *v2 <= 0xFu || (unsigned int)v4 < *v2 )
              return;
            continue;
        }
      }
    }
  }
}
