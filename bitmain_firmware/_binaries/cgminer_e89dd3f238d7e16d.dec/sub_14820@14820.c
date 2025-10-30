int __fastcall sub_14820(int a1, const char **a2)
{
  void *v3; // r0
  char v6[20]; // [sp+28h] [bp-854h] BYREF
  __int16 v7; // [sp+828h] [bp-54h] BYREF
  int v8; // [sp+82Ch] [bp-50h]
  int v9; // [sp+830h] [bp-4Ch]
  int v10; // [sp+834h] [bp-48h]
  int v11; // [sp+838h] [bp-44h]
  int v12; // [sp+83Ch] [bp-40h]
  __int64 v13; // [sp+840h] [bp-3Ch]
  int v14; // [sp+848h] [bp-34h]
  int v15; // [sp+84Ch] [bp-30h]
  const char **v16; // [sp+850h] [bp-2Ch]
  int v17; // [sp+854h] [bp-28h]
  int v18; // [sp+858h] [bp-24h]
  int i; // [sp+85Ch] [bp-20h]

  v18 = 0;
  v17 = 0;
  i = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v16 = a2;
  v7 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  if ( a2 && a1 )
  {
    sub_57A3C(&v7, 1);
    sub_134E0(a1, v16);
    v3 = sub_13644(a1);
    v15 = sub_65D18(v3);
    for ( i = 0; i < dword_93010; ++i )
    {
      v12 = sub_2DF88(i);
      if ( v12 && *(_DWORD *)(v12 + 4) )
      {
        if ( *(_DWORD *)(*(_DWORD *)(v12 + 4) + 28) )
        {
          v14 = (*(int (__fastcall **)(int))(*(_DWORD *)(v12 + 4) + 28))(v12);
          sub_661B4(v15, v14);
        }
        else
        {
          v14 = 0;
        }
      }
    }
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(
        v6,
        0x800u,
        "total_mhashes_done = %lf\n new_total_mhashes_done = %lf\n total_secs = %lf\n, new_total_secs = %lf",
        dbl_90DB8,
        dbl_90F00,
        dbl_862E0,
        dbl_862E8);
      sub_1DB6C(7, v6, 0);
    }
    sub_65420(a1, "STATS", v15);
    return v18;
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v6, 0x800u, "%s: input bad api param\n", "get_stats");
      sub_1DB6C(3, v6, 0);
    }
    return -2147483646;
  }
}
