int __fastcall sub_46C50(int a1, pthread_rwlock_t *a2, int a3, int a4)
{
  int result; // r0
  _DWORD *v9; // [sp+10h] [bp-Ch] BYREF
  bool v10; // [sp+17h] [bp-5h]

  do
  {
    v10 = a2[11].__nr_readers == 0;
    if ( v10 )
    {
      v9 = sub_44158(a1, a4);
      sub_2E4CC(a2 + 10, "cgminer.c", "fill_queue", 9452);
      if ( a2[11].__nr_readers )
        v10 = 0;
      else
        a2[11].__nr_readers = (unsigned int)v9;
      sub_2E74C(a2 + 10, "cgminer.c", "fill_queue", 9463);
      if ( !v10 )
        sub_36898((void **)&v9, "cgminer.c", "fill_queue", 9467);
    }
    result = (*(int (__fastcall **)(pthread_rwlock_t *))(a3 + 72))(a2);
  }
  while ( (unsigned __int8)result != 1 );
  return result;
}
