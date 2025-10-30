int __fastcall sub_6E4B4(char a1)
{
  char v4[2049]; // [sp+Ch] [bp-808h] BYREF
  char v5; // [sp+80Dh] [bp-7h]
  unsigned __int8 v6; // [sp+80Eh] [bp-6h]
  unsigned __int8 i; // [sp+80Fh] [bp-5h]

  v6 = 0;
  sub_6DF48();
  for ( i = 0x80; i; i >>= 1 )
  {
    sub_6D76C();
    sub_6D56C();
    close(dword_B398C);
    dword_B398C = open("/sys/class/gpio/gpio461/value", 0);
    if ( dword_B398C < 0 )
    {
      strcpy(v4, "open gpio461 failed\n");
      sub_3B6AC(3, v4, 0, (int)v4);
      sub_6D6C4();
      sub_6D56C();
      return 255;
    }
    v5 = sub_6D808();
    if ( v5 == 1 )
    {
      v6 |= i;
    }
    else if ( v5 == -1 )
    {
      sub_6D6C4();
      sub_6D56C();
      strcpy(v4, "read GPIO461 error");
      sub_3B6AC(3, v4, 0, (int)v4);
      return 255;
    }
    sub_6D6C4();
    sub_6D56C();
  }
  sub_6E344(a1);
  return v6;
}
