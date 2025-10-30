_QWORD *__fastcall sub_1D4F24(_QWORD *a1, int *a2)
{
  int *v3; // r4
  int v5; // r1
  int v6; // r2
  int v7; // r0
  int v8; // r1
  int v9; // r2
  _DWORD v11[3]; // [sp+0h] [bp-1Ch] BYREF
  int v12; // [sp+Ch] [bp-10h]
  int v13; // [sp+10h] [bp-Ch]
  int v14; // [sp+14h] [bp-8h]

  v3 = (int *)a2[77];
  if ( v3 )
  {
    if ( sub_1D4EC8(a2) )
    {
      *a1 = 0x500000001LL;
      return a1;
    }
    v5 = v3[1];
    v6 = v3[2];
    v12 = *v3;
    v13 = v5;
    v14 = v6;
    do
    {
      if ( !((int (__fastcall *)(int *, int))loc_E1808)(v3, 1) )
      {
        v7 = v12;
        v8 = v13;
        v9 = v14;
        *(_DWORD *)a1 = 12;
        *v3 = v7;
        v3[1] = v8;
        v3[2] = v9;
        return a1;
      }
    }
    while ( !((int (*)(void))loc_E16AC)() );
    sub_E17BC(v11, (int)(a2 + 63));
    if ( sub_E1A3C(v3, v11) )
    {
      *(_DWORD *)a1 = 10;
      return a1;
    }
  }
  *(_DWORD *)a1 = 12;
  return a1;
}
