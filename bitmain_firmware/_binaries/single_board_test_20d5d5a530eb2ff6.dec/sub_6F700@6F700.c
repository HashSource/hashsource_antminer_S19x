void __fastcall sub_6F700(int a1, int a2)
{
  int v4; // r0
  int *v5; // r4
  int v6; // r5
  void (__fastcall *v7)(int, int); // r3
  void (__fastcall *v8)(int, int); // t1
  int v9; // r1

  v4 = sub_6F5BC(a1);
  if ( v4 == 259 )
  {
    sub_6F6D4(a1);
  }
  else
  {
    v5 = &dword_65E2E8;
    v6 = v4;
    do
    {
      v8 = (void (__fastcall *)(int, int))*v5++;
      v7 = v8;
      v9 = a2;
      if ( a2 )
        v9 = 1;
      if ( v7 )
        v7(v6, v9);
    }
    while ( v5 != (int *)algn_65E2FC );
  }
}
