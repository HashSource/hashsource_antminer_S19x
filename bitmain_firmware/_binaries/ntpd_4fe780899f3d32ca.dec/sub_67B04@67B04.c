time_t __fastcall sub_67B04(time_t result, time_t a2, _DWORD *a3)
{
  time_t v4; // r7
  int v6; // r4
  int v7; // r7
  int v8; // r3
  time_t v9; // r9
  const char *v10; // r10
  const char *v11; // r7
  const char *v12; // r0
  time_t v13; // r0
  int v14; // r1

  v4 = result;
  if ( a3[1] <= result )
  {
    result = time(0);
    v9 = result;
    if ( a2 > result )
    {
      if ( debug > 0 )
      {
        v10 = (const char *)sub_78840(a2);
        v11 = (const char *)sub_78840(v4);
        v12 = (const char *)sub_78840(a3[1]);
        sub_64D28("sleep until %s scheduled at %s (>= %s)\n", v10, v11, v12);
      }
      result = sub_6E3C8(*a3, a2 - v9);
      if ( result == -1 )
      {
        v13 = time(0);
        a3[1] = v13;
        a3[2] = v13 + 60;
        dword_107204 = v13 + 60;
        result = _res_init();
        if ( debug > 0 )
        {
          v14 = sub_78840(a3[1]);
          return sub_64D28("sleep interrupted by daemon, ignoring sleeps scheduled before now (%s)\n", v14);
        }
      }
    }
  }
  else if ( debug > 0 )
  {
    v6 = sub_78840(a2);
    v7 = sub_78840(v4);
    v8 = sub_78840(a3[1]);
    return sub_64D28("ignoring sleep until %s scheduled at %s (before %s)\n", v6, v7, v8);
  }
  return result;
}
