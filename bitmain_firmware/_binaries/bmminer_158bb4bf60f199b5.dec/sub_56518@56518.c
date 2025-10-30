int __fastcall sub_56518(int a1)
{
  int v2; // r4

  if ( pthread_rwlock_rdlock(&stru_24638C) )
    sub_561E4("get_devices", 624);
  v2 = *(_DWORD *)(dword_242FEC + 4 * a1);
  if ( pthread_rwlock_unlock(&stru_24638C) )
    sub_55C08("get_devices", 626);
  off_9E444();
  return v2;
}
