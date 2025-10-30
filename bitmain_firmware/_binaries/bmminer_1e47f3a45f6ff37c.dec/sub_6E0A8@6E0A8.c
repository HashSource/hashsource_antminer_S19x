void sub_6E0A8()
{
  char v0[2048]; // [sp+4h] [bp-810h] BYREF
  int buf; // [sp+804h] [bp-10h] BYREF
  char v2; // [sp+808h] [bp-Ch]
  ssize_t v3; // [sp+80Ch] [bp-8h]

  if ( dword_536964 != 1 )
  {
    buf = 7632239;
    v2 = 0;
    v3 = write(dword_B3990, &buf, 3u);
    if ( v3 != 3 )
    {
      strcpy(v0, "write out\n");
      sub_3B6AC(3, v0, 0, (int)v0);
    }
    close(dword_B398C);
    dword_B398C = -1;
    dword_B398C = open("/sys/class/gpio/gpio461/value", 1);
    if ( dword_B398C < 0 )
    {
      strcpy(v0, "open gpio461 failed\n");
      sub_3B6AC(3, v0, 0, (int)v0);
    }
    dword_536964 = 1;
  }
}
