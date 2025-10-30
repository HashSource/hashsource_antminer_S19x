int __fastcall sub_49530(int a1)
{
  pthread_mutex_t *v1; // r5
  int result; // r0
  _BYTE *v4; // r3

  v1 = (pthread_mutex_t *)(a1 + 704);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 704)) )
    sub_494CC("clear_sock", 1765);
  while ( *(_DWORD *)(a1 + 588) && recv(*(_DWORD *)(a1 + 588), *(void **)(a1 + 592), 0x1FFCu, 0) > 0 )
    ;
  sub_49450(v1, "clear_sock", 1774);
  result = off_9E444();
  v4 = *(_BYTE **)(a1 + 592);
  if ( v4 )
    *v4 = 0;
  return result;
}
