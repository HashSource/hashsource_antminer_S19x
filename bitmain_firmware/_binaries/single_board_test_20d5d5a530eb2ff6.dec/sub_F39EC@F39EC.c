int sub_F39EC()
{
  int result; // r0
  int v1; // r3
  int *v2; // r0
  int *v3; // r6

  result = sub_DE05C(0, 0, 0);
  if ( result )
  {
    result = sub_10C5A4(&unk_6E1AB8, 0);
    if ( result )
    {
      if ( sub_10C5A4(&unk_6E1ABC, 0) )
      {
        v2 = (int *)sub_F3724(dword_21FB4C, dword_6E1AB4, 0);
        v3 = v2;
        if ( v2 )
        {
          if ( sub_F396C(v2) )
          {
            v3[20] = 1;
            __dmb(0xBu);
            v3[21] = 1;
            __dmb(0xBu);
            result = sub_F2FB8(v3, (int)"OpenSSL NIST SP 800-90A DRBG", 0x1Cu);
            v1 = 1;
            dword_6E1AC0 = (int)v3;
            goto LABEL_3;
          }
          sub_F2F54(v3);
        }
        dword_6E1AC0 = 0;
        sub_10C5CC(&unk_6E1ABC);
      }
      result = sub_10C5CC(&unk_6E1AB8);
    }
  }
  v1 = 0;
LABEL_3:
  dword_6E1AC4 = v1;
  return result;
}
