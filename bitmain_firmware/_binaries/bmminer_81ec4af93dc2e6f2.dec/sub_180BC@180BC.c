int __fastcall sub_180BC(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r4
  int v9; // r0

  if ( sub_266F0(a1) )
    v6 = (unsigned int)a3 >> 31;
  else
    v6 = 1;
  if ( !v6 )
  {
    if ( a2 == 1 )
    {
      if ( sub_17674() > a3 )
      {
LABEL_9:
        pthread_mutex_lock(&stru_B0EE8);
        v7 = *(__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_B0EE0 + 4 * a1) + 4 * a2) + 6 * a3 + 2);
        pthread_mutex_unlock(&stru_B0EE8);
        return v7;
      }
    }
    else if ( a2 == 2 )
    {
      v9 = sub_17674();
      if ( v9 > a3 && sub_265C0(v9) )
        goto LABEL_9;
    }
    else if ( a2 || sub_265EC(0) > a3 )
    {
      goto LABEL_9;
    }
  }
  return 255;
}
