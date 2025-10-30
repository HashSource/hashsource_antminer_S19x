int __fastcall sub_1849C(int a1, int a2, int a3)
{
  _BOOL4 v6; // r0
  int v8; // r0
  int v9; // r4

  v6 = sub_26C0C(a1) == 0;
  if ( v6 | ((unsigned int)a3 >> 31) )
    return 255;
  if ( a2 == 1 )
  {
    if ( a3 >= sub_179C4() )
      return 255;
  }
  else if ( a2 == 2 )
  {
    v8 = sub_179C4();
    if ( a3 >= v8 || !sub_26AC4(v8) )
      return 255;
  }
  else if ( !a2 && a3 >= sub_26AF4(v6) )
  {
    return 255;
  }
  pthread_mutex_lock(&stru_B3C58);
  v9 = *(__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_B3C50 + 4 * a1) + 4 * a2) + 6 * a3 + 2);
  pthread_mutex_unlock(&stru_B3C58);
  return v9;
}
