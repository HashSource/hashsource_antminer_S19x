int __fastcall sub_3ED58(int a1)
{
  int v2; // r0
  int v3; // r0
  unsigned int v4; // r4
  pthread_t v5; // r0
  unsigned int i; // r9
  _BYTE v8[16]; // [sp+0h] [bp-44h] BYREF
  char v9[52]; // [sp+10h] [bp-34h] BYREF

  sub_1E938(v9, 0x30u);
  printf("%s ", v9);
  printf("%s : BTC start %s\n", "recv_routine", "recv_routine");
  snprintf(byte_636FCC, 0x100u, "BTC start %s", "recv_routine");
  v2 = sub_3CC5C((int)byte_636FCC, v9);
  sub_71650(v2);
  while ( *(_DWORD *)(a1 + 138968) )
  {
    v3 = usleep(5u);
    v4 = (unsigned int)sub_71270(v3) >> 1;
    if ( v4 )
    {
      for ( i = 0; i < v4; ++i )
      {
        sub_712AC(v8);
        if ( !*(_DWORD *)(a1 + 138976) )
        {
          if ( (v8[3] & 0x80) != 0 )
            (*(void (__fastcall **)(_BYTE *, int))(a1 + 138928))(v8, a1);
          else
            (*(void (__fastcall **)(_BYTE *, int))(a1 + 138932))(v8, a1);
        }
      }
    }
  }
  sub_1E938(v9, 0x30u);
  printf("%s ", v9);
  printf("%s : BTC recv %s stop\n", "recv_routine", "recv_routine");
  snprintf(byte_6370CC, 0x100u, "BTC recv %s stop", "recv_routine");
  sub_3CC5C((int)byte_6370CC, v9);
  v5 = pthread_self();
  pthread_detach(v5);
  return 0;
}
