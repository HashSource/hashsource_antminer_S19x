int __fastcall sub_60658(int *a1, int *a2, int a3)
{
  int v3; // r12
  int v5; // r0
  int v6; // r1
  int v7; // r0
  int v9; // [sp+4h] [bp-4h] BYREF

  v3 = *a2;
  v5 = a1[9];
  if ( *a2 )
  {
    a1[10] = v5;
    v9 = v3;
    *a2 = 0;
    v6 = sub_56E78(v5, &v9, a3);
    v7 = v9;
    a1[9] = v6;
    if ( v7 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
      v6 = a1[9];
    }
  }
  else
  {
    if ( v5 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
    v6 = a1[10];
    a1[10] = 0;
    a1[9] = v6;
  }
  sub_60084(a1[4], v6);
  sub_60084(a1[5], a1[9]);
  sub_60084(a1[6], a1[9]);
  sub_60084(a1[7], a1[9]);
  return sub_60084(a1[8], a1[9]);
}
