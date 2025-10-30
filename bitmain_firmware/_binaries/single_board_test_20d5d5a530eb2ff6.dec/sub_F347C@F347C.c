int __fastcall sub_F347C(_DWORD *a1, int a2, unsigned int a3, int a4, int a5, unsigned int a6)
{
  unsigned int v10; // r6
  int v11; // r5
  __pid_t v12; // r0
  unsigned int v13; // r3
  int v14; // r5
  time_t v15; // r0
  int v16; // r2
  int v17; // r2

  v10 = a6;
  if ( a1[23] != 1 )
  {
    sub_F3328(a1, 0, 0, 0);
    v11 = a1[23];
    if ( v11 == 2 )
    {
      sub_D0048(36, 107, 114, (int)"crypto/rand/drbg_lib.c", 578);
      return 0;
    }
    if ( !v11 )
    {
      sub_D0048(36, 107, 115, (int)"crypto/rand/drbg_lib.c", 582);
      return 0;
    }
  }
  if ( a1[9] >= a3 )
  {
    if ( a1[15] < a6 )
    {
      sub_D0048(36, 107, 102, (int)"crypto/rand/drbg_lib.c", 592);
    }
    else
    {
      v12 = j_j_getpid();
      v13 = a1[17];
      if ( v12 == a1[4] )
      {
        v14 = 0;
      }
      else
      {
        a1[4] = v12;
        v14 = 1;
      }
      if ( v13 && v13 <= a1[16] )
        v14 = 1;
      if ( (int)a1[19] > 0 )
      {
        v15 = time(0);
        v16 = a1[18];
        if ( v15 >= v16 )
        {
          if ( v15 - v16 >= a1[19] )
            v14 = 1;
        }
        else
        {
          v14 = 1;
        }
      }
      if ( a1[20] && a1[1] )
      {
        __dmb(0xBu);
        v17 = a1[21];
        __dmb(0xBu);
        if ( v17 != *(_DWORD *)(a1[1] + 84) )
          v14 = 1;
      }
      if ( !(v14 | a4) )
        goto LABEL_23;
      if ( sub_F31DC(a1, a5, a6, a4) )
      {
        v10 = 0;
        a5 = 0;
LABEL_23:
        if ( (*(int (__fastcall **)(_DWORD *, int, unsigned int, int, unsigned int))(a1[60] + 8))(a1, a2, a3, a5, v10) )
        {
          ++a1[16];
          return 1;
        }
        a1[23] = 2;
        sub_D0048(36, 107, 112, (int)"crypto/rand/drbg_lib.c", 629);
        return 0;
      }
      sub_D0048(36, 107, 118, (int)"crypto/rand/drbg_lib.c", 620);
    }
    return 0;
  }
  sub_D0048(36, 107, 117, (int)"crypto/rand/drbg_lib.c", 588);
  return 0;
}
