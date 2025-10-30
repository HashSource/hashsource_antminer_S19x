void sub_71FC8()
{
  int v0; // r5
  int v1; // r6
  _DWORD *v2; // r0
  int v3; // r6
  int *v4; // r3
  int v5; // r0
  int v6; // r1
  char v7; // r3

  v0 = dword_474948;
  if ( dword_474948 )
  {
    v1 = dword_47494C;
    v2 = *(_DWORD **)(dword_474948 + 4 * dword_47494C);
    if ( v2 )
    {
      sub_71C8C(v2);
      *(_DWORD *)(v0 + 4 * v1) = 0;
      if ( v1 )
      {
        v3 = v1 - 1;
        v4 = *(int **)(v0 + 4 * v3);
        dword_47494C = v3;
        if ( v4 )
        {
          v5 = *v4;
          v6 = v4[4];
          dword_4748EC = v4[2];
          dword_474A5C = v5;
          v7 = *(_BYTE *)dword_4748EC;
          dword_4748F0 = dword_4748EC;
          dword_474950 = v6;
          byte_474944 = v7;
        }
      }
    }
  }
}
