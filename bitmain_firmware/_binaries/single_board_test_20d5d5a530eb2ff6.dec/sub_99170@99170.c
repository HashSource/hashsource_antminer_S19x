int __fastcall sub_99170(_DWORD *a1)
{
  int v1; // r3
  int v2; // r6
  int v3; // r4
  int v6; // r7
  int v7; // r0
  char *v8; // r0
  int v9; // [sp+Ch] [bp-8h] BYREF

  v1 = *(_DWORD *)(a1[31] + 528);
  v2 = *(_DWORD *)(v1 + 20);
  if ( (v2 & 0xAB) == 0 )
    return 1;
  v6 = *(_DWORD *)(v1 + 16);
  v7 = sub_10E89C(*(_DWORD *)(a1[285] + 412));
  v8 = sub_8559C(v7, &v9);
  if ( v8 && (v2 & *((_DWORD *)v8 + 1)) != 0 )
  {
    v3 = *((_DWORD *)v8 + 1) & 8;
    if ( v3 )
    {
      v3 = sub_8A3C8(*(_DWORD *)(a1[285] + 412), (int)a1);
      if ( !v3 )
      {
        sub_95494(a1, 40, 130, 304, (int)"ssl/statem/statem_clnt.c", 3616);
        return v3;
      }
    }
    else
    {
      if ( (v6 & 0x41) != 0 && v9 )
      {
        sub_95494(a1, 40, 130, 169, (int)"ssl/statem/statem_clnt.c", 3624);
        return v3;
      }
      if ( (v6 & 2) != 0 )
      {
        v3 = *(_DWORD *)(a1[31] + 856);
        if ( !v3 )
        {
          sub_95494(a1, 80, 130, 68, (int)"ssl/statem/statem_clnt.c", 3631);
          return v3;
        }
      }
    }
    return 1;
  }
  sub_95494(a1, 40, 130, 221, (int)"ssl/statem/statem_clnt.c", 3607);
  return 0;
}
