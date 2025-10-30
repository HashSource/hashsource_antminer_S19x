int __fastcall sub_4B2C8(unsigned __int8 *a1)
{
  pthread_t v1; // r0
  char v3[12]; // [sp+10h] [bp-80Ch] BYREF
  unsigned __int8 *v4; // [sp+810h] [bp-Ch]
  bool v5; // [sp+817h] [bp-5h]

  v4 = a1;
  if ( a1[107] != 1 )
  {
    v1 = pthread_self();
    pthread_detach(v1);
  }
  while ( !v4[105] )
  {
    if ( sub_40E18(v4, 0) )
    {
      sub_2E910((int)v4, v4 + 97);
      v5 = 0;
      sub_2D95C((int)&unk_94178, "cgminer.c", "test_pool_thread", 10866);
      if ( byte_88730 != 1 )
      {
        dword_86EF8 = (int)v4;
        v5 = *(_DWORD *)v4 != 0;
        byte_88730 = 1;
      }
      sub_2DA5C((int)&unk_94178, "cgminer.c", "test_pool_thread", 10880);
      if ( v5 && (byte_90DC0 || byte_865D1 || dword_857E4 > 4) )
      {
        snprintf(v3, 0x800u, "Switching to pool %d %s - first alive pool", *(_DWORD *)v4, *((const char **)v4 + 41));
        sub_1DB6C(5, v3, 0);
      }
      sub_41E24((int)v4);
      sub_35460(0);
LABEL_15:
      v4[284] = 0;
      return 0;
    }
    sub_348D4(v4);
    if ( v4[107] == 1 )
      goto LABEL_15;
    sleep(0x1Eu);
  }
  return 0;
}
