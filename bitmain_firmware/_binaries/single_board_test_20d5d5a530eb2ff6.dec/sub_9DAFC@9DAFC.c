int __fastcall sub_9DAFC(_DWORD *a1, _DWORD *a2)
{
  int v4; // r3
  int *v5; // r3
  int v6; // r1
  size_t v7; // r7
  int result; // r0
  _BOOL4 v9; // r1
  _BOOL4 v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r0
  const void *v14; // r1
  int *v15; // r3
  int v16; // r1
  int v17; // r3
  _BOOL4 v18; // r2

  if ( a1[7] )
  {
    v4 = a1[381];
    a1[25] = 0;
    if ( v4 != 4 )
      a1[21] = 1;
    v5 = (int *)a1[1];
    if ( (*(_DWORD *)(v5[25] + 48) & 8) != 0 )
      goto LABEL_5;
    v9 = *v5 != 0x10000;
    if ( *v5 < 772 )
      v9 = 0;
    if ( !v9 )
      goto LABEL_19;
    result = sub_9DA74(a1);
    if ( !result )
      return result;
  }
  v5 = (int *)a1[1];
  if ( (*(_DWORD *)(v5[25] + 48) & 8) == 0 )
  {
    v10 = *v5 >= 772;
    if ( *v5 == 0x10000 )
      v10 = 0;
    if ( !v10 )
      goto LABEL_19;
    if ( sub_7D3D0((int)(a1 + 404)) )
    {
      sub_95494(a1, 10, 364, 182, (int)"ssl/statem/statem_lib.c", 789);
      return 0;
    }
    v5 = (int *)a1[1];
    if ( (*(_DWORD *)(v5[25] + 48) & 8) == 0 )
    {
LABEL_19:
      v11 = *v5;
      v12 = *v5 < 772;
      if ( v11 == 0x10000 )
        v12 |= 1u;
      if ( !v12 )
      {
        v6 = a1[31];
        goto LABEL_6;
      }
    }
  }
LABEL_5:
  v6 = a1[31];
  if ( !*(_DWORD *)(v6 + 220) )
  {
    sub_95494(a1, 10, 364, 154, (int)"ssl/statem/statem_lib.c", 796);
    return 0;
  }
LABEL_6:
  v7 = *(_DWORD *)(v6 + 516);
  *(_DWORD *)(v6 + 220) = 0;
  if ( v7 == a2[1] )
  {
    if ( sub_BC33C(*a2, v6 + 388, v7) )
    {
      sub_95494(a1, 51, 364, 149, (int)"ssl/statem/statem_lib.c", 812);
      return 0;
    }
    if ( v7 > 0x40 )
    {
      sub_95494(a1, 80, 364, 68, (int)"ssl/statem/statem_lib.c", 821);
      return 0;
    }
    v13 = a1[31];
    v14 = (const void *)(v13 + 388);
    if ( a1[7] )
    {
      memcpy((void *)(v13 + 688), v14, v7);
      *(_DWORD *)(a1[31] + 752) = v7;
    }
    else
    {
      memcpy((void *)(v13 + 756), v14, v7);
      *(_DWORD *)(a1[31] + 820) = v7;
    }
    v15 = (int *)a1[1];
    v16 = v15[25];
    if ( (*(_DWORD *)(v16 + 48) & 8) == 0 )
    {
      v17 = *v15;
      v18 = v17 >= 772;
      if ( v17 == 0x10000 )
        v18 = 0;
      if ( v18 )
      {
        if ( a1[7] )
        {
          if ( a1[381] != 4 )
            return (*(int (__fastcall **)(_DWORD *, int))(v16 + 16))(a1, 289) != 0;
        }
        else if ( !(*(int (__fastcall **)(_DWORD *, _DWORD *, _DWORD *))(v16 + 12))(a1, a1 + 83, a1 + 67)
               || !(*(int (__fastcall **)(_DWORD *, int))(*(_DWORD *)(a1[1] + 100) + 16))(a1, 273)
               || !sub_99BC0((int)a1) )
        {
          return 0;
        }
      }
    }
    return 1;
  }
  sub_95494(a1, 50, 364, 111, (int)"ssl/statem/statem_lib.c", 805);
  return 0;
}
