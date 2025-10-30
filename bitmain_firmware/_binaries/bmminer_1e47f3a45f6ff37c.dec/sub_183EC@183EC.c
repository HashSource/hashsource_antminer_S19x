int __fastcall sub_183EC(int a1, unsigned int a2, int a3)
{
  int v6; // r0
  __int16 v7; // r4
  int v9; // r0
  _BOOL4 v10; // r3

  v6 = pthread_mutex_lock(&stru_B3C58);
  if ( dword_B3C70 == 3 )
  {
    if ( a2 != 3 )
    {
LABEL_6:
      v9 = sub_179C4();
      goto LABEL_7;
    }
  }
  else
  {
    if ( dword_B3C70 )
      goto LABEL_3;
    if ( a2 )
      goto LABEL_6;
  }
  v9 = sub_26AF4(v6);
LABEL_7:
  v10 = a2 > 3;
  if ( a1 > 3 )
    v10 = 1;
  if ( !v10 && v9 > a3 )
  {
    v7 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(dword_B3C50 + 4 * a1) + 4 * a2) + 6 * (__int16)a3 + 4);
    goto LABEL_4;
  }
LABEL_3:
  v7 = 0;
LABEL_4:
  pthread_mutex_unlock(&stru_B3C58);
  return v7;
}
