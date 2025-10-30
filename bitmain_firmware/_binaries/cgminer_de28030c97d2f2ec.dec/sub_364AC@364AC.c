int __fastcall sub_364AC(int *a1)
{
  char v3[8]; // [sp+14h] [bp-818h] BYREF
  int *v4; // [sp+814h] [bp-18h]
  int v5; // [sp+818h] [bp-14h]
  int v6; // [sp+81Ch] [bp-10h]
  int v7; // [sp+820h] [bp-Ch]
  int i; // [sp+824h] [bp-8h]

  sub_2E980((int)&unk_95310, "cgminer.c", "switch_pools", 5306);
  v5 = dword_88090;
  v7 = *(_DWORD *)dword_88090;
  if ( a1 && a1[1] )
  {
    for ( i = 0; i < dword_92028; ++i )
    {
      v4 = *(int **)(dword_920CC + 4 * i);
      if ( v4[1] < a1[1] )
        ++v4[1];
    }
    a1[1] = 0;
  }
  switch ( dword_87E6C )
  {
    case 0:
    case 3:
    case 4:
      for ( i = 0; i < dword_92028; ++i )
      {
        v4 = (int *)sub_3636C(i);
        if ( !sub_337A8((int)v4) )
        {
          v7 = *v4;
          goto LABEL_26;
        }
      }
      break;
    case 1:
    case 2:
      if ( a1 && *((_BYTE *)a1 + 97) != 1 )
      {
        v7 = *a1;
      }
      else
      {
        v6 = v7;
        for ( i = 1; i < dword_92028; ++i )
        {
          if ( ++v6 >= dword_92028 )
            v6 = 0;
          v4 = *(int **)(dword_920CC + 4 * v6);
          if ( !sub_337A8((int)v4) )
          {
            v7 = v6;
            goto LABEL_26;
          }
        }
      }
      break;
    default:
      break;
  }
LABEL_26:
  dword_88090 = *(_DWORD *)(dword_920CC + 4 * v7);
  v4 = (int *)dword_88090;
  sub_2EA74((int)&unk_95310, "cgminer.c", "switch_pools", 5387);
  if ( v4 != (int *)v5 && dword_87E6C != 3 && dword_87E6C != 4 )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
    {
      snprintf(v3, 0x800u, "Switching to pool %d %s", *v4, (const char *)v4[41]);
      sub_1E4EC(4, v3, 0);
    }
    sub_3EFC0(v5);
  }
  sub_2E354(&stru_88020, "cgminer.c", "switch_pools", 5395);
  pthread_cond_broadcast(&stru_88038);
  return sub_2E484(&stru_88020, "cgminer.c", "switch_pools", 5397);
}
