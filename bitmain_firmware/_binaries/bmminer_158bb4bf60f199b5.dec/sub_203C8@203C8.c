int __fastcall sub_203C8(char *a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r9
  int v5; // r5
  struct in_addr *i; // r4
  char *v8; // r1
  _DWORD v10[2]; // [sp+0h] [bp-208h] BYREF
  _OWORD v11[32]; // [sp+8h] [bp-200h] BYREF

  v2 = socket(2, 2, 0);
  v3 = v2;
  if ( v2 < 0 )
    return -1;
  v10[0] = 512;
  v10[1] = v11;
  if ( ioctl(v2, 0x8912u, v10) )
  {
    v4 = -1;
  }
  else
  {
    v4 = -1;
    v5 = v10[0] >> 5;
    for ( i = (struct in_addr *)&v11[2 * (v10[0] >> 5) - 2]; v5-- != 0; i -= 8 )
    {
      if ( !ioctl(v3, 0x8915u, i) )
      {
        v8 = inet_ntoa(i[5]);
        if ( v8 )
        {
          strcpy(a1, v8);
          v4 = strcmp("127.0.0.1", a1);
          if ( v4 )
          {
            v4 = 0;
            break;
          }
        }
      }
    }
  }
  close(v3);
  return v4;
}
