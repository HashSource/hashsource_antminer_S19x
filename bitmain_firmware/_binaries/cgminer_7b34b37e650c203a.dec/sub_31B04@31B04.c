int __fastcall sub_31B04(int a1)
{
  int v2; // r4

  if ( pthread_rwlock_rdlock(&stru_744A8) )
    sub_30138("get_thread", 609);
  v2 = *(_DWORD *)(dword_744A4 + 4 * a1);
  if ( pthread_rwlock_unlock(&stru_744A8) )
    sub_2FB24("get_thread", 611);
  off_67ED8();
  return v2;
}
