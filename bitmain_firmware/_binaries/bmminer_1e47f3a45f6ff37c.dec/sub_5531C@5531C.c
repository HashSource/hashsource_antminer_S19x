int sub_5531C()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int i; // [sp+4h] [bp-8h]

  if ( !dword_535EFC )
  {
    v0 = sub_55088(1u);
    sub_56DB8(v0);
    v1 = sub_55088(1u);
    sub_57258(v1, 1);
    v2 = sub_55088(2u);
    sub_56DB8(v2);
    v3 = sub_55088(2u);
    sub_57258(v3, 1);
    v4 = sub_55088(0x100u);
    sub_56DB8(v4);
    v5 = sub_55088(0x101u);
    sub_56DB8(v5);
    v6 = sub_55088(0x100u);
    sub_56ABC(v6, 348724);
    v7 = sub_55088(0x101u);
    sub_56ABC(v7, 348724);
    pthread_mutex_init(&stru_535EE0, 0);
    for ( i = 0; i <= 4; ++i )
      dword_535F08[i] = 0;
    dword_535EF8 = sub_59400(348240, 0, 0);
    dword_535F00 = 1;
    pthread_create((pthread_t *)&dword_535F04, 0, (void *(*)(void *))sub_54E7C, 0);
    dword_535EFC = 1;
  }
  return 0;
}
