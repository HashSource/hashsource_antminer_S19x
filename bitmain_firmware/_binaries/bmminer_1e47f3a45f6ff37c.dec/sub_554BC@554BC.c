void sub_554BC()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  if ( dword_535EFC )
  {
    dword_535F00 = 0;
    pthread_join(dword_535F04, 0);
    sub_5969C(dword_535EF8);
    pthread_mutex_destroy(&stru_535EE0);
    v0 = sub_55088(0x100u);
    sub_56C28(v0, 348724);
    v1 = sub_55088(0x101u);
    sub_56C28(v1, 348724);
    v2 = sub_55088(1u);
    sub_56FFC(v2);
    v3 = sub_55088(2u);
    sub_56FFC(v3);
    v4 = sub_55088(0x100u);
    sub_56FFC(v4);
    v5 = sub_55088(0x101u);
    sub_56FFC(v5);
    dword_535EFC = 0;
  }
}
