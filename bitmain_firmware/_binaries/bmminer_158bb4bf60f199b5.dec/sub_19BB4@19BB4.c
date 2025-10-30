int sub_19BB4()
{
  int v0; // r4
  int v1; // r5
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( *(_BYTE *)(dword_A0D68 + 12935) )
  {
    v0 = 0;
    while ( 1 )
    {
      if ( (unsigned int)dword_9E31C > 4 )
      {
        snprintf(s, 0x800u, "retry time: %d\n", v0);
        sub_47AB4(4, s, 0);
      }
      ++v0;
      v1 = sub_19868();
      if ( !v1 )
      {
        sleep(1u);
        v1 = sub_19868();
        if ( !v1 )
          break;
      }
      sleep(1u);
      if ( v0 == 30 )
        return v1;
    }
  }
  return 0;
}
