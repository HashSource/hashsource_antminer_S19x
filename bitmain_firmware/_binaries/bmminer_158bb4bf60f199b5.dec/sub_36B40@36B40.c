int __fastcall sub_36B40(int *a1)
{
  int v2; // r4
  int v3; // r2
  int v5; // r3
  char v6[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = sub_33E28(161);
  if ( !v2 )
  {
    v3 = *(_DWORD *)(dword_1AEA6C + 8);
    if ( *(_DWORD *)(v3 + 4) > (unsigned int)dword_9EE38 )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v3 + 56) + 12 * dword_9EE38 + 4) + 4);
      *a1 = v5;
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(v6, 0x800u, "max_freq = %d\n", v5);
        sub_47AB4(3, v6, 0);
      }
    }
    else if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(v6, 0x800u, "Invalid work mode, opt_bitmain_work_mode = %d\n", dword_9EE38);
      v2 = -1;
      sub_47AB4(3, v6, 0);
    }
    else
    {
      v2 = -1;
    }
  }
  sub_33B7C();
  return v2;
}
