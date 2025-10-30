int **__fastcall sub_2E810(int **a1, int a2)
{
  int v4; // r6
  int v5; // r5
  int v6; // r0
  int *v7; // r4
  int *v8; // r5
  int v9; // t1
  __int64 v10; // r2
  int *v12; // [sp+8h] [bp-24h] BYREF
  int *v13; // [sp+Ch] [bp-20h]
  int v14; // [sp+10h] [bp-1Ch]
  int (**v15[6])(void); // [sp+14h] [bp-18h] BYREF

  v4 = sub_1DD58C(a2);
  if ( off_489A44() == 1 )
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    return a1;
  }
  else
  {
    v5 = ((int (__fastcall *)(int))loc_165BB8)(v4);
    v6 = ((int (__fastcall *)(int))loc_165C28)(v4);
    sub_187D0(v15, (int)&off_46AF50, v5, v6, 1, a2);
    sub_187E8((void **)&v12, v15);
    v7 = v12;
    v8 = v13;
    if ( v12 == v13 )
    {
      LODWORD(v10) = v13;
    }
    else
    {
      do
      {
        v9 = *v7++;
        *(v7 - 1) = ((int (__fastcall *)(int, int))loc_169FA0)(v4, v9);
      }
      while ( v8 != v7 );
      v8 = v12;
      LODWORD(v10) = v13;
    }
    HIDWORD(v10) = v14;
    *a1 = v8;
    *(_QWORD *)(a1 + 1) = v10;
    return a1;
  }
}
