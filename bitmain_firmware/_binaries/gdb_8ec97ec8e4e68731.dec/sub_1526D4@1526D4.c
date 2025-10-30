bool sub_1526D4()
{
  __int64 v0; // r6
  __int64 v1; // r8
  int v2; // r0
  int v3; // r5
  __int64 v4; // kr00_8
  int v5; // r2
  int v6; // r3
  int v7; // r3
  __int64 v9; // [sp+0h] [bp-Ch] BYREF

  sub_33B25C(&v9);
  v0 = v9;
  v1 = *(_QWORD *)dword_487650;
  if ( *(_QWORD *)dword_487650 >= v9 )
  {
    v4 = v1 - v9;
    v3 = sub_347ED4((int)v1 - (int)v9, (unsigned __int64)(v1 - v9) >> 32, 1000000000, 0);
    sub_347ED4(v4, HIDWORD(v4), 1000000000, 0);
    v2 = sub_347ED4(v5, v6, 1000, 0);
  }
  else
  {
    v2 = 0;
    v3 = 0;
  }
  v7 = (unsigned __int8)byte_46D454;
  if ( byte_46D454 )
    v7 = 1000;
  else
    dword_487648 = v2;
  if ( byte_46D454 )
    v3 *= v7;
  else
    dword_487644 = v3;
  if ( byte_46D454 )
    dword_48733C = v3;
  dword_48764C = 1;
  return v1 < v0;
}
