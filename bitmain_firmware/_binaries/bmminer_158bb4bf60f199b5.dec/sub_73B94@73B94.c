int sub_73B94()
{
  int v0; // r4
  _DWORD *v1; // r6
  _DWORD v3[512]; // [sp+10h] [bp-800h] BYREF

  if ( dword_1B0E60 )
  {
    v0 = dword_1B14CC;
    if ( dword_1B14CC )
    {
      v1 = (_DWORD *)dword_1B14D0;
    }
    else
    {
      v1 = sub_69ED4((int)sub_73AC4, 0, 0);
      dword_1B14D0 = (int)v1;
      pthread_mutex_init(&stru_1B14D4, 0);
      v0 = dword_1B14CC;
    }
    dword_1B14CC = v0 + 1;
    v3[0] = 0;
    v3[1] = 0;
    sub_69F24(v1);
    return v0 + 1;
  }
  else
  {
    strcpy((char *)v3, "please init platform first!!\n");
    sub_47AB4(0, (const char *)v3, 0);
    return -2;
  }
}
