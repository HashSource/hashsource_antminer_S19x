int sub_27F888()
{
  int v0; // r0
  int v1; // r0
  int v2; // r2
  unsigned int v3; // r3
  int v4; // r0
  int v6; // r0
  int v7; // [sp+4h] [bp-8h]

  dword_48AAE4 = -1;
  v7 = dword_48AAE8;
  v0 = setjmp((struct __jmp_buf_tag *)&unk_48FF38);
  if ( v0 )
  {
    v0 = off_470784(v0);
    dword_48AF04 = 0;
    if ( (dword_48AAA0 & 0x80000) != 0 )
      return 0;
  }
  if ( !dword_48AAE0 )
  {
    v0 = sub_29703C();
    dword_48AADC = 0;
  }
  dword_48AAA0 |= 8u;
  v1 = sub_29334C(v0);
  v2 = v1;
  v3 = dword_48AAA0 & 0xFFFFFFF7;
  dword_48AAA0 &= ~8u;
  if ( v1 == -2 )
  {
    dword_48AAA0 = v3 | 0x1000000;
    dword_48FF30 = 1;
    return 1;
  }
  if ( v1 != -1 )
  {
    if ( v1 != dword_46DEE4 || dword_48AAE4 == v1 )
      goto LABEL_8;
    goto LABEL_17;
  }
  v6 = dword_4900DC;
  if ( dword_4900DC )
  {
    if ( dword_46DEE4 != 10 )
    {
      v2 = 10;
      goto LABEL_8;
    }
    v2 = dword_48AAE4;
    if ( dword_48AAE4 == 10 )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( dword_46DEE4 != -1 )
    goto LABEL_19;
  v2 = dword_48AAE4;
  if ( dword_48AAE4 != -1 )
  {
LABEL_17:
    v2 = dword_46DEE4;
    v6 = dword_4900DC;
  }
  if ( v6 )
  {
LABEL_8:
    dword_48AAE4 = v2;
    dword_4900CC = (int)off_46DED0;
    v4 = sub_27F46C((unsigned __int8)v2, (int *)off_46DED0, 0);
    if ( dword_48B6B8 )
      v4 = sub_291120(dword_48B6B8);
    if ( !dword_48AAE0 )
    {
      v4 = v7;
      if ( dword_48AAE8 == v7 )
        dword_48AAE8 = dword_48AAE0;
    }
    sub_27F26C(v4);
    return 0;
  }
LABEL_19:
  dword_48AAA0 = v3 | 0x1000000;
  dword_48FF30 = 1;
  return 1;
}
