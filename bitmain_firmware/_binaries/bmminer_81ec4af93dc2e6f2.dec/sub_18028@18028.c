int __fastcall sub_18028(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r4
  int v9; // r0

  v6 = pthread_mutex_lock(&stru_B0EE8);
  if ( dword_B0F00 != 3 )
  {
    if ( dword_B0F00 )
      goto LABEL_3;
    if ( a2 )
      goto LABEL_6;
LABEL_11:
    v9 = sub_265EC(v6);
    goto LABEL_7;
  }
  if ( a2 == 3 )
    goto LABEL_11;
LABEL_6:
  v9 = sub_17674();
LABEL_7:
  if ( a1 <= 3 && a3 < v9 )
  {
    v7 = *(__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_B0EE0 + 4 * a1) + 4 * a2) + 6 * a3 + 4);
    goto LABEL_4;
  }
LABEL_3:
  v7 = 0;
LABEL_4:
  pthread_mutex_unlock(&stru_B0EE8);
  return v7;
}
