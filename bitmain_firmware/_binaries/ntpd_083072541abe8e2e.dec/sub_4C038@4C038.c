int __fastcall sub_4C038(int a1, int a2)
{
  void *v4; // r0
  int v5; // r4
  int v6; // r5
  unsigned int v7; // r8
  int v8; // r8
  int *v9; // r7
  int v10; // r12
  const char *v12; // r0
  __int16 v13; // r2
  speed_t v14; // r1
  const char *v15; // r0
  char v16[24]; // [sp+8h] [bp-5Ch] BYREF
  char v17[60]; // [sp+20h] [bp-44h] BYREF

  v4 = (void *)sub_63BA4(0, 520, 0, 0);
  v5 = (int)v4;
  if ( v4 )
  {
    v6 = 0;
    memset(v4, 0, 0x208u);
    *(_BYTE *)(v5 + 10) = 0;
    *(_WORD *)(v5 + 12) = 0;
    *(_BYTE *)(v5 + 14) = 0;
    *(_WORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 20) = 0;
    *(_DWORD *)(v5 + 56) = 0;
    *(_BYTE *)(v5 + 192) = 0;
    *(_DWORD *)(v5 + 400) = 0;
    *(_DWORD *)(v5 + 296) = 0;
    *(_DWORD *)(v5 + 184) = 0;
    *(_BYTE *)(v5 + 404) = 1;
    sub_6C054(v16, 21, "/dev/jjy%d", a1);
    sub_6C054(v17, 60, "mode=%d dev=%s", *(_DWORD *)(a2 + 76), v16);
    sub_4A084(a2, 1, v17);
    v7 = *(_DWORD *)(a2 + 76);
    if ( v7 == 3 )
    {
      sub_4A084(a2, 1, "Refclock: Echo Keisokuki Co. Ltd. LT2000");
      *(_BYTE *)v5 = 3;
      *(_WORD *)(v5 + 8) = 1;
      v13 = 1;
      *(_WORD *)(v5 + 2) = 3;
      v14 = 13;
      *(_DWORD *)(v5 + 4) = 13;
    }
    else if ( v7 <= 3 )
    {
      if ( v7 <= 1 )
      {
        sub_4A084(a2, 1, "Refclock: Tristate Ltd. TS-JJY01, TS-JJY02");
        v14 = 13;
        *(_BYTE *)v5 = 1;
        *(_WORD *)(v5 + 8) = 1;
        v13 = 1;
        *(_DWORD *)(v5 + 4) = 13;
      }
      else
      {
        sub_4A084(a2, 1, "Refclock: C-DEX Co. Ltd. JST2000");
        *(_BYTE *)(v5 + 192) = 1;
        v14 = 13;
        *(_BYTE *)(v5 + 404) = 0;
        v13 = 32;
        *(_DWORD *)(v5 + 188) = &off_B6F8C;
        *(_BYTE *)v5 = 2;
        *(_DWORD *)(v5 + 4) = 13;
        *(_WORD *)(v5 + 8) = 32;
      }
    }
    else if ( v7 == 5 )
    {
      sub_4A084(a2, 1, "Refclock: Tristate Ltd. TS-GPS01");
      v14 = 15;
      *(_BYTE *)v5 = 5;
      *(_WORD *)(v5 + 8) = 1;
      v13 = 1;
      *(_DWORD *)(v5 + 4) = 15;
    }
    else if ( v7 >= 5 )
    {
      if ( v7 == 6 )
      {
        sub_4A084(a2, 1, "Refclock: SEIKO TIME SYSTEMS TDC-300");
        *(_BYTE *)v5 = 6;
        *(_BYTE *)(v5 + 192) = 1;
        v14 = 11;
        *(_BYTE *)(v5 + 404) = 0;
        v13 = 32;
        *(_DWORD *)(v5 + 188) = &off_B6F9C;
        *(_DWORD *)(v5 + 4) = 11;
        *(_WORD *)(v5 + 8) = 32;
      }
      else
      {
        if ( v7 != 100 && v7 - 101 > 0x4F )
        {
          v12 = (const char *)sub_6C2E8(a2 + 16);
          sub_64E00(3, "JJY receiver [ %s mode %d ] : Unsupported mode", v12, *(_DWORD *)(a2 + 76));
          free((void *)v5);
          return v6;
        }
        if ( sub_4BC28((unsigned __int8 *)a2, v5) )
        {
          v6 = 0;
          v15 = (const char *)sub_6C2E8(a2 + 16);
          sub_64E00(3, "JJY receiver [ %s mode %d ] : Initialize error", v15, *(_DWORD *)(a2 + 76));
          free((void *)v5);
          return v6;
        }
        v14 = *(_DWORD *)(v5 + 4);
        v13 = *(_WORD *)(v5 + 8);
      }
    }
    else
    {
      sub_4A084(a2, 1, "Refclock: CITIZEN T.I.C CO. LTD. JJY200");
      *(_BYTE *)v5 = 4;
      v13 = 1;
      *(_WORD *)(v5 + 8) = 1;
      v14 = 12;
      *(_DWORD *)(v5 + 4) = 12;
    }
    v8 = sub_3A298(v16, v14, v13);
    if ( v8 <= 0 )
    {
      v6 = 0;
      free((void *)v5);
    }
    else
    {
      v9 = *(int **)(a2 + 84);
      *v9 = v5;
      v9[5] = a2;
      v9[7] = v8;
      v9[11] = (int)"JJY Receiver";
      v9[3] = (int)sub_4C478;
      v9[6] = 0;
      v6 = sub_18DF0(v9 + 2);
      if ( v6 )
      {
        v6 = 1;
        qmemcpy(v9 + 191, "JJY", 3);
        v10 = *(unsigned __int8 *)(a2 + 66);
        *(_BYTE *)(a2 + 95) = -3;
        sub_6C054(v17, 60, "minpoll=%d maxpoll=%d", *(unsigned __int8 *)(a2 + 65), v10);
        sub_4A084(a2, 1, v17);
      }
      else
      {
        close(v8);
        v9[7] = -1;
        free((void *)v5);
        *v9 = 0;
      }
    }
  }
  else
  {
    v6 = 0;
    sub_64E00(3, "refclock_jjy.c : jjy_start : emalloc");
  }
  return v6;
}
