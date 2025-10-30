int __fastcall sub_71FBC(unsigned int a1)
{
  int result; // r0
  int v3; // r4
  char *v4; // r3
  unsigned int v5; // [sp+0h] [bp-8h] BYREF
  __int16 v6; // [sp+4h] [bp-4h]
  char v7; // [sp+6h] [bp-2h]
  char v8; // [sp+7h] [bp-1h]

  if ( a1 > 0xF )
    return sub_71E88(a1);
  result = dword_71ED68[2 * a1];
  if ( !result || !dword_71ED68[2 * a1 + 1] )
  {
    v6 = 0;
    v7 = 4;
    v5 = a1;
    v8 = a1;
    pthread_mutex_lock(&stru_65E42C);
    v3 = sub_76574(&v5);
    pthread_mutex_unlock(&stru_65E42C);
    if ( v3 >= 0 )
      v4 = (char *)&dword_71ED68[2 * a1];
    result = v3;
    if ( v3 >= 0 )
    {
      dword_71ED68[2 * a1] = v3;
      *((_DWORD *)v4 + 1) = 1;
    }
  }
  return result;
}
