int __fastcall sub_17F00(int a1, int a2, int a3)
{
  int v6; // r4
  int v8; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( a2 )
  {
    if ( a2 == 3 )
    {
      if ( sub_26DF8() <= a3 )
        goto LABEL_7;
    }
    else if ( !sub_265C0(a1) || sub_17674() <= a3 || !dword_B0EE4 )
    {
      goto LABEL_7;
    }
  }
  else if ( sub_265EC() <= a3 )
  {
    goto LABEL_7;
  }
  if ( dword_B0EE0 )
  {
    pthread_mutex_lock(&stru_B0EE8);
    v6 = *(__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_B0EE0 + 4 * a1) + 4 * a2) + 6 * a3 + 2);
    pthread_mutex_unlock(&stru_B0EE8);
    return v6;
  }
LABEL_7:
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "get_sensor_temp_by_index invalid return 255!!, location:%d, index:%d", a2, a3);
    sub_3AF5C(4, s, 0, v8);
  }
  return 255;
}
