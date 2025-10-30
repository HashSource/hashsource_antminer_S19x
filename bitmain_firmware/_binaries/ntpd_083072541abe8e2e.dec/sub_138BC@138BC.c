char *__fastcall sub_138BC(int a1)
{
  int v1; // r4
  char v3[12]; // [sp+0h] [bp-14h] BYREF

  v1 = a1;
  byte_B8E14[0] = 0;
  if ( (a1 & 0x2000) != 0 )
  {
    v1 = a1 & 0xDFFF;
    sub_D504(byte_B8E14, "flake");
  }
  if ( (v1 & 1) != 0 )
  {
    v1 &= 0xFFFEu;
    sub_D504(byte_B8E14, "ignore");
  }
  if ( (v1 & 0x800) != 0 )
  {
    v1 &= 0xF7FFu;
    sub_D504(byte_B8E14, "kod");
  }
  if ( (v1 & 0x1000) != 0 )
  {
    v1 &= 0xEFFFu;
    sub_D504(byte_B8E14, "mssntp");
  }
  if ( (v1 & 0x40) != 0 )
  {
    v1 &= 0xFFBFu;
    sub_D504(byte_B8E14, "limited");
  }
  if ( (v1 & 0x400) != 0 )
  {
    v1 &= 0xFBFFu;
    sub_D504(byte_B8E14, "lptrap");
  }
  if ( (v1 & 0x100) != 0 )
  {
    v1 &= 0xFEFFu;
    sub_D504(byte_B8E14, "nomodify");
  }
  if ( (v1 & 0x4000) != 0 )
  {
    v1 &= 0xBFFFu;
    sub_D504(byte_B8E14, "nomrulist");
    if ( (v1 & 0x20) == 0 )
    {
LABEL_17:
      if ( (v1 & 0x10) == 0 )
        goto LABEL_18;
      goto LABEL_30;
    }
  }
  else if ( (v1 & 0x20) == 0 )
  {
    goto LABEL_17;
  }
  v1 &= 0xFFDFu;
  sub_D504(byte_B8E14, "noepeer");
  if ( (v1 & 0x10) == 0 )
  {
LABEL_18:
    if ( (v1 & 0x80) == 0 )
      goto LABEL_19;
    goto LABEL_31;
  }
LABEL_30:
  v1 &= 0xFFEFu;
  sub_D504(byte_B8E14, "nopeer");
  if ( (v1 & 0x80) == 0 )
  {
LABEL_19:
    if ( (v1 & 2) == 0 )
      goto LABEL_20;
    goto LABEL_32;
  }
LABEL_31:
  v1 &= 0xFF7Fu;
  sub_D504(byte_B8E14, "noquery");
  if ( (v1 & 2) == 0 )
  {
LABEL_20:
    if ( (v1 & 0x200) == 0 )
      goto LABEL_21;
    goto LABEL_33;
  }
LABEL_32:
  v1 &= 0xFFFDu;
  sub_D504(byte_B8E14, "dontserve");
  if ( (v1 & 0x200) == 0 )
  {
LABEL_21:
    if ( (v1 & 4) == 0 )
      goto LABEL_22;
LABEL_34:
    v1 &= 0xFFFBu;
    sub_D504(byte_B8E14, "notrust");
    if ( (v1 & 8) == 0 )
      goto LABEL_23;
    goto LABEL_35;
  }
LABEL_33:
  v1 &= 0xFDFFu;
  sub_D504(byte_B8E14, "notrap");
  if ( (v1 & 4) != 0 )
    goto LABEL_34;
LABEL_22:
  if ( (v1 & 8) == 0 )
    goto LABEL_23;
LABEL_35:
  v1 &= 0xFFF7u;
  sub_D504(byte_B8E14, "version");
LABEL_23:
  if ( v1 )
  {
    sub_6C054(v3, 10, "%0x", v1);
    sub_D504(byte_B8E14, v3);
  }
  if ( !byte_B8E14[0] )
    sub_D504(byte_B8E14, "(none)");
  return byte_B8E14;
}
