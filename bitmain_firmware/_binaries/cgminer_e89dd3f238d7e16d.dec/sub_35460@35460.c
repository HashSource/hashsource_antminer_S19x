int __fastcall sub_35460(int *a1)
{
  char v3[8]; // [sp+14h] [bp-818h] BYREF
  int *v4; // [sp+814h] [bp-18h]
  int v5; // [sp+818h] [bp-14h]
  int v6; // [sp+81Ch] [bp-10h]
  int v7; // [sp+820h] [bp-Ch]
  int i; // [sp+824h] [bp-8h]

  sub_2D95C((int)&unk_94178, "cgminer.c", "switch_pools", 5306);
  v5 = dword_86EF8;
  v7 = *(_DWORD *)dword_86EF8;
  if ( a1 && a1[1] )
  {
    for ( i = 0; i < dword_90E90; ++i )
    {
      v4 = *(int **)(dword_90F34 + 4 * i);
      if ( v4[1] < a1[1] )
        ++v4[1];
    }
    a1[1] = 0;
  }
  switch ( dword_86CD4 )
  {
    case 0:
    case 3:
    case 4:
      for ( i = 0; i < dword_90E90; ++i )
      {
        v4 = (int *)sub_35320(i);
        if ( !sub_326A0((int)v4) )
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
        for ( i = 1; i < dword_90E90; ++i )
        {
          if ( ++v6 >= dword_90E90 )
            v6 = 0;
          v4 = *(int **)(dword_90F34 + 4 * v6);
          if ( !sub_326A0((int)v4) )
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
  dword_86EF8 = *(_DWORD *)(dword_90F34 + 4 * v7);
  v4 = (int *)dword_86EF8;
  sub_2DA5C((int)&unk_94178, "cgminer.c", "switch_pools", 5387);
  if ( v4 != (int *)v5 && dword_86CD4 != 3 && dword_86CD4 != 4 )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
    {
      snprintf(v3, 0x800u, "Switching to pool %d %s", *v4, (const char *)v4[41]);
      sub_1DB6C(4, v3, 0);
    }
    sub_3E12C(v5);
  }
  sub_2D2FC(&stru_86E88, "cgminer.c", "switch_pools", 5395);
  pthread_cond_broadcast(&stru_86EA0);
  return sub_2D434(&stru_86E88, "cgminer.c", "switch_pools", 5397);
}
