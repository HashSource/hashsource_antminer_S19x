int __fastcall sub_58668(int a1, int a2, int *a3, unsigned int a4)
{
  char v9[12]; // [sp+10h] [bp-80Ch] BYREF
  int v10; // [sp+810h] [bp-Ch]
  int v11; // [sp+814h] [bp-8h]

  v11 = -1;
  pthread_mutex_lock(&stru_535F94[a1]);
  v10 = sub_57C34(a1);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v11 = sub_58580(v10, a3, a4);
    }
    else
    {
      snprintf(v9, 0x800u, "unknown set config type = %d\n", a2);
      sub_3B6AC(1, v9, 0, (int)v9);
    }
  }
  else
  {
    v11 = sub_583A8(v10, a3, a4);
  }
  pthread_mutex_unlock(&stru_535F94[a1]);
  return v11;
}
