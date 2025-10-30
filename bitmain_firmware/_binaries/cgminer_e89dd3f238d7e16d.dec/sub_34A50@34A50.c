int __fastcall sub_34A50(int a1, char a2)
{
  char v6[2048]; // [sp+8h] [bp-81Ch] BYREF
  __time_t v7[2]; // [sp+808h] [bp-1Ch] BYREF
  int v8; // [sp+810h] [bp-14h]
  int v9; // [sp+814h] [bp-10h]
  bool v10; // [sp+81Bh] [bp-9h]
  int v11; // [sp+81Ch] [bp-8h]

  if ( byte_86E18 || dword_90DE0 )
    return 0;
  if ( *(_DWORD *)(a1 + 336) != dword_86EF4 )
  {
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v6, "Work stale due to block mismatch");
      sub_1DB6C(7, v6, 0);
    }
    return 1;
  }
  if ( *(_DWORD *)(a1 + 276) <= dword_85A94 )
    v11 = dword_85A98;
  else
    v11 = *(_DWORD *)(a1 + 276);
  v9 = *(_DWORD *)(a1 + 260);
  if ( a2 == 1 || !*(_BYTE *)(v9 + 640) )
    goto LABEL_31;
  if ( *(_BYTE *)(v9 + 641) != 1 || *(_BYTE *)(v9 + 643) != 1 )
  {
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v6, "Work stale due to stratum inactive");
      sub_1DB6C(7, v6, 0);
    }
    return 1;
  }
  sub_2D8F4(v9 + 212, "cgminer.c", "stale_work", 5152);
  v10 = strcmp(*(const char **)(a1 + 288), *(const char **)(v9 + 672)) == 0;
  sub_2DA1C(v9 + 212, "cgminer.c", "stale_work", 5159);
  if ( !v10 )
  {
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v6, "Work stale due to stratum job_id mismatch");
      sub_1DB6C(7, v6, 0);
    }
    return 1;
  }
  else
  {
LABEL_31:
    v8 = (int)(*(double *)(v9 + 448) * 5.0 + 1.0);
    v11 -= v8;
    if ( v11 <= 4 )
      v11 = 5;
    sub_21AC0(v7);
    if ( v11 > v7[0] - *(_DWORD *)(a1 + 264) )
    {
      if ( !byte_92F95
        || a2 == 1
        || v9 == sub_2E98C()
        || *(_BYTE *)(a1 + 282) == 1
        || dword_86CD4 == 3
        || dword_86CD4 == 4 )
      {
        return 0;
      }
      else
      {
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          strcpy(v6, "Work stale due to fail only pool mismatch");
          sub_1DB6C(7, v6, 0);
        }
        return 1;
      }
    }
    else
    {
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        strcpy(v6, "Work stale due to expiry");
        sub_1DB6C(7, v6, 0);
      }
      return 1;
    }
  }
}
