int __fastcall sub_4D6E8(int a1, int a2)
{
  void *v4; // r0
  int v5; // r4
  int v6; // r5
  unsigned int v7; // r11
  int v8; // r0
  int v10; // r9
  int *v11; // r7
  int v12; // r12
  int v13; // r0
  speed_t v14; // r1
  __int16 v15; // r2
  char v16[24]; // [sp+8h] [bp-5Ch] BYREF
  char v17[60]; // [sp+20h] [bp-44h] BYREF

  v4 = (void *)sub_64B04(0, 520, 0, 0);
  v5 = (int)v4;
  if ( !v4 )
  {
    v6 = 0;
    sub_65D40(3, "refclock_jjy.c : jjy_start : emalloc");
    return v6;
  }
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
  sub_6D00C(v16, 21, "/dev/jjy%d", a1);
  sub_6D00C(v17, 60, "mode=%d dev=%s", *(_DWORD *)(a2 + 76), v16);
  sub_4B63C(a2, 1, v17);
  v7 = *(_DWORD *)(a2 + 76);
  if ( v7 == 3 )
  {
    sub_4B63C(a2, 1, "Refclock: Echo Keisokuki Co. Ltd. LT2000");
    *(_BYTE *)v5 = 3;
    v15 = 1;
    *(_WORD *)(v5 + 8) = 1;
    v14 = 13;
    *(_WORD *)(v5 + 2) = 3;
    *(_DWORD *)(v5 + 4) = 13;
  }
  else
  {
    if ( v7 <= 3 )
    {
      if ( v7 <= 1 )
      {
        sub_4B63C(a2, 1, "Refclock: Tristate Ltd. TS-JJY01, TS-JJY02");
        *(_BYTE *)v5 = 1;
        v15 = 1;
        *(_WORD *)(v5 + 8) = 1;
        v14 = 13;
        *(_DWORD *)(v5 + 4) = 13;
      }
      else
      {
        sub_4B63C(a2, 1, "Refclock: C-DEX Co. Ltd. JST2000");
        v14 = 13;
        v15 = 32;
        *(_BYTE *)(v5 + 192) = 1;
        *(_DWORD *)(v5 + 188) = &off_B7F8C;
        *(_BYTE *)(v5 + 404) = 0;
        *(_DWORD *)(v5 + 4) = 13;
        *(_WORD *)(v5 + 8) = 32;
        *(_BYTE *)v5 = 2;
      }
      goto LABEL_15;
    }
    if ( v7 == 5 )
    {
      sub_4B63C(a2, 1, "Refclock: Tristate Ltd. TS-GPS01");
      *(_BYTE *)v5 = 5;
      v15 = 1;
      *(_WORD *)(v5 + 8) = 1;
      v14 = 15;
      *(_DWORD *)(v5 + 4) = 15;
    }
    else
    {
      if ( v7 < 5 )
      {
        sub_4B63C(a2, 1, "Refclock: CITIZEN T.I.C CO. LTD. JJY200");
        v14 = 12;
        *(_WORD *)(v5 + 8) = 1;
        v15 = 1;
        *(_DWORD *)(v5 + 4) = 12;
        *(_BYTE *)v5 = 4;
        goto LABEL_15;
      }
      if ( v7 == 6 )
      {
        sub_4B63C(a2, 1, "Refclock: SEIKO TIME SYSTEMS TDC-300");
        *(_BYTE *)v5 = 6;
        *(_BYTE *)(v5 + 192) = 1;
        v14 = 11;
        *(_BYTE *)(v5 + 404) = 0;
        v15 = 32;
        *(_DWORD *)(v5 + 188) = &off_B7F9C;
        *(_DWORD *)(v5 + 4) = 11;
        *(_WORD *)(v5 + 8) = 32;
      }
      else
      {
        if ( v7 != 100 && v7 - 101 > 0x4F )
        {
          v13 = sub_6D2C0(a2 + 16);
          sub_65D40(3, "JJY receiver [ %s mode %d ] : Unsupported mode", v13, *(_DWORD *)(a2 + 76));
          goto LABEL_11;
        }
        if ( sub_4D2E4((unsigned __int8 *)a2, v5) )
        {
          v6 = 0;
          v8 = sub_6D2C0(a2 + 16);
          sub_65D40(3, "JJY receiver [ %s mode %d ] : Initialize error", v8, *(_DWORD *)(a2 + 76));
LABEL_11:
          free((void *)v5);
          return v6;
        }
        v14 = *(_DWORD *)(v5 + 4);
        v15 = *(_WORD *)(v5 + 8);
      }
    }
  }
LABEL_15:
  v10 = sub_3AA90(v16, v14, v15);
  if ( v10 <= 0 )
  {
    v6 = 0;
    free((void *)v5);
  }
  else
  {
    v11 = *(int **)(a2 + 84);
    *v11 = v5;
    v11[5] = a2;
    v11[7] = v10;
    v11[11] = (int)"JJY Receiver";
    v11[3] = (int)sub_4DB18;
    v11[6] = 0;
    v6 = sub_19084(v11 + 2);
    if ( v6 )
    {
      v6 = 1;
      qmemcpy(v11 + 191, "JJY", 3);
      v12 = *(unsigned __int8 *)(a2 + 66);
      *(_BYTE *)(a2 + 95) = -3;
      sub_6D00C(v17, 60, "minpoll=%d maxpoll=%d", *(unsigned __int8 *)(a2 + 65), v12);
      sub_4B63C(a2, 1, v17);
    }
    else
    {
      close(v10);
      v11[7] = -1;
      free((void *)v5);
      *v11 = 0;
    }
  }
  return v6;
}
