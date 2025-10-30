void __fastcall sub_9249C(void **a1, void *a2)
{
  void **i; // r4
  __int64 v5; // r2
  void (__fastcall *v6)(void *); // r3

  for ( i = (void **)*a1; *a1 != a2; i = (void **)*a1 )
  {
    v5 = *(_QWORD *)i;
    *a1 = *i;
    ((void (__fastcall *)(void *))HIDWORD(v5))(i[3]);
    v6 = (void (__fastcall *)(void *))i[2];
    if ( v6 )
      v6(i[3]);
    free(i);
  }
}
