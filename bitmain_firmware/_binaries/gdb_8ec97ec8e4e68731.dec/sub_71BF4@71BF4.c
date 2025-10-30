void __fastcall sub_71BF4(int *a1)
{
  int v2; // r2
  int v3; // r1
  int *v4; // r12
  int **v5; // r0
  int v6; // r12
  int v7; // lr
  int v8; // r2
  _BYTE *v9; // r2
  int v10; // r1
  int v11; // r0

  sub_70ED8();
  v2 = dword_474948;
  if ( dword_474948 )
  {
    v3 = dword_47494C;
    v4 = *(int **)(dword_474948 + 4 * dword_47494C);
    v5 = (int **)(dword_474948 + 4 * dword_47494C);
    if ( v4 == a1 )
      return;
    if ( v4 )
    {
      v6 = dword_4748F0;
      v7 = dword_474950;
      *(_BYTE *)dword_4748F0 = byte_474944;
      v8 = *(_DWORD *)(v2 + 4 * v3);
      *(_DWORD *)(v8 + 8) = v6;
      *(_DWORD *)(v8 + 16) = v7;
    }
    goto LABEL_5;
  }
  if ( a1 )
  {
    v5 = (int **)(4 * dword_47494C);
LABEL_5:
    v9 = (_BYTE *)a1[2];
    v10 = *a1;
    *v5 = a1;
    v11 = a1[4];
    dword_4748EC = (int)v9;
    dword_474A5C = v10;
    LOBYTE(v10) = *v9;
    dword_4748F0 = (int)v9;
    dword_474950 = v11;
    byte_474944 = v10;
  }
}
