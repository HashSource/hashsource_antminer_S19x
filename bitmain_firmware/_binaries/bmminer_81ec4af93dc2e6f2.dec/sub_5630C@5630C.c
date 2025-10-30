int __fastcall sub_5630C(int a1)
{
  int v3; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&stru_531224[a1]);
  v3 = sub_54AF8(a1);
  pthread_mutex_unlock(&stru_531224[a1]);
  return v3;
}
