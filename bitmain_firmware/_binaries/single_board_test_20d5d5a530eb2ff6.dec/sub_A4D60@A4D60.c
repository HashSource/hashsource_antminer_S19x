int __fastcall sub_A4D60(int a1, int a2, int a3, int a4, int a5)
{
  void *v5; // r10
  void *v6; // r4
  char *v7; // r5
  int v11; // r0
  int v12; // r2
  int v13; // r0
  int v15; // r0
  int v16; // r2
  int v17; // r0
  int v18; // r2
  int v19; // r3
  int v20; // r0
  int v21; // [sp+Ch] [bp-10h]
  int v22; // [sp+10h] [bp-Ch] BYREF
  int v23; // [sp+14h] [bp-8h] BYREF

  if ( a4 )
    v5 = &loc_61010;
  v6 = &loc_61010;
  if ( !a4 )
    v6 = &loc_60010;
  v7 = (char *)&loc_61010 + 2;
  if ( !a4 )
  {
    v7 = (char *)&loc_60010 + 2;
    v5 = &loc_60010;
  }
  if ( a5 )
  {
    v11 = sub_10E89C(a3);
    v12 = -1;
    if ( v11 )
      v12 = sub_D9AE4(v11);
    if ( a1 )
      v13 = sub_854EC(a1, (int)v6);
    else
      v13 = sub_85510(a2, (int)v6, v12, 0, a3);
    if ( !v13 )
      return 399;
  }
  else
  {
    v15 = sub_10E89C(a3);
    v16 = -1;
    if ( v15 )
      v16 = sub_D9AE4(v15);
    if ( a1 )
      v17 = sub_854EC(a1, (int)v5);
    else
      v17 = sub_85510(a2, (int)v5, v16, 0, a3);
    if ( !v17 )
      return 397;
  }
  if ( (sub_120D7C(a3) & 0x2000) != 0 )
    return 1;
  if ( sub_10FDB0(a3, &v22, &v23) )
    v18 = v21;
  else
    v18 = -1;
  v19 = v22;
  if ( !v22 )
  {
    v19 = v23;
    v22 = v23;
  }
  if ( a1 )
    v20 = sub_854EC(a1, (int)v7);
  else
    v20 = sub_85510(a2, (int)v7, v18, v19, a3);
  if ( v20 )
    return 1;
  else
    return 398;
}
