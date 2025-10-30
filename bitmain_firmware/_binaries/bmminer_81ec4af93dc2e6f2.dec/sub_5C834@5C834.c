int __fastcall sub_5C834(int a1, unsigned int a2)
{
  int v2; // r0
  unsigned int i; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&stru_5314C4);
  for ( i = 0; i < a2 >> 2; ++i )
  {
    if ( i )
      v2 = 17;
    else
      v2 = 16;
    sub_52EA0(v2, *(_DWORD *)(a1 + 4 * i));
  }
  return pthread_mutex_unlock(&stru_5314C4);
}
