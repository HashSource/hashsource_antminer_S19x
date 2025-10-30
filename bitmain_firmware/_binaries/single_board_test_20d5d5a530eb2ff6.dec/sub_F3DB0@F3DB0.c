int sub_F3DB0()
{
  int v0; // r4
  int *v2; // r0
  int *v3; // r5

  if ( sub_10C594(&unk_6E1AC8, sub_F39EC) && dword_6E1AC4 )
  {
    v0 = sub_10C5B4(&unk_6E1AB8);
    if ( v0 )
      return v0;
    if ( sub_DE414(4) )
    {
      v0 = dword_6E1AC0;
      v2 = (int *)sub_F3724(dword_21FB4C, dword_6E1AB4, (int *)dword_6E1AC0);
      v3 = v2;
      if ( v2 )
      {
        if ( v0 || sub_F396C(v2) )
        {
          v0 = (int)v3;
          v3[20] = 1;
          __dmb(0xBu);
          v3[21] = 1;
          __dmb(0xBu);
          sub_F2FB8(v3, (int)"OpenSSL NIST SP 800-90A DRBG", 0x1Cu);
        }
        else
        {
          sub_F2F54(v3);
        }
      }
      else
      {
        v0 = 0;
      }
      sub_10C5BC(&unk_6E1AB8, v0);
      return v0;
    }
  }
  return 0;
}
