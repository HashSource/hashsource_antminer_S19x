int __fastcall sub_541E4(int a1)
{
  __int16 *v2; // r6
  int v3; // r2
  int v5; // [sp+0h] [bp-Ch] BYREF

  v2 = *(__int16 **)a1;
  if ( ioctl(*(_DWORD *)(a1 + 28), 0x5415u, &v5) < 0 )
  {
    sub_65D40(3, "Palisade(%d) HW_poll: ioctl(fd,GET): %m", *v2);
    return -1;
  }
  else
  {
    v3 = *((_DWORD *)v2 + 35);
    v5 |= 4u;
    if ( v3 == 3 )
      write(*(_DWORD *)(a1 + 28), byte_99528, 1u);
    if ( ioctl(*(_DWORD *)(a1 + 28), 0x5418u, &v5) < 0 )
    {
      sub_65D40(3, "Palisade(%d) HW_poll: ioctl(fd, SET, RTS_on): %m", *v2);
      return -1;
    }
    else
    {
      v5 &= ~4u;
      sub_6055C(a1 + 232);
      if ( ioctl(*(_DWORD *)(a1 + 28), 0x5418u, &v5) == -1 )
      {
        sub_65D40(3, "Palisade(%d) HW_poll: ioctl(fd, UNSET, RTS_off): %m", *v2);
        return -1;
      }
      else
      {
        return 0;
      }
    }
  }
}
