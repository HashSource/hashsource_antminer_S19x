int __fastcall sub_7104C(unsigned int a1)
{
  int v2; // r6
  unsigned int v4; // [sp+0h] [bp-8h] BYREF
  __int16 v5; // [sp+4h] [bp-4h]
  char v6; // [sp+6h] [bp-2h]
  char v7; // [sp+7h] [bp-1h]

  if ( a1 > 0xF )
    return sub_70EA8(a1);
  v2 = dword_246410[2 * a1];
  if ( !v2 || !dword_246410[2 * a1 + 1] )
  {
    v5 = 0;
    v6 = 4;
    v4 = a1;
    v7 = a1;
    pthread_mutex_lock(&stru_1B147C);
    v2 = sub_73660(&v4);
    pthread_mutex_unlock(&stru_1B147C);
    if ( v2 >= 0 )
    {
      dword_246410[2 * a1] = v2;
      dword_246410[2 * a1 + 1] = 1;
    }
  }
  return v2;
}
