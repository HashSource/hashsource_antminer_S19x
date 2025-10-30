int __fastcall sub_3046C(int a1)
{
  int v2; // r4

  if ( pthread_rwlock_rdlock(&stru_7680C) )
    sub_30138("get_devices", 629);
  v2 = *(_DWORD *)(dword_7346C + 4 * a1);
  if ( pthread_rwlock_unlock(&stru_7680C) )
    sub_2FB24("get_devices", 631);
  off_67ED8();
  return v2;
}
