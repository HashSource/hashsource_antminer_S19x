int __fastcall sub_346970(int a1, int a2)
{
  void *v3; // r0
  unsigned int *v5; // r2
  int v6; // r3
  int v7; // [sp+4h] [bp-8h] BYREF

  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 12))(&v7);
  sub_347324(a1, v7, *(_DWORD *)(v7 - 12));
  v3 = (void *)(v7 - 12);
  if ( (_UNKNOWN *)(v7 - 12) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v5 = (unsigned int *)(v7 - 4);
      __dmb(0xBu);
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      __dmb(0xBu);
    }
    else
    {
      v6 = *(_DWORD *)(v7 - 4);
      *(_DWORD *)(v7 - 4) = v6 - 1;
    }
    if ( v6 <= 0 )
      sub_344EA0(v3);
  }
  return a1;
}
