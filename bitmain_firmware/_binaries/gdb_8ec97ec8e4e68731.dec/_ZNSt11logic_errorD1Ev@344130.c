void __fastcall std::logic_error::~logic_error(std::logic_error *this)
{
  int v1; // r5
  void *v2; // r0
  unsigned int *v3; // r5
  int v4; // r3

  v1 = *((_DWORD *)this + 1);
  *(_DWORD *)this = &off_468E3C;
  v2 = (void *)(v1 - 12);
  if ( (_UNKNOWN *)(v1 - 12) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v3 = (unsigned int *)(v1 - 4);
      __dmb(0xBu);
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
      __dmb(0xBu);
    }
    else
    {
      v4 = *(_DWORD *)(v1 - 4);
      *(_DWORD *)(v1 - 4) = v4 - 1;
    }
    if ( v4 <= 0 )
      sub_344EA0(v2);
  }
  nullsub_34();
}
