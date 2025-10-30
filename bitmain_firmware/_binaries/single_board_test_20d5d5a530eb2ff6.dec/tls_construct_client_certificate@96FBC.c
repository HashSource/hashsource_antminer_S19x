int __fastcall tls_construct_client_certificate(_DWORD *a1, int a2)
{
  int *v2; // r3
  int v5; // r3
  _BOOL4 v6; // r2
  int v7; // r1
  int v8; // r5
  int *v9; // r3
  int v10; // r2
  int v11; // r3
  _BOOL4 v12; // r1
  int v13; // r3
  int v15; // r3

  v2 = (int *)a1[1];
  if ( (*(_DWORD *)(v2[25] + 48) & 8) != 0 )
    goto LABEL_7;
  v5 = *v2;
  v6 = v5 >= 772;
  if ( v5 == 0x10000 )
    v6 = 0;
  if ( !v6 )
    goto LABEL_7;
  v7 = a1[383];
  if ( v7 )
  {
    v8 = sub_A8544(a2, v7, a1[384], 1);
    if ( v8 )
      goto LABEL_7;
    v15 = 3560;
LABEL_19:
    sub_95494(a1, 80, 484, 68, (int)"ssl/statem/statem_clnt.c", v15);
    return v8;
  }
  v8 = sub_A8450(a2, 1, 0, 0, 1);
  if ( !v8 )
  {
    v15 = 3555;
    goto LABEL_19;
  }
LABEL_7:
  v8 = sub_9BFB4(a1, a2);
  if ( v8 )
  {
    v9 = (int *)a1[1];
    v10 = v9[25];
    if ( (*(_DWORD *)(v10 + 48) & 8) != 0 )
      return 1;
    v11 = *v9;
    v12 = v11 >= 772;
    if ( v11 == 0x10000 )
      v12 = 0;
    if ( !v12 )
      return 1;
    v13 = a1[31];
    if ( *(_DWORD *)(v13 + 384) )
    {
      if ( *(_DWORD *)(v13 + 516) )
        return 1;
    }
    v8 = (*(int (__fastcall **)(_DWORD *, int))(v10 + 16))(a1, 146);
    if ( v8 )
      return 1;
    else
      sub_95494(a1, -1, 484, 109, (int)"ssl/statem/statem_clnt.c", 3580);
  }
  return v8;
}
