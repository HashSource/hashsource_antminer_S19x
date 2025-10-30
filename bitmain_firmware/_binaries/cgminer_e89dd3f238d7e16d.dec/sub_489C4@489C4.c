void __noreturn sub_489C4()
{
  __int64 v0; // r0
  int v1; // r6
  char v2[12]; // [sp+10h] [bp-83Ch] BYREF
  __time_t v3[2]; // [sp+810h] [bp-3Ch] BYREF
  struct timespec v4; // [sp+818h] [bp-34h] BYREF
  double v5; // [sp+820h] [bp-2Ch]
  _DWORD *v6; // [sp+82Ch] [bp-20h]
  int i; // [sp+830h] [bp-1Ch]
  int v8; // [sp+834h] [bp-18h]

  v8 = 0;
  pthread_setcanceltype(1, 0);
  sub_2A95C("Watchpool");
  sub_3B824();
  sub_21BE4(&v4);
  while ( 1 )
  {
    if ( ++v8 > 120 )
      v8 = 0;
    sub_21AC0(v3);
    for ( i = 0; i < dword_90E90; ++i )
    {
      v6 = *(_DWORD **)(dword_90F34 + 4 * i);
      if ( byte_86E18 != 1 && !dword_90DE0 )
      {
        sub_482F0((int)v6);
        sub_484E4(v6);
      }
      if ( v8 > 119 )
      {
        v0 = *((_QWORD *)v6 + 5) - (int)v6[38];
        v5 = sub_68214(v0, HIDWORD(v0));
        v6[38] = v6[10];
        *((double *)v6 + 18) = (*((double *)v6 + 18) + v5 * 0.63) / 1.63;
        v6[39] = (int)*((double *)v6 + 18);
      }
      if ( v6[25] && !*((_BYTE *)v6 + 284) )
      {
        if ( sub_40E18(v6, 1) )
        {
          if ( sub_2E910((int)v6, (unsigned __int8 *)v6 + 97) )
            sub_41E24((int)v6);
        }
        else
        {
          sub_21AC0(v6 + 34);
        }
        if ( *((_BYTE *)v6 + 97) != 1 && !dword_86CD4 )
        {
          v1 = v6[1];
          if ( v1 < sub_3E5A0() && v3[0] - v6[34] > dword_85A9C )
          {
            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
            {
              snprintf(v2, 0x800u, "Pool %d %s stable for >%d seconds", *v6, (const char *)v6[41], dword_85A9C);
              sub_1DB6C(4, v2, 0);
            }
            sub_35460(0);
          }
        }
      }
    }
    if ( *(_BYTE *)(sub_2E98C() + 97) )
      sub_35460(0);
    if ( dword_86CD4 == 2 && v3[0] - dword_88728 > 60 * dword_91F4C )
    {
      sub_21AC0(&dword_88728);
      sub_35460(0);
    }
    sub_21C4C(&v4, 5000);
    sub_21BE4(&v4);
  }
}
