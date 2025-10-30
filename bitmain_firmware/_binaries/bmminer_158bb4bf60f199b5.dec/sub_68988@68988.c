void __fastcall sub_68988(int a1, int a2)
{
  int v4; // r0
  pthread_t *v5; // r4
  int v6; // r5
  void (__fastcall *v7)(int, int); // r3
  pthread_t v8; // t1
  int v9; // r1

  v4 = sub_687C8(a1);
  if ( v4 == 258 )
  {
    sub_68948(a1);
  }
  else
  {
    v5 = (pthread_t *)&off_1B11DC;
    v6 = v4;
    do
    {
      v8 = *v5++;
      v7 = (void (__fastcall *)(int, int))v8;
      if ( v8 )
      {
        v9 = a2;
        if ( a2 )
          v9 = 1;
        v7(v6, v9);
      }
    }
    while ( v5 != &dword_1B11F0 );
  }
}
