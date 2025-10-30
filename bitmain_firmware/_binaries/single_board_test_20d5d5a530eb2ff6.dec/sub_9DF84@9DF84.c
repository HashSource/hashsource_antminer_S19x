int __fastcall sub_9DF84(_DWORD *a1, int a2, int a3, int a4)
{
  int *v5; // r1
  void *v9; // r2
  int v10; // r3
  int *v11; // r2
  int v12; // r2
  _BOOL4 v13; // r1
  int v14; // r5
  int v16; // r3

  v5 = (int *)a1[1];
  v9 = *(void **)(a1[285] + 428);
  if ( (*(_DWORD *)(v5[25] + 48) & 8) != 0 )
    goto LABEL_26;
  v10 = *v5;
  v5 = (int *)(*v5 >= 772);
  if ( v10 == 0x10000 )
    v5 = 0;
  if ( !v5 )
  {
LABEL_26:
    if ( a1[35] )
      v9 = 0;
  }
  else if ( (int)v9 >= (int)&loc_93A80 )
  {
    v9 = &loc_93A80;
  }
  if ( sub_A8450(a2, v5, v9, 0, 4) )
  {
    v11 = (int *)a1[1];
    if ( (*(_DWORD *)(v11[25] + 48) & 8) == 0 )
    {
      v12 = *v11;
      v13 = v12 >= 772;
      if ( v12 == 0x10000 )
        v13 = 0;
      if ( v13 && (!sub_A8450(a2, v13, a3, 0, 4) || !sub_A8544(a2, a4, 8, 1)) )
      {
        v14 = 0;
        sub_95494(a1, 80, 638, 68, (int)"ssl/statem/statem_srvr.c", 3850);
        return v14;
      }
    }
    if ( sub_A8398(a2, 2) )
      return 1;
    v16 = 3858;
  }
  else
  {
    v16 = 3842;
  }
  sub_95494(a1, 80, 638, 68, (int)"ssl/statem/statem_srvr.c", v16);
  return 0;
}
