void __fastcall sub_F00E0(int *a1, int a2)
{
  char *v2; // r3
  char *v4; // r1
  bool v5; // zf
  int v6; // r3
  int v7; // [sp+4h] [bp-8h] BYREF

  v2 = (char *)a1[7];
  v7 = a2;
  if ( a2 )
  {
    v4 = (char *)a1[8];
    if ( v4 == v2 )
    {
      sub_69274(a1 + 6, v4, &v7);
    }
    else
    {
      v5 = v2 == 0;
      v6 = (int)(v2 + 4);
      if ( !v5 )
        *(_DWORD *)(v6 - 4) = a2;
      a1[7] = v6;
    }
  }
  else
  {
    a1[7] = (int)(v2 - 4);
  }
}
