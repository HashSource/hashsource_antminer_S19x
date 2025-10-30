int __fastcall sub_22958(int a1, char a2)
{
  pthread_mutex_t *v2; // r5

  v2 = (pthread_mutex_t *)(a1 + 12);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 12)) )
    sub_22864("tq_freezethaw", 1108);
  *(_BYTE *)(a1 + 8) = a2;
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  sub_227E8(v2, "tq_freezethaw", 1111);
  return off_67ED8();
}
