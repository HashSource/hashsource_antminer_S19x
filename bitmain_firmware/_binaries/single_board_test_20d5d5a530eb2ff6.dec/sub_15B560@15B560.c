_DWORD *__fastcall sub_15B560(int *a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r6
  _DWORD *v7; // r0
  unsigned int v8; // r3
  unsigned int v9; // r5
  _DWORD *v10; // r0
  _DWORD *v11; // r4
  int (*v13)(void); // r2
  int v14; // r0
  _DWORD v15[4]; // [sp+0h] [bp-10h] BYREF

  if ( !*a1 )
    return 0;
  sub_D1260();
  sub_10C554((pthread_rwlock_t *)global_engine_lock);
  v4 = *a1;
  if ( *a1 && (v15[0] = a2, v5 = sub_DFA98(v4, (int)v15), (v6 = v5) != 0) )
  {
    v7 = *(_DWORD **)(v5 + 8);
    if ( v7 && sub_CDC90(v7) || (v8 = *(_DWORD *)(v6 + 12)) != 0 )
    {
      v11 = *(_DWORD **)(v6 + 8);
      *(_DWORD *)(v6 + 12) = 1;
    }
    else
    {
      while ( 1 )
      {
        v9 = v8 + 1;
        v10 = (_DWORD *)sub_10C01C(*(_DWORD **)(v6 + 4), v8);
        v11 = v10;
        if ( !v10 )
          break;
        if ( ((int)v10[21] > 0 || (dword_6E1CD8 & 1) == 0) && sub_CDC90(v10) )
        {
          if ( v11 != *(_DWORD **)(v6 + 8) && sub_CDC90(v11) )
          {
            v14 = *(_DWORD *)(v6 + 8);
            if ( v14 )
              sub_CDCEC(v14, 0, v13);
            *(_DWORD *)(v6 + 8) = v11;
          }
          break;
        }
        v8 = v9;
      }
      *(_DWORD *)(v6 + 12) = 1;
    }
  }
  else
  {
    v11 = 0;
  }
  sub_10C564((pthread_rwlock_t *)global_engine_lock);
  sub_D128C();
  return v11;
}
