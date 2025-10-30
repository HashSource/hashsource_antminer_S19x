int __fastcall sub_557E0(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r0
  int v9; // [sp+18h] [bp-Ch]
  unsigned int v10; // [sp+1Ch] [bp-8h]

  pthread_mutex_lock(&stru_531224[a1]);
  v10 = sub_54AF8(a1);
  if ( v10 > a3 )
    v10 = a3;
  if ( v10 )
  {
    v3 = sub_8C218(v10, 1);
    v9 = sub_54D5C(a1, a2, v3);
    sub_8C218(v10, 1);
    pthread_mutex_unlock(&stru_531224[a1]);
    return v9;
  }
  else
  {
    pthread_mutex_unlock(&stru_531224[a1]);
    return 0;
  }
}
