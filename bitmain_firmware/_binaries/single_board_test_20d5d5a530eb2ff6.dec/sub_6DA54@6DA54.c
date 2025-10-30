int __fastcall sub_6DA54(int a1)
{
  int v2; // r0
  int v3; // r5
  char *v4; // r2
  int v5; // r3
  char v6; // t1
  char v8[17]; // [sp+0h] [bp-824h] BYREF
  char v9; // [sp+11h] [bp-813h] BYREF
  char v10[2052]; // [sp+20h] [bp-804h] BYREF

  v2 = socket(2, 1, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    strcpy(v10, "error sock");
    nullsub_8();
    return -1;
  }
  else
  {
    strcpy(v8, "eth0");
    if ( ioctl(v2, 0x8927u, v8, "eth0") < 0 )
    {
      strcpy(v10, "error ioctl");
      nullsub_8();
      close(v3);
      return -2;
    }
    else
    {
      v4 = &v9;
      v5 = a1 - 1;
      do
      {
        v6 = *++v4;
        *(_BYTE *)++v5 = v6;
      }
      while ( v5 != a1 + 5 );
      close(v3);
      return 0;
    }
  }
}
