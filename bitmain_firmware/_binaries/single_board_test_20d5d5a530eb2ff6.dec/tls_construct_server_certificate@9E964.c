bool __fastcall tls_construct_server_certificate(_DWORD *a1, int a2)
{
  int *v2; // r5
  int *v3; // r3
  int v5; // r3
  _BOOL4 v6; // r2
  int v7; // r0
  int v8; // r6
  int v10; // [sp+Ch] [bp-4h]

  v2 = *(int **)(a1[31] + 612);
  if ( v2 )
  {
    v3 = (int *)a1[1];
    if ( (*(_DWORD *)(v3[25] + 48) & 8) != 0 )
      return sub_9BFB4(a1, a2, v2) != 0;
    v5 = *v3;
    v6 = v5 >= 772;
    if ( v5 == 0x10000 )
      v6 = 0;
    if ( !v6 )
      return sub_9BFB4(a1, a2, v2) != 0;
    v10 = a2;
    v7 = sub_A8450(a2, a2, 0, 0, 1);
    a2 = v10;
    v8 = v7;
    if ( v7 )
      return sub_9BFB4(a1, a2, v2) != 0;
    else
      sub_95494(a1, 80, 490, 68, (int)"ssl/statem/statem_srvr.c", 3809);
  }
  else
  {
    v8 = 0;
    sub_95494(a1, 80, 490, 68, (int)"ssl/statem/statem_srvr.c", 3799);
  }
  return v8;
}
