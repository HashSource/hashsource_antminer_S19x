int __fastcall sub_55EAC(char a1, int a2, int a3)
{
  char v8[2048]; // [sp+14h] [bp-808h] BYREF
  int v9; // [sp+814h] [bp-8h]

  v9 = -1;
  if ( pthread_mutex_lock(&stru_535EE0) )
  {
    strcpy(v8, "failed to api lock\n");
    sub_3B6AC(0, v8, 0, (int)v8);
    return -4;
  }
  else
  {
    if ( dword_B380C < 0 )
    {
      dword_B380C = sub_6E75C(off_B3810);
      sub_6EA9C(dword_B380C);
    }
    if ( dword_B380C <= 0 )
    {
      snprintf(v8, 0x800u, "failed to init %s\n", off_B3810);
      sub_3B6AC(0, v8, 0, (int)v8);
      v9 = -1;
    }
    else
    {
      v9 = sub_6E880(dword_B380C, a1, a2, a3);
    }
    pthread_mutex_unlock(&stru_535EE0);
    return v9;
  }
}
