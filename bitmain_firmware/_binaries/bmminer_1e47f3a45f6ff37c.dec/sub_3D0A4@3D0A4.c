int __fastcall sub_3D0A4(int a1, char a2)
{
  pthread_mutex_t *v2; // r5

  v2 = (pthread_mutex_t *)(a1 + 12);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 12)) )
    sub_3D040("tq_freezethaw", 1108);
  *(_BYTE *)(a1 + 8) = a2;
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  sub_3CFC4(v2, "tq_freezethaw", 1111);
  return off_B31B8();
}
