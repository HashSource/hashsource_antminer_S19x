int __fastcall sub_9D8C8(_DWORD *a1, int a2, int a3)
{
  int v6; // r1
  int v7; // r2
  int v8; // r4
  int v9; // r0
  int v10; // r8
  int v11; // r5
  bool v12; // cc
  int v13; // r1
  int v15; // r3
  _BYTE v16[4]; // [sp+Ch] [bp-4h] BYREF

  if ( sub_A8398(a3, 2) )
  {
    if ( a2 )
    {
      v8 = 0;
      while ( 1 )
      {
        v12 = v8 < sub_10C010(a2, v6, v7);
        v13 = v8++;
        if ( !v12 )
          break;
        v9 = sub_10C01C(a2, v13);
        v10 = v9;
        if ( v9 )
        {
          v11 = sub_115C40(v9, 0);
          if ( v11 >= 0 && sub_A8420(a3, v11, v16, 2) && v11 == sub_115C40(v10, v16) )
            continue;
        }
        sub_95494(a1, 80, 552, 68, (int)"ssl/statem/statem_lib.c", 2354);
        return 0;
      }
    }
    if ( sub_A7EDC(a3) )
      return 1;
    v15 = 2362;
  }
  else
  {
    v15 = 2336;
  }
  sub_95494(a1, 80, 552, 68, (int)"ssl/statem/statem_lib.c", v15);
  return 0;
}
