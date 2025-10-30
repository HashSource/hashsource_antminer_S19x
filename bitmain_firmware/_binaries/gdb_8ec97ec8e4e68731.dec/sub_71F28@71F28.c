int __fastcall sub_71F28(int result)
{
  int *v1; // r4
  int v2; // r2
  int v3; // r0
  int **v4; // r1
  int v5; // lr
  int v6; // r12
  int v7; // r2
  char *v8; // r2
  int v9; // r12
  char v10; // r1

  v1 = (int *)result;
  if ( result )
  {
    sub_70ED8();
    v2 = dword_474948;
    if ( dword_474948 )
    {
      v3 = dword_47494C;
      v4 = (int **)(dword_474948 + 4 * dword_47494C);
      if ( *v4 )
      {
        v5 = dword_4748F0;
        v4 = (int **)(dword_474948 + 4 * dword_47494C + 4);
        v6 = dword_474950;
        ++dword_47494C;
        *(_BYTE *)dword_4748F0 = byte_474944;
        v7 = *(_DWORD *)(v2 + 4 * v3);
        *(_DWORD *)(v7 + 8) = v5;
        *(_DWORD *)(v7 + 16) = v6;
      }
    }
    else
    {
      v4 = (int **)(4 * dword_47494C);
    }
    v8 = (char *)v1[2];
    v9 = *v1;
    result = v1[4];
    *v4 = v1;
    dword_4748EC = (int)v8;
    dword_474A5C = v9;
    v10 = *v8;
    dword_4748F0 = (int)v8;
    dword_474950 = result;
    byte_474944 = v10;
  }
  return result;
}
