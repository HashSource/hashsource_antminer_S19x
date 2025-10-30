int __fastcall sub_48E18(int a1)
{
  int v3; // r3
  int *v4; // r8
  int v5; // r7
  int v6; // r6
  int v7; // r0
  int v8; // r3
  int v9; // r2
  int *v10; // r0
  __time_t v11[2]; // [sp+0h] [bp-80Ch] BYREF
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( !sub_48D90() )
  {
    sub_3DFCC(v11);
    dword_535D88 = 2;
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(s, 0x800u, "[DEBUG] Sweep init, sweep_type = 0x%X.\n", a1);
      sub_3B6AC(4, s, 0, v3);
      if ( (unsigned int)(a1 - 160) > 1 )
      {
LABEL_7:
        sub_481F0(20, 255);
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy(s, "Sweep type error, exit.\n");
          sub_3B6AC(3, s, 0, *(int *)"rror, exit.\n");
        }
        goto LABEL_9;
      }
      if ( (unsigned int)dword_B308C > 4 )
      {
        strcpy(s, "[DEBUG] Allocate memory for sweep.\n");
        sub_3B6AC(4, s, 0, *(int *)"sweep.\n");
      }
    }
    else if ( (unsigned int)(a1 - 160) > 1 )
    {
      goto LABEL_7;
    }
    v4 = (int *)dword_535D80;
    if ( !dword_535D80 )
    {
      v10 = (int *)malloc(0x107Cu);
      dword_535D80 = (int)v10;
      if ( !v10 )
      {
        sub_481F0(13, 255);
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy(s, "Fail to allocate memory for sweep ctxt.\n");
          sub_3B6AC(3, s, 0, *(int *)"sweep ctxt.\n");
        }
        goto LABEL_9;
      }
      v4 = v10;
      memset(v10, 0, 0x107Cu);
    }
    *v4 = a1;
    v5 = 8;
    v6 = 0;
    v4[1] = 1199570688;
    do
    {
      if ( sub_26C0C(v6) )
      {
        v7 = sub_26A44();
        if ( v7 > 0 )
        {
          v8 = dword_535D80 + v5;
          v9 = dword_535D80 + 4 * (v7 + (v6 << 8) + 2);
          do
          {
            *(_DWORD *)(v8 + 4) = 300;
            v8 += 4;
          }
          while ( v8 != v9 );
        }
      }
      ++v6;
      v5 += 1024;
    }
    while ( v6 != 4 );
LABEL_9:
    dword_535D88 = 1;
    return -1;
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "Sweep already done, exit.\n");
    sub_3B6AC(3, s, 0, *(unsigned __int16 *)"");
  }
  return 0;
}
